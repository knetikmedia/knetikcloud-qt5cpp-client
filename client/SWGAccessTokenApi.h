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

#ifndef _SWG_SWGAccessTokenApi_H_
#define _SWG_SWGAccessTokenApi_H_

#include "SWGHttpRequest.h"

#include <QString>
#include "SWGOAuth2Resource.h"

#include <QObject>

namespace Swagger {

class SWGAccessTokenApi: public QObject {
    Q_OBJECT

public:
    SWGAccessTokenApi();
    SWGAccessTokenApi(QString host, QString basePath);
    ~SWGAccessTokenApi();

    QString host;
    QString basePath;

    void getOAuthToken(QString* grant_type, QString* client_id, QString* client_secret, QString* username, QString* password);
    
private:
    void getOAuthTokenCallback (HttpRequestWorker * worker);
    
signals:
    void getOAuthTokenSignal(SWGOAuth2Resource* summary);
    
};
}
#endif