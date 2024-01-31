#include "DialogStock.h"
#include "ui_DialogStock.h"

#include <QMessageBox>
#include "Scheduler.h"

extern Scheduler *pschedule;
extern Logger *plog;

DialogStock::DialogStock(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogStock)
{
    ui->setupUi(this);

    db = QSqlDatabase::addDatabase("QSQLITE", "DB_RECIPE");
    db.setDatabaseName(DB_NAME_RECIPE);

    ApproximateWaitingTime = 0;

    MILK_DISABLE = 0;
    ICE_1_DISABLE = 0;
    ICE_2_DISABLE = 0;
    HOT_1_DISABLE = 0;
    HOT_2_DISABLE = 0;
    SODA_1_DISABLE = 0;
    SODA_2_DISABLE = 0;
    COFFEE_DISABLE = 0;

    LoadDatabase();
    SetUIForm();

    connect(&timer, SIGNAL(timeout()), this, SLOT(onTimer()));
    timer.start(400);
}

DialogStock::~DialogStock()
{
    delete ui;
}

void DialogStock::onTimer(){
    if(IS_UI_LOCK){
        ui->GB_STOCK->setEnabled(false);
    }else{
        ui->GB_STOCK->setEnabled(true);
    }

    UpdateUI();

    UpdateStockReserved();
    UpdateMenuAvailable();
    UpdateWaitingTime();
}

void DialogStock::LoadDatabase(){
    if(!db.open()){
        qDebug() << "Load Recipe Database Fail";
        return;
    }

    QSqlQuery query(db);
    if(query.exec("SELECT * FROM Table_Stock")){
        stock.clear();
        while(query.next()){
            QString key_stock = query.value("stock").toString();
            QString type = query.value("type").toString();
            int current = query.value("current").toInt();
            int minimum = query.value("minimum").toInt();
            int maximum = query.value("maximum").toInt();
            QString name = query.value("korean").toString();
            ST_STOCK temp_stock;
            temp_stock.type = type;
            temp_stock.name = name;
            temp_stock.current = current;
            temp_stock.maximum = maximum;
            temp_stock.minimum = minimum;
            temp_stock.error = 0;
            stock[key_stock] = temp_stock;
        }
    }

    ice_rotate_1 = 10;
    ice_rotate_2 = 10;
    if(query.exec("SELECT * FROM Table_Option")){
        while(query.next()){
            if(query.value("Ingredient").toString() == "ICE_1"){
                ice_rotate_1 = query.value("Option").toInt();
            }else if(query.value("Ingredient").toString() == "ICE_2"){
                ice_rotate_2 = query.value("Option").toInt();
            }
        }
    }


    if(query.exec("SELECT * FROM Table_Coffee")){
        coffee_key_btn.clear();
        coffee_desc_btn.clear();
        while(query.next()){
            QString key_coffee = query.value("key").toString();
            QString btn_coffee = query.value("button").toString();
            QString desc_coffee = query.value("description").toString();
            qDebug() << key_coffee << btn_coffee << desc_coffee;
            coffee_key_btn[key_coffee] = btn_coffee;
            coffee_desc_btn[desc_coffee] = btn_coffee;
        }
    }


    if(query.exec("SELECT * FROM Table_Menu")){
        menu.clear();
        while(query.next()){
            QString menu_id = query.value("menu_id").toString();
            QString menu_name = query.value("menu_name").toString();
            int menu_time = query.value("time").toInt();
            bool option_available = query.value("option").toInt();
            ST_MENU temp_menu;
            temp_menu.menu_id = menu_id;
            temp_menu.menu_name = menu_name;
            temp_menu.time = menu_time;
            temp_menu.option_available = option_available;

            V_RECIPE temp_recipe;
            for(int i=0; i<10; i++){
                QString step = QString().sprintf("step%d", i+1);
                QString amount = QString().sprintf("amount%d", i+1);
                if(query.value(step).isNull()){
                    ST_RECIPE_STEP temp_step;
                    temp_step.ingredient = "OUTLET";
                    temp_step.amount = 1;
                    temp_recipe.push_back(temp_step);
                    break;
                }else{
                    ST_RECIPE_STEP temp_step;
                    temp_step.ingredient = query.value(step).toString();
                    temp_step.amount = query.value(amount).toString();
                    temp_recipe.push_back(temp_step);
                }
            }
            temp_menu.recipe = temp_recipe;
            menu[menu_id] = temp_menu;
        }
    }

}

void DialogStock::SetUIForm(){
    ui->LB_CUP_1->setText(stock["PAPER_CUP_1"].name);
    ui->LB_CUP_2->setText(stock["PAPER_CUP_2"].name);
    ui->LB_CUP_3->setText(stock["PET_CUP_1"].name);
    ui->LB_CUP_4->setText(stock["PET_CUP_2"].name);

    ui->PB_CUP_1->setMaximum(stock["PAPER_CUP_1"].maximum);
    ui->PB_CUP_2->setMaximum(stock["PAPER_CUP_2"].maximum);
    ui->PB_CUP_3->setMaximum(stock["PET_CUP_1"].maximum);
    ui->PB_CUP_4->setMaximum(stock["PET_CUP_2"].maximum);

    // ---------------------


    // ---------------------

    ui->LB_SAUCE_1->setText(stock["SAUCE_1"].name);
    ui->LB_SAUCE_2->setText(stock["SAUCE_2"].name);
    ui->LB_SAUCE_3->setText(stock["SAUCE_3"].name);
    ui->LB_SAUCE_4->setText(stock["SAUCE_4"].name);
    ui->LB_SAUCE_5->setText(stock["SAUCE_5"].name);
    ui->LB_SAUCE_6->setText(stock["SAUCE_6"].name);
    ui->LB_SAUCE_7->setText(stock["SAUCE_7"].name);
    ui->LB_SAUCE_8->setText(stock["SAUCE_8"].name);
    ui->PB_SAUCE_1->setMaximum(stock["SAUCE_1"].maximum);
    ui->PB_SAUCE_2->setMaximum(stock["SAUCE_2"].maximum);
    ui->PB_SAUCE_3->setMaximum(stock["SAUCE_3"].maximum);
    ui->PB_SAUCE_4->setMaximum(stock["SAUCE_4"].maximum);
    ui->PB_SAUCE_5->setMaximum(stock["SAUCE_5"].maximum);
    ui->PB_SAUCE_6->setMaximum(stock["SAUCE_6"].maximum);
    ui->PB_SAUCE_7->setMaximum(stock["SAUCE_7"].maximum);
    ui->PB_SAUCE_8->setMaximum(stock["SAUCE_8"].maximum);

    // ---------------------


    // ---------------------

    ui->LB_MILK->setText(stock["MILK"].name);
    ui->LB_ICE_1->setText(stock["ICE_1"].name);

    ui->LB_ICE_2->setText(stock["ICE_2"].name);
    ui->LB_HOT_1->setText(stock["HOT_1"].name);
    ui->LB_HOT_2->setText(stock["HOT_2"].name);

    ui->LB_SODA_1->setText(stock["SODA_1"].name);
    ui->LB_SODA_2->setText(stock["SODA_2"].name);
    ui->LB_COFFEE->setText(stock["COFFEE"].name);

    ui->LE_ICE_ROTATE_1->setText(QString::number(ice_rotate_1));
    ui->LE_ICE_ROTATE_2->setText(QString::number(ice_rotate_2));

}

void DialogStock::UpdateUI(){
    ui->PB_CUP_1->setValue(stock["PAPER_CUP_1"].current);
    ui->PB_CUP_2->setValue(stock["PAPER_CUP_2"].current);
    ui->PB_CUP_3->setValue(stock["PET_CUP_1"].current);
    ui->PB_CUP_4->setValue(stock["PET_CUP_2"].current);
    ui->PB_CUP_1->setFormat(QString().sprintf("%d / %d", stock["PAPER_CUP_1"].current, stock["PAPER_CUP_1"].maximum));
    ui->PB_CUP_2->setFormat(QString().sprintf("%d / %d", stock["PAPER_CUP_2"].current, stock["PAPER_CUP_2"].maximum));
    ui->PB_CUP_3->setFormat(QString().sprintf("%d / %d", stock["PET_CUP_1"].current, stock["PET_CUP_1"].maximum));
    ui->PB_CUP_4->setFormat(QString().sprintf("%d / %d", stock["PET_CUP_2"].current, stock["PET_CUP_2"].maximum));

    //------------------------


    //------------------------

    ui->PB_SAUCE_1->setValue(stock["SAUCE_1"].current);
    ui->PB_SAUCE_2->setValue(stock["SAUCE_2"].current);
    ui->PB_SAUCE_3->setValue(stock["SAUCE_3"].current);
    ui->PB_SAUCE_4->setValue(stock["SAUCE_4"].current);
    ui->PB_SAUCE_5->setValue(stock["SAUCE_5"].current);
    ui->PB_SAUCE_6->setValue(stock["SAUCE_6"].current);
    ui->PB_SAUCE_7->setValue(stock["SAUCE_7"].current);
    ui->PB_SAUCE_8->setValue(stock["SAUCE_8"].current);
    ui->PB_SAUCE_1->setFormat(QString().sprintf("%d / %d", stock["SAUCE_1"].current, stock["SAUCE_1"].maximum));
    ui->PB_SAUCE_2->setFormat(QString().sprintf("%d / %d", stock["SAUCE_2"].current, stock["SAUCE_2"].maximum));
    ui->PB_SAUCE_3->setFormat(QString().sprintf("%d / %d", stock["SAUCE_3"].current, stock["SAUCE_3"].maximum));
    ui->PB_SAUCE_4->setFormat(QString().sprintf("%d / %d", stock["SAUCE_4"].current, stock["SAUCE_4"].maximum));
    ui->PB_SAUCE_5->setFormat(QString().sprintf("%d / %d", stock["SAUCE_5"].current, stock["SAUCE_5"].maximum));
    ui->PB_SAUCE_6->setFormat(QString().sprintf("%d / %d", stock["SAUCE_6"].current, stock["SAUCE_6"].maximum));
    ui->PB_SAUCE_7->setFormat(QString().sprintf("%d / %d", stock["SAUCE_7"].current, stock["SAUCE_7"].maximum));
    ui->PB_SAUCE_8->setFormat(QString().sprintf("%d / %d", stock["SAUCE_8"].current, stock["SAUCE_8"].maximum));

    //------------------------


    //------------------------



    //------------------------
//    ui->PB_MILK->setValue(stock["MILK"].current);
//    ui->PB_MILK->setFormat(QString().sprintf("%d / %d", stock["MILK"].current, stock["MILK"].maximum));



    if(MILK_DISABLE == 1 || stock["MILK"].current == 0){
        SetBTNColor(ui->BTN_MILK_NOUSE,"red");
        SetBTNColor(ui->BTN_MILK_USE,"#dddddd");
    }else{
        if(stock["MILK"].error == 1 || stock["COFFEE"].error == 1){
            SetBTNColor(ui->BTN_MILK_USE,"red");
        }else{
            SetBTNColor(ui->BTN_MILK_USE,"#12d27c");
        }
        SetBTNColor(ui->BTN_MILK_NOUSE,"#dddddd");
    }

    if(ICE_1_DISABLE == 1 || stock["ICE_1"].current == 0){
        SetBTNColor(ui->BTN_ICE1_NOUSE,"red");
        SetBTNColor(ui->BTN_ICE1_USE,"#dddddd");
    }else{
        if(stock["ICE_1"].error == 1){
            SetBTNColor(ui->BTN_ICE1_USE,"red");
        }else{
            SetBTNColor(ui->BTN_ICE1_USE,"#12d27c");
        }
        SetBTNColor(ui->BTN_ICE1_NOUSE,"#dddddd");
    }

    if(ICE_2_DISABLE == 1 || stock["ICE_2"].current == 0){
        SetBTNColor(ui->BTN_ICE2_NOUSE,"red");
        SetBTNColor(ui->BTN_ICE2_USE,"#dddddd");
    }else{
        if(stock["ICE_2"].error == 1){
            SetBTNColor(ui->BTN_ICE2_USE,"red");
        }else{
            SetBTNColor(ui->BTN_ICE2_USE,"#12d27c");
        }
        SetBTNColor(ui->BTN_ICE2_NOUSE,"#dddddd");
    }

    if(HOT_1_DISABLE == 1 || stock["HOT_1"].current == 0){
        SetBTNColor(ui->BTN_HOT1_NOUSE,"red");
        SetBTNColor(ui->BTN_HOT1_USE,"#dddddd");
    }else{
        if(stock["HOT_1"].error == 1){
            SetBTNColor(ui->BTN_HOT1_USE,"red");
        }else{
            SetBTNColor(ui->BTN_HOT1_USE,"#12d27c");
        }
        SetBTNColor(ui->BTN_HOT1_NOUSE,"#dddddd");
    }

    if(HOT_2_DISABLE == 1 || stock["HOT_2"].current == 0){
        SetBTNColor(ui->BTN_HOT2_NOUSE,"red");
        SetBTNColor(ui->BTN_HOT2_USE,"#dddddd");
    }else{
        if(stock["HOT_2"].error == 1){
            SetBTNColor(ui->BTN_HOT2_USE,"red");
        }else{
            SetBTNColor(ui->BTN_HOT2_USE,"#12d27c");
        }
        SetBTNColor(ui->BTN_HOT2_NOUSE,"#dddddd");
    }

    if(SODA_1_DISABLE == 1 || stock["SODA_1"].current == 0){
        SetBTNColor(ui->BTN_SODA1_NOUSE,"red");
        SetBTNColor(ui->BTN_SODA1_USE,"#dddddd");
    }else{
        if(stock["SODA_1"].error == 1){
            SetBTNColor(ui->BTN_SODA1_USE,"red");
        }else{
            SetBTNColor(ui->BTN_SODA1_USE,"#12d27c");
        }
        SetBTNColor(ui->BTN_SODA1_NOUSE,"#dddddd");
    }

    if(SODA_2_DISABLE == 1 || stock["SODA_2"].current == 0){
        SetBTNColor(ui->BTN_SODA2_NOUSE,"red");
        SetBTNColor(ui->BTN_SODA2_USE,"#dddddd");
    }else{
        if(stock["SODA_2"].error == 1){
            SetBTNColor(ui->BTN_SODA2_USE,"red");
        }else{
            SetBTNColor(ui->BTN_SODA2_USE,"#12d27c");
        }
        SetBTNColor(ui->BTN_SODA2_NOUSE,"#dddddd");
    }

    if(COFFEE_DISABLE == 1 || stock["COFFEE"].current == 0){
        SetBTNColor(ui->BTN_COFFEE_NOUSE,"red");
        SetBTNColor(ui->BTN_COFFEE_USE,"#dddddd");
    }else{
        if(stock["COFFEE"].error == 1){
            SetBTNColor(ui->BTN_COFFEE_USE,"red");
        }else{
            SetBTNColor(ui->BTN_COFFEE_USE,"#12d27c");
        }
        SetBTNColor(ui->BTN_COFFEE_NOUSE,"#dddddd");
    }
}

void DialogStock::UseStock(QString stock_name, int amount){
    stock[stock_name].current = stock[stock_name].current - amount;
    if(stock[stock_name].current < 0){
        stock[stock_name].current = 0;
    }
    UpdateStock(stock_name);
}

void DialogStock::UpdateStock(QString stock_name){
    QSqlQuery query(db);
    int cur = stock[stock_name].current;

    QString update_str = QString().sprintf("UPDATE Table_Stock SET current = %d WHERE stock = \'%s\'", cur, stock_name.toStdString().data());
    query.exec(update_str);
}

void DialogStock::SetStock(QString stock_name, int amount){
    QSqlQuery query(db);
    int cur = stock[stock_name].current = amount;

    QString update_str = QString().sprintf("UPDATE Table_Stock SET current = %d WHERE stock = \'%s\'", cur, stock_name.toStdString().data());
    query.exec(update_str);
}

int DialogStock::GetStock(QString stock_name){
    return stock[stock_name].current;
}

void DialogStock::FillFull(QString stock_name){
    SetStock(stock_name, stock[stock_name].maximum);
}
void DialogStock::FillHalf(QString stock_name){
    SetStock(stock_name, stock[stock_name].maximum/2);
}


void DialogStock::SetDeviceError(QString stock_name){
    stock[stock_name].error = 1;
}
void DialogStock::ClearDeviceError(QString stock_name){
    stock[stock_name].error = 0;
}
int DialogStock::IsDeviceError(QString stock_name){
    return stock[stock_name].error;
}


void DialogStock::UpdateStockReserved(){
    QStringList stock_keys = stock.keys();
    for(int i=0; i<stock_keys.size(); i++){
        QString stock_id = stock_keys[i];
        stock[stock_id].reserved = 0;
    }

    if(pschedule == NULL)
        return;

    QVector<ST_RECIPE_INFO> list_waiting;
    list_waiting = pschedule->list_waiting;
    if(pschedule->list_inprogress.size() > 0){
        list_waiting.push_back(pschedule->list_inprogress[0]);
    }
    for(int i=0; i<list_waiting.size(); i++){
        V_RECIPE re = list_waiting[i].recipe;
        for(int j=0; j<re.size(); j++){
            QString ingredient = re[j].ingredient;
            QString amount = re[j].amount;

            if(ingredient == "PAPER_CUP"){
                stock["PAPER_CUP_1"].reserved += 1;
            }else if(ingredient == "PET_CUP"){
                stock["PET_CUP_1"].reserved += 1;
            }else if(ingredient.left(3) == "ICE" ||
                     ingredient.left(3) == "HOT" || ingredient.left(4) == "SODA" ||
                     ingredient == "COFFEE"){
                ;
            }else{
                stock[ingredient].reserved += amount.toUInt();
            }
        }
    }
}

void DialogStock::UpdateWaitingTime(){
    if(pschedule == NULL)
        return;

    QVector<ST_RECIPE_INFO> list_waiting;
    list_waiting = pschedule->list_waiting;
    if(pschedule->list_inprogress.size() > 0){
        list_waiting.push_back(pschedule->list_inprogress[0]);
    }

    int total_time = 0;
    for(int i=0; i<list_waiting.size(); i++){
        QString temp_id = list_waiting[i].menu_id;
        int temp_time = menu[temp_id].time;
        total_time += temp_time;
    }
    ApproximateWaitingTime = total_time;
}

void DialogStock::UpdateMenuAvailable(){
    QStringList menu_keys = menu.keys();
    for(int i=0; i<menu_keys.size(); i++){
        QString menu_id = menu_keys[i];
        V_RECIPE re = menu[menu_id].recipe;

        bool available = true;
        for(int j=0; j<re.size(); j++){
            QString ingredient = re[j].ingredient;
            QString amount = re[j].amount;
            if(ingredient == "PAPER_CUP"){
                int cur_stock1, cur_stock2;
                if(stock["PAPER_CUP_1"].error == 1){
                    cur_stock1 = 0;
                }else{
                    cur_stock1 = stock["PAPER_CUP_1"].current - stock["PAPER_CUP_1"].minimum;
                }
                if(stock["PAPER_CUP_2"].error == 1){
                    cur_stock2 = 0;
                }else{
                    cur_stock2 = stock["PAPER_CUP_2"].current - stock["PAPER_CUP_2"].minimum;
                }
                int cur_stock = cur_stock1 + cur_stock2;
                int reserved = stock["PAPER_CUP_1"].reserved;

                if(cur_stock-reserved < 1){
                    available = false;
                    break;
                }
            }else if(ingredient == "PET_CUP"){
                int cur_stock = stock["PET_CUP_1"].current - stock["PET_CUP_1"].minimum + stock["PET_CUP_2"].current - stock["PET_CUP_2"].minimum;
                int reserved = stock["PET_CUP_1"].reserved;
                if(cur_stock-reserved < 1){
                    available = false;
                    break;
                }
            }else if(ingredient == "MILK"){
                int cur_stock = stock["MILK"].current - stock["MILK"].minimum;
                int reserved = stock["MILK"].reserved;
                if(cur_stock-reserved < MILK_APPROXIMATION_USE_AMOUNT){ // approximation
                    available = false;
                    break;
                }
                if(stock["COFFEE"].error == 1 || stock["MILK"].error == 1){
                    available = false;
                    break;
                }
                if(stock["MILK"].current == 0){
                    available = false;
                    break;
                }
            }else if(ingredient.left(3) == "ICE"){
                if(stock["ICE_1"].error == 1 && stock["ICE_2"].error == 1){
                    available = false;
                    break;
                }
                if(stock["ICE_1"].current == 0 && stock["ICE_2"].current == 0){
                    available = false;
                    break;
                }
            }else if(ingredient.left(3) == "HOT"){
                if(stock["HOT_1"].error == 1 && stock["HOT_2"].error == 1){
                    available = false;
                    break;
                }
                if(stock["HOT_1"].current == 0 && stock["HOT_2"].current == 0){
                    available = false;
                    break;
                }
            }else if(ingredient.left(4) == "SODA"){
                if(stock["SODA_1"].error == 1 && stock["SODA_2"].error == 1){
                    available = false;
                    break;
                }
                if(stock["SODA_1"].current == 0 && stock["SODA_2"].current == 0){
                    available = false;
                    break;
                }
            }else if(ingredient == "COFFEE"){
                if(amount == "ESP"){
                    if(stock["COFFEE"].error == 1 || stock["COFFEE"].current == 0){
                        available = false;
                        break;
                    }
                }else if(amount == "LAH1" || amount == "LAH2" || amount == "CPH" || amount == "LAI" || amount == "CPI"){

                    if(stock["COFFEE"].error == 1 || stock["COFFEE"].current == 0){
                        available = false;
                        break;
                    }
                    if(stock["MILK"].error == 1 || stock["MILK"].current == 0){
                        available = false;
                        break;
                    }
                }else if(amount == "MFH" || amount == "MFI"){

                    if(stock["COFFEE"].error == 1  || stock["MILK"].error == 1 || stock["MILK"].current == 0){
                        available = false;
                        break;
                    }
                }else{
                    available = false;
                    break;
                }
            }else{
                int cur_stock = stock[ingredient].current - stock[ingredient].minimum;
                int reserved = stock[ingredient].reserved;
                if(cur_stock-reserved < ingredient.toInt()){
                    available = false;
                    break;
                }
            }
        }
        menu[menu_id].available = available;
//        qDebug() << menu[menu_id].menu_name << menu[menu_id].available;
    }
}


void DialogStock::on_BTN_CUP_HALF_1_clicked(){  FillHalf("PAPER_CUP_1"); }
void DialogStock::on_BTN_CUP_FULL_1_clicked(){  FillFull("PAPER_CUP_1"); }
void DialogStock::on_BTN_CUP_HALF_2_clicked(){  FillHalf("PAPER_CUP_2"); }
void DialogStock::on_BTN_CUP_FULL_2_clicked(){  FillFull("PAPER_CUP_2"); }
void DialogStock::on_BTN_CUP_HALF_3_clicked(){  FillHalf("PET_CUP_1"); }
void DialogStock::on_BTN_CUP_FULL_3_clicked(){  FillFull("PET_CUP_1"); }
void DialogStock::on_BTN_CUP_HALF_4_clicked(){  FillHalf("PET_CUP_2"); }
void DialogStock::on_BTN_CUP_FULL_4_clicked(){  FillFull("PET_CUP_2"); }


void DialogStock::on_BTN_SAUCE_REPLACE_1_clicked(){ FillFull("SAUCE_1"); }
void DialogStock::on_BTN_SAUCE_REPLACE_2_clicked(){ FillFull("SAUCE_2"); }
void DialogStock::on_BTN_SAUCE_REPLACE_3_clicked(){ FillFull("SAUCE_3"); }
void DialogStock::on_BTN_SAUCE_REPLACE_4_clicked(){ FillFull("SAUCE_4"); }
void DialogStock::on_BTN_SAUCE_REPLACE_5_clicked(){ FillFull("SAUCE_5"); }
void DialogStock::on_BTN_SAUCE_REPLACE_6_clicked(){ FillFull("SAUCE_6"); }
void DialogStock::on_BTN_SAUCE_REPLACE_7_clicked(){ FillFull("SAUCE_7"); }
void DialogStock::on_BTN_SAUCE_REPLACE_8_clicked(){ FillFull("SAUCE_8"); }
void DialogStock::on_BTN_SAUCE_REPLACE_9_clicked(){ FillFull("SAUCE_9"); }
void DialogStock::on_BTN_SAUCE_REPLACE_10_clicked(){ FillFull("SAUCE_10"); }



void DialogStock::on_BTN_SET_STOCK_MANUAL_clicked(){
//    SetStock(ui->CB_STOCK_NAME->currentText(), ui->LE_MANUAL_STOCK_AMOUNT->text().toInt());
}

bool DialogStock::IsMenuOptionAvailable(QString menu_id){
    return menu[menu_id].option_available;
}

void DialogStock::on_BTN_DB_RELOAD_clicked()
{
    LoadDatabase();
}
void DialogStock::on_BTN_MILK_USE_clicked()
{
    SetStock("MILK",1);
}

void DialogStock::on_BTN_MILK_NOUSE_clicked()
{
    SetStock("MILK",0);
}

void DialogStock::on_BTN_COFFEE_USE_clicked(){
    SetStock("COFFEE",1);
}
void DialogStock::on_BTN_COFFEE_NOUSE_clicked(){
    SetStock("COFFEE",0);
}
void DialogStock::on_BTN_SODA1_USE_clicked(){
    SetStock("SODA_1",1);
}
void DialogStock::on_BTN_SODA1_NOUSE_clicked(){
    SetStock("SODA_1",0);
}
void DialogStock::on_BTN_SODA2_USE_clicked(){
    SetStock("SODA_2",1);
}
void DialogStock::on_BTN_SODA2_NOUSE_clicked(){
    SetStock("SODA_2",0);
}
void DialogStock::on_BTN_ICE1_USE_clicked(){
    SetStock("ICE_1",1);
}
void DialogStock::on_BTN_ICE1_NOUSE_clicked(){
    SetStock("ICE_1",0);
}
void DialogStock::on_BTN_ICE2_USE_clicked(){
    SetStock("ICE_2",1);
}
void DialogStock::on_BTN_ICE2_NOUSE_clicked(){
    SetStock("ICE_2",0);
}
void DialogStock::on_BTN_HOT1_USE_clicked(){
    SetStock("HOT_1",1);
}
void DialogStock::on_BTN_HOT1_NOUSE_clicked(){
    SetStock("HOT_1",0);
}
void DialogStock::on_BTN_HOT2_USE_clicked(){
    SetStock("HOT_2",1);
}
void DialogStock::on_BTN_HOT2_NOUSE_clicked(){
    SetStock("HOT_2",0);
}

void DialogStock::on_BTN_CUP_NOUSE_1_clicked()
{
    SetStock("PAPER_CUP_1",0);
}
void DialogStock::on_BTN_CUP_NOUSE_2_clicked()
{
    SetStock("PAPER_CUP_2",0);
}
void DialogStock::on_BTN_CUP_NOUSE_3_clicked()
{
    SetStock("PET_CUP_1",0);
}
void DialogStock::on_BTN_CUP_NOUSE_4_clicked()
{
    SetStock("PET_CUP_2",0);
}


void DialogStock::on_BTN_ENABLE_MILK_clicked()
{
    if(MILK_DISABLE == 0){
        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, "우유 비활성화",
                                          "<font size=6>우유를 비활성화 하시겠습니까?</font>");
        if(reply == QMessageBox::Yes){
            if(OP_STATUS_OPERATING == PLATFORM_OPERATION_ON_OPERATING_STATE){
                QMessageBox::warning(this, "비활성화 실패", "<font size=4>운영 종료 후 다시 시도해 주시기 바랍니다.</font>");
            }else{
                MILK_DISABLE = 1;
                plog->write("[UI STOCK] DISABLE MILK clicked");
            }
        }
    }else{
        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, "우유 활성화",
                                          "<font size=6>우유를 활성화 하시겠습니까?</font>");
        if(reply == QMessageBox::Yes){
            if(OP_STATUS_OPERATING == PLATFORM_OPERATION_ON_OPERATING_STATE){
                    QMessageBox::warning(this, "활성화 실패", "<font size=4>운영 종료 후 다시 시도해 주시기 바랍니다.</font>");
            }else{
                MILK_DISABLE = 0;
                plog->write("[UI STOCK] ENABLE MILK clicked");
            }
        }
    }
}

void DialogStock::on_BTN_ENABLE_ICE_1_clicked()
{
    if(ICE_1_DISABLE == 0){
        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, "얼음 1 비활성화",
                                          "<font size=6>얼음 1를 비활성화 하시겠습니까?</font>");
        if(reply == QMessageBox::Yes){
            if(OP_STATUS_OPERATING == PLATFORM_OPERATION_ON_OPERATING_STATE){
                QMessageBox::warning(this, "비활성화 실패", "<font size=4>운영 종료 후 다시 시도해 주시기 바랍니다.</font>");
            }else{
                ICE_1_DISABLE = 1;
                plog->write("[UI STOCK] DISABLE ICE_1 clicked");
            }
        }
    }else{
        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, "얼음 1 활성화",
                                          "<font size=6>얼음 1를 활성화 하시겠습니까?</font>");
        if(reply == QMessageBox::Yes){
            if(OP_STATUS_OPERATING == PLATFORM_OPERATION_ON_OPERATING_STATE){
                    QMessageBox::warning(this, "활성화 실패", "<font size=4>운영 종료 후 다시 시도해 주시기 바랍니다.</font>");
            }else{
                ICE_1_DISABLE = 0;
                plog->write("[UI STOCK] ENABLE ICE_1 clicked");
            }
        }
    }
}

void DialogStock::on_BTN_ENABLE_ICE_2_clicked()
{
    if(ICE_2_DISABLE == 0){
        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, "얼음 2 비활성화",
                                          "<font size=6>얼음 2를 비활성화 하시겠습니까?</font>");
        if(reply == QMessageBox::Yes){
            if(OP_STATUS_OPERATING == PLATFORM_OPERATION_ON_OPERATING_STATE){
                QMessageBox::warning(this, "비활성화 실패", "<font size=4>운영 종료 후 다시 시도해 주시기 바랍니다.</font>");
            }else{
                ICE_2_DISABLE = 1;
                plog->write("[UI STOCK] DISABLE ICE_2 clicked");
            }
        }
    }else{
        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, "얼음 1 활성화",
                                          "<font size=6>얼음 2를 활성화 하시겠습니까?</font>");
        if(reply == QMessageBox::Yes){
            if(OP_STATUS_OPERATING == PLATFORM_OPERATION_ON_OPERATING_STATE){
                    QMessageBox::warning(this, "활성화 실패", "<font size=4>운영 종료 후 다시 시도해 주시기 바랍니다.</font>");
            }else{
                ICE_2_DISABLE = 0;
                plog->write("[UI STOCK] ENABLE ICE_2 clicked");
            }
        }
    }
}

void DialogStock::on_BTN_ENABLE_HOT_1_clicked()
{
    if(HOT_1_DISABLE == 0){
        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, "온수 1 비활성화",
                                          "<font size=6>온수 1를 비활성화 하시겠습니까?</font>");
        if(reply == QMessageBox::Yes){
            if(OP_STATUS_OPERATING == PLATFORM_OPERATION_ON_OPERATING_STATE){
                QMessageBox::warning(this, "비활성화 실패", "<font size=4>운영 종료 후 다시 시도해 주시기 바랍니다.</font>");
            }else{
                HOT_1_DISABLE = 1;
                plog->write("[UI STOCK] DISABLE HOT_1 clicked");
            }
        }
    }else{
        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, "온수 1 활성화",
                                          "<font size=6>온수 1를 활성화 하시겠습니까?</font>");
        if(reply == QMessageBox::Yes){
            if(OP_STATUS_OPERATING == PLATFORM_OPERATION_ON_OPERATING_STATE){
                    QMessageBox::warning(this, "활성화 실패", "<font size=4>운영 종료 후 다시 시도해 주시기 바랍니다.</font>");
            }else{
                HOT_1_DISABLE = 0;
                plog->write("[UI STOCK] ENABLE HOT_1 clicked");
            }
        }
    }
}

void DialogStock::on_BTN_ENABLE_HOT_2_clicked()
{
    if(HOT_2_DISABLE == 0){
        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, "온수 2 비활성화",
                                          "<font size=6>온수 2를 비활성화 하시겠습니까?</font>");
        if(reply == QMessageBox::Yes){
            if(OP_STATUS_OPERATING == PLATFORM_OPERATION_ON_OPERATING_STATE){
                QMessageBox::warning(this, "비활성화 실패", "<font size=4>운영 종료 후 다시 시도해 주시기 바랍니다.</font>");
            }else{
                HOT_2_DISABLE = 1;
                plog->write("[UI STOCK] DISABLE HOT_2 clicked");
            }
        }
    }else{
        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, "온수 2 활성화",
                                          "<font size=6>온수 2를 활성화 하시겠습니까?</font>");
        if(reply == QMessageBox::Yes){
            if(OP_STATUS_OPERATING == PLATFORM_OPERATION_ON_OPERATING_STATE){
                    QMessageBox::warning(this, "활성화 실패", "<font size=4>운영 종료 후 다시 시도해 주시기 바랍니다.</font>");
            }else{
                HOT_2_DISABLE = 0;
                plog->write("[UI STOCK] ENABLE HOT_2 clicked");
            }
        }
    }
}

void DialogStock::on_BTN_ENABLE_SODA_1_clicked()
{
    if(SODA_1_DISABLE == 0){
        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, "탄산수 1 비활성화",
                                          "<font size=6>탄산수 1를 비활성화 하시겠습니까?</font>");
        if(reply == QMessageBox::Yes){
            if(OP_STATUS_OPERATING == PLATFORM_OPERATION_ON_OPERATING_STATE){
                QMessageBox::warning(this, "비활성화 실패", "<font size=4>운영 종료 후 다시 시도해 주시기 바랍니다.</font>");
            }else{
                SODA_1_DISABLE = 1;
                plog->write("[UI STOCK] DISABLE SODA_1 clicked");
            }
        }
    }else{
        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, "탄산수 1 활성화",
                                          "<font size=6>탄산수 1를 활성화 하시겠습니까?</font>");
        if(reply == QMessageBox::Yes){
            if(OP_STATUS_OPERATING == PLATFORM_OPERATION_ON_OPERATING_STATE){
                    QMessageBox::warning(this, "활성화 실패", "<font size=4>운영 종료 후 다시 시도해 주시기 바랍니다.</font>");
            }else{
                SODA_1_DISABLE = 0;
                plog->write("[UI STOCK] ENABLE SODA_1 clicked");
            }
        }
    }
}

void DialogStock::on_BTN_ENABLE_SODA_2_clicked()
{
    if(SODA_2_DISABLE == 0){
        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, "탄산수 2 비활성화",
                                          "<font size=6>탄산수 2를 비활성화 하시겠습니까?</font>");
        if(reply == QMessageBox::Yes){
            if(OP_STATUS_OPERATING == PLATFORM_OPERATION_ON_OPERATING_STATE){
                QMessageBox::warning(this, "비활성화 실패", "<font size=4>운영 종료 후 다시 시도해 주시기 바랍니다.</font>");
            }else{
                SODA_2_DISABLE = 1;
                plog->write("[UI STOCK] DISABLE SODA_2 clicked");
            }
        }
    }else{
        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, "탄산수 2 활성화",
                                          "<font size=6>탄산수 2를 활성화 하시겠습니까?</font>");
        if(reply == QMessageBox::Yes){
            if(OP_STATUS_OPERATING == PLATFORM_OPERATION_ON_OPERATING_STATE){
                    QMessageBox::warning(this, "활성화 실패", "<font size=4>운영 종료 후 다시 시도해 주시기 바랍니다.</font>");
            }else{
                SODA_2_DISABLE = 0;
                plog->write("[UI STOCK] ENABLE SODA_2 clicked");
            }
        }
    }
}

void DialogStock::on_BTN_ENABLE_COFFEE_clicked()
{
    if(COFFEE_DISABLE == 0){
        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, "커피 비활성화",
                                          "<font size=6>커피를 비활성화 하시겠습니까?</font>");
        if(reply == QMessageBox::Yes){
            if(OP_STATUS_OPERATING == PLATFORM_OPERATION_ON_OPERATING_STATE){
                QMessageBox::warning(this, "비활성화 실패", "<font size=4>운영 종료 후 다시 시도해 주시기 바랍니다.</font>");
            }else{
                COFFEE_DISABLE = 1;
                plog->write("[UI STOCK] DISABLE COFFEE clicked");
            }
        }
    }else{
        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, "커피 활성화",
                                          "<font size=6>커피를 활성화 하시겠습니까?</font>");
        if(reply == QMessageBox::Yes){
            if(OP_STATUS_OPERATING == PLATFORM_OPERATION_ON_OPERATING_STATE){
                    QMessageBox::warning(this, "활성화 실패", "<font size=4>운영 종료 후 다시 시도해 주시기 바랍니다.</font>");
            }else{
                COFFEE_DISABLE = 0;
                plog->write("[UI STOCK] ENABLE COFFEE clicked");
            }
        }
    }
}

void DialogStock::on_BTN_ICE_ROTATE_clicked()
{
    QSqlQuery query(db);
    ice_rotate_1 = ui->LE_ICE_ROTATE_1->text().toInt();
    ice_rotate_2 = ui->LE_ICE_ROTATE_2->text().toInt();
    QString update_str = QString().sprintf("UPDATE Table_Option SET Option = %d WHERE Ingredient = \'ICE_1\'", ice_rotate_1);
    query.exec(update_str);
    update_str = QString().sprintf("UPDATE Table_Option SET Option = %d WHERE Ingredient = \'ICE_2\'", ice_rotate_2);
    query.exec(update_str);
}

void DialogStock::on_BTN_SAUCE_NOUSE_1_clicked()
{
    SetStock("SAUCE_1",0);
}
void DialogStock::on_BTN_SAUCE_NOUSE_2_clicked()
{
    SetStock("SAUCE_2",0);
}

void DialogStock::on_BTN_SAUCE_NOUSE_3_clicked()
{
    SetStock("SAUCE_3",0);
}

void DialogStock::on_BTN_SAUCE_NOUSE_4_clicked()
{
    SetStock("SAUCE_4",0);
}

void DialogStock::on_BTN_SAUCE_NOUSE_5_clicked()
{
    SetStock("SAUCE_5",0);
}

void DialogStock::on_BTN_SAUCE_NOUSE_6_clicked()
{
    SetStock("SAUCE_6",0);
}

void DialogStock::on_BTN_SAUCE_NOUSE_7_clicked()
{
    SetStock("SAUCE_7",0);
}

void DialogStock::on_BTN_SAUCE_NOUSE_8_clicked()
{
    SetStock("SAUCE_8",0);
}
