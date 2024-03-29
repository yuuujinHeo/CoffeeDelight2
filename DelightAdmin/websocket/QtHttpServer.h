#ifndef QTHTTPSERVER_H
#define QTHTTPSERVER_H

#include <QObject>
#include <QString>
#include <QHash>
#include <QTcpServer>
#include <QTcpSocket>
#include <QSslCertificate>
#include <QSslKey>
#include <QSslSocket>
#include <QHostAddress>

class QTcpSocket;
class QTcpServer;

class QtHttpRequest;
class QtHttpReply;
class QtHttpClientWrapper;

class QtHttpServerWrapper : public QTcpServer {
    Q_OBJECT

public:
    explicit QtHttpServerWrapper (QObject * parent = Q_NULLPTR);
    virtual ~QtHttpServerWrapper (void);

    void setUseSecure (const bool ssl = true);

protected:
    void incomingConnection (qintptr handle) Q_DECL_OVERRIDE;

private:
    bool m_useSsl;
};

class QtHttpServer : public QObject {
    Q_OBJECT

public:
    explicit QtHttpServer (QObject * parent = Q_NULLPTR);

    static const QString & HTTP_VERSION;

    typedef void (QSslSocket::* SslErrorSignal) (const QList<QSslError> &);

    const QString & getServerName (void) const;

    quint16 getServerPort  (void) const;
    QString getErrorString (void) const;

public slots:
    void start           (quint16 port = 0);
    void stop            (void);
    void setServerName   (const QString & serverName);
    void setUseSecure    (const bool ssl = true);
    void setPrivateKey   (const QSslKey & key);
    void setCertificates (const QList<QSslCertificate> & certs);

signals:
    void started            (quint16 port);
    void stopped            (void);
    void error              (const QString & msg);
    void clientConnected    (const QString & guid);
    void clientDisconnected (const QString & guid);
    void requestNeedsReply  (QtHttpRequest * request, QtHttpReply * reply);
    void clientConnectInfo  (const QString & peerIp);


private slots:
    void onClientConnected          (void);
    void onClientDisconnected       (void);
    void onClientSslEncrypted       (void);
    void onClientSslPeerVerifyError (const QSslError & err);
    void onClientSslErrors          (const QList<QSslError> & errors);
    void onClientSslModeChanged     (QSslSocket::SslMode mode);

private:
    bool                                       m_useSsl;
    QSslKey                                    m_sslKey;
    QList<QSslCertificate>                     m_sslCerts;
    QString                                    m_serverName;
    QtHttpServerWrapper *                      m_sockServer;
    QHash<QTcpSocket *, QtHttpClientWrapper *> m_socksClientsHash;
};

#endif // QTHTTPSERVER_H
