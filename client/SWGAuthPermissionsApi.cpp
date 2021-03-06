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

#include "SWGAuthPermissionsApi.h"
#include "SWGHelpers.h"
#include "SWGModelFactory.h"

#include <QJsonArray>
#include <QJsonDocument>

namespace Swagger {
SWGAuthPermissionsApi::SWGAuthPermissionsApi() {}

SWGAuthPermissionsApi::~SWGAuthPermissionsApi() {}

SWGAuthPermissionsApi::SWGAuthPermissionsApi(QString host, QString basePath) {
    this->host = host;
    this->basePath = basePath;
}

void
SWGAuthPermissionsApi::createPermission(SWGPermissionResource permission_resource) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/auth/permissions");



    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    
    QString output = permission_resource.asJson();
    input.request_body.append(output);
    


    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGAuthPermissionsApi::createPermissionCallback);

    worker->execute(&input);
}

void
SWGAuthPermissionsApi::createPermissionCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    SWGPermissionResource* output = static_cast<SWGPermissionResource*>(create(json, QString("SWGPermissionResource")));
    

    worker->deleteLater();

    emit createPermissionSignal(output);
    
}
void
SWGAuthPermissionsApi::deletePermission(QString* permission, bool force) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/auth/permissions/{permission}");

    QString permissionPathParam("{"); permissionPathParam.append("permission").append("}");
    fullPath.replace(permissionPathParam, stringValue(permission));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("force"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(force)));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "DELETE");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGAuthPermissionsApi::deletePermissionCallback);

    worker->execute(&input);
}

void
SWGAuthPermissionsApi::deletePermissionCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    worker->deleteLater();

    
    emit deletePermissionSignal();
}
void
SWGAuthPermissionsApi::getPermission(QString* permission) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/auth/permissions/{permission}");

    QString permissionPathParam("{"); permissionPathParam.append("permission").append("}");
    fullPath.replace(permissionPathParam, stringValue(permission));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGAuthPermissionsApi::getPermissionCallback);

    worker->execute(&input);
}

void
SWGAuthPermissionsApi::getPermissionCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    SWGPermissionResource* output = static_cast<SWGPermissionResource*>(create(json, QString("SWGPermissionResource")));
    

    worker->deleteLater();

    emit getPermissionSignal(output);
    
}
void
SWGAuthPermissionsApi::getPermissions(qint32 size, qint32 page, QString* order) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/auth/permissions");


    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("size"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(size)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("page"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(page)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("order"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(order)));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGAuthPermissionsApi::getPermissionsCallback);

    worker->execute(&input);
}

void
SWGAuthPermissionsApi::getPermissionsCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    SWGPageResource«PermissionResource»* output = static_cast<SWGPageResource«PermissionResource»*>(create(json, QString("SWGPageResource«PermissionResource»")));
    

    worker->deleteLater();

    emit getPermissionsSignal(output);
    
}
void
SWGAuthPermissionsApi::updatePermission(QString* permission, SWGPermissionResource permission_resource) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/auth/permissions/{permission}");

    QString permissionPathParam("{"); permissionPathParam.append("permission").append("}");
    fullPath.replace(permissionPathParam, stringValue(permission));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "PUT");

    
    QString output = permission_resource.asJson();
    input.request_body.append(output);
    


    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGAuthPermissionsApi::updatePermissionCallback);

    worker->execute(&input);
}

void
SWGAuthPermissionsApi::updatePermissionCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    SWGPermissionResource* output = static_cast<SWGPermissionResource*>(create(json, QString("SWGPermissionResource")));
    

    worker->deleteLater();

    emit updatePermissionSignal(output);
    
}
} /* namespace Swagger */
