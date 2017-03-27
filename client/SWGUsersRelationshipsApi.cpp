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

#include "SWGUsersRelationshipsApi.h"
#include "SWGHelpers.h"
#include "SWGModelFactory.h"

#include <QJsonArray>
#include <QJsonDocument>

namespace Swagger {
SWGUsersRelationshipsApi::SWGUsersRelationshipsApi() {}

SWGUsersRelationshipsApi::~SWGUsersRelationshipsApi() {}

SWGUsersRelationshipsApi::SWGUsersRelationshipsApi(QString host, QString basePath) {
    this->host = host;
    this->basePath = basePath;
}

void
SWGUsersRelationshipsApi::createUserRelationship(SWGUserRelationshipResource relationship) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/users/relationships");



    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    
    QString output = relationship.asJson();
    input.request_body.append(output);
    


    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGUsersRelationshipsApi::createUserRelationshipCallback);

    worker->execute(&input);
}

void
SWGUsersRelationshipsApi::createUserRelationshipCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    SWGUserRelationshipResource* output = static_cast<SWGUserRelationshipResource*>(create(json, QString("SWGUserRelationshipResource")));
    

    worker->deleteLater();

    emit createUserRelationshipSignal(output);
    
}
void
SWGUsersRelationshipsApi::deleteUserRelationship(qint64 id) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/users/relationships/{id}");

    QString idPathParam("{"); idPathParam.append("id").append("}");
    fullPath.replace(idPathParam, stringValue(id));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "DELETE");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGUsersRelationshipsApi::deleteUserRelationshipCallback);

    worker->execute(&input);
}

void
SWGUsersRelationshipsApi::deleteUserRelationshipCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    worker->deleteLater();

    
    emit deleteUserRelationshipSignal();
}
void
SWGUsersRelationshipsApi::getUserRelationship(qint64 id) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/users/relationships/{id}");

    QString idPathParam("{"); idPathParam.append("id").append("}");
    fullPath.replace(idPathParam, stringValue(id));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGUsersRelationshipsApi::getUserRelationshipCallback);

    worker->execute(&input);
}

void
SWGUsersRelationshipsApi::getUserRelationshipCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    SWGUserRelationshipResource* output = static_cast<SWGUserRelationshipResource*>(create(json, QString("SWGUserRelationshipResource")));
    

    worker->deleteLater();

    emit getUserRelationshipSignal(output);
    
}
void
SWGUsersRelationshipsApi::getUserRelationships() {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/users/relationships");



    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGUsersRelationshipsApi::getUserRelationshipsCallback);

    worker->execute(&input);
}

void
SWGUsersRelationshipsApi::getUserRelationshipsCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    SWGPageResource«UserRelationshipResource»* output = static_cast<SWGPageResource«UserRelationshipResource»*>(create(json, QString("SWGPageResource«UserRelationshipResource»")));
    

    worker->deleteLater();

    emit getUserRelationshipsSignal(output);
    
}
void
SWGUsersRelationshipsApi::updateUserRelationship(qint64 id, SWGUserRelationshipResource relationship) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/users/relationships/{id}");

    QString idPathParam("{"); idPathParam.append("id").append("}");
    fullPath.replace(idPathParam, stringValue(id));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "PUT");

    
    QString output = relationship.asJson();
    input.request_body.append(output);
    


    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGUsersRelationshipsApi::updateUserRelationshipCallback);

    worker->execute(&input);
}

void
SWGUsersRelationshipsApi::updateUserRelationshipCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    SWGUserRelationshipResource* output = static_cast<SWGUserRelationshipResource*>(create(json, QString("SWGUserRelationshipResource")));
    

    worker->deleteLater();

    emit updateUserRelationshipSignal(output);
    
}
} /* namespace Swagger */