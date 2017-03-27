/**
 * Knetik Platform API Documentation latest 
 * This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://knetikcloud.com
 *
 * OpenAPI spec version: latest 
 * Contact: support@knetik.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

#ifndef _SWG_SWGAuthTokensApi_H_
#define _SWG_SWGAuthTokensApi_H_

#include "SWGHttpRequest.h"

#include <QString>
#include "SWGOauthAccessTokenResource.h"
#include "SWGPageResource«OauthAccessTokenResource».h"
#include "SWGResult.h"

#include <QObject>

namespace Swagger {

class SWGAuthTokensApi: public QObject {
    Q_OBJECT

public:
    SWGAuthTokensApi();
    SWGAuthTokensApi(QString host, QString basePath);
    ~SWGAuthTokensApi();

    QString host;
    QString basePath;

    void deleteToken(QString* username, QString* client_id);
    void deleteTokens(QString* username);
    void getToken(QString* username, QString* client_id);
    void getTokens(QString* filter_client_id, QString* filter_username, qint32 size, qint32 page, QString* order);
    
private:
    void deleteTokenCallback (HttpRequestWorker * worker);
    void deleteTokensCallback (HttpRequestWorker * worker);
    void getTokenCallback (HttpRequestWorker * worker);
    void getTokensCallback (HttpRequestWorker * worker);
    
signals:
    void deleteTokenSignal();
    void deleteTokensSignal();
    void getTokenSignal(SWGOauthAccessTokenResource* summary);
    void getTokensSignal(SWGPageResource«OauthAccessTokenResource»* summary);
    
};
}
#endif