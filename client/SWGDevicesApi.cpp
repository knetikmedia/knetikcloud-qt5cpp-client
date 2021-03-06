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

#include "SWGDevicesApi.h"
#include "SWGHelpers.h"
#include "SWGModelFactory.h"

#include <QJsonArray>
#include <QJsonDocument>

namespace Swagger {
SWGDevicesApi::SWGDevicesApi() {}

SWGDevicesApi::~SWGDevicesApi() {}

SWGDevicesApi::SWGDevicesApi(QString host, QString basePath) {
    this->host = host;
    this->basePath = basePath;
}

void
SWGDevicesApi::createDevice(SWGDeviceResource device) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/devices");



    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    
    QString output = device.asJson();
    input.request_body.append(output);
    


    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGDevicesApi::createDeviceCallback);

    worker->execute(&input);
}

void
SWGDevicesApi::createDeviceCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    SWGDeviceResource* output = static_cast<SWGDeviceResource*>(create(json, QString("SWGDeviceResource")));
    

    worker->deleteLater();

    emit createDeviceSignal(output);
    
}
void
SWGDevicesApi::deleteDevice(qint32 id) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/devices/{id}");

    QString idPathParam("{"); idPathParam.append("id").append("}");
    fullPath.replace(idPathParam, stringValue(id));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "DELETE");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGDevicesApi::deleteDeviceCallback);

    worker->execute(&input);
}

void
SWGDevicesApi::deleteDeviceCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    worker->deleteLater();

    
    emit deleteDeviceSignal();
}
void
SWGDevicesApi::getDevice(qint32 id) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/devices/{id}");

    QString idPathParam("{"); idPathParam.append("id").append("}");
    fullPath.replace(idPathParam, stringValue(id));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGDevicesApi::getDeviceCallback);

    worker->execute(&input);
}

void
SWGDevicesApi::getDeviceCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    SWGDeviceResource* output = static_cast<SWGDeviceResource*>(create(json, QString("SWGDeviceResource")));
    

    worker->deleteLater();

    emit getDeviceSignal(output);
    
}
void
SWGDevicesApi::getDevices(QString* filter_make, QString* filter_model, qint32 size, qint32 page, QString* order) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/devices");


    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("filter_make"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(filter_make)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("filter_model"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(filter_model)));

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
            &SWGDevicesApi::getDevicesCallback);

    worker->execute(&input);
}

void
SWGDevicesApi::getDevicesCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    SWGPageResource«DeviceResource»* output = static_cast<SWGPageResource«DeviceResource»*>(create(json, QString("SWGPageResource«DeviceResource»")));
    

    worker->deleteLater();

    emit getDevicesSignal(output);
    
}
void
SWGDevicesApi::updateDevice(SWGDeviceResource device, qint32 id) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/devices/{id}");

    QString idPathParam("{"); idPathParam.append("id").append("}");
    fullPath.replace(idPathParam, stringValue(id));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "PUT");

    
    QString output = device.asJson();
    input.request_body.append(output);
    


    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGDevicesApi::updateDeviceCallback);

    worker->execute(&input);
}

void
SWGDevicesApi::updateDeviceCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    SWGDeviceResource* output = static_cast<SWGDeviceResource*>(create(json, QString("SWGDeviceResource")));
    

    worker->deleteLater();

    emit updateDeviceSignal(output);
    
}
} /* namespace Swagger */
