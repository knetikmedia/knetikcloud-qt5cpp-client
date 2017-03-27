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

#include "SWGAccessTokenApi.h"
#include "SWGHelpers.h"
#include "SWGModelFactory.h"

#include <QJsonArray>
#include <QJsonDocument>

namespace Swagger {
SWGAccessTokenApi::SWGAccessTokenApi() {}

SWGAccessTokenApi::~SWGAccessTokenApi() {}

SWGAccessTokenApi::SWGAccessTokenApi(QString host, QString basePath) {
    this->host = host;
    this->basePath = basePath;
}

void
SWGAccessTokenApi::getOAuthToken(QString* grant_type, QString* client_id, QString* client_secret, QString* username, QString* password) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/oauth/token");



    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    if (grant_type != nullptr) {
        input.add_var("grant_type", *grant_type);
    }
if (client_id != nullptr) {
        input.add_var("client_id", *client_id);
    }
if (client_secret != nullptr) {
        input.add_var("client_secret", *client_secret);
    }
if (username != nullptr) {
        input.add_var("username", *username);
    }
if (password != nullptr) {
        input.add_var("password", *password);
    }




    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGAccessTokenApi::getOAuthTokenCallback);

    worker->execute(&input);
}

void
SWGAccessTokenApi::getOAuthTokenCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    SWGOAuth2Resource* output = static_cast<SWGOAuth2Resource*>(create(json, QString("SWGOAuth2Resource")));
    

    worker->deleteLater();

    emit getOAuthTokenSignal(output);
    
}
} /* namespace Swagger */
