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

#include "SWGBRERuleEngineTriggersApi.h"
#include "SWGHelpers.h"
#include "SWGModelFactory.h"

#include <QJsonArray>
#include <QJsonDocument>

namespace Swagger {
SWGBRERuleEngineTriggersApi::SWGBRERuleEngineTriggersApi() {}

SWGBRERuleEngineTriggersApi::~SWGBRERuleEngineTriggersApi() {}

SWGBRERuleEngineTriggersApi::SWGBRERuleEngineTriggersApi(QString host, QString basePath) {
    this->host = host;
    this->basePath = basePath;
}

void
SWGBRERuleEngineTriggersApi::createBRETrigger(SWGBreTriggerResource bre_trigger_resource) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/bre/triggers");



    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    
    QString output = bre_trigger_resource.asJson();
    input.request_body.append(output);
    


    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGBRERuleEngineTriggersApi::createBRETriggerCallback);

    worker->execute(&input);
}

void
SWGBRERuleEngineTriggersApi::createBRETriggerCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    SWGBreTriggerResource* output = static_cast<SWGBreTriggerResource*>(create(json, QString("SWGBreTriggerResource")));
    

    worker->deleteLater();

    emit createBRETriggerSignal(output);
    
}
void
SWGBRERuleEngineTriggersApi::deleteBRETrigger(QString* event_name) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/bre/triggers/{event_name}");

    QString event_namePathParam("{"); event_namePathParam.append("event_name").append("}");
    fullPath.replace(event_namePathParam, stringValue(event_name));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "DELETE");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGBRERuleEngineTriggersApi::deleteBRETriggerCallback);

    worker->execute(&input);
}

void
SWGBRERuleEngineTriggersApi::deleteBRETriggerCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    worker->deleteLater();

    
    emit deleteBRETriggerSignal();
}
void
SWGBRERuleEngineTriggersApi::getBRETrigger(QString* event_name) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/bre/triggers/{event_name}");

    QString event_namePathParam("{"); event_namePathParam.append("event_name").append("}");
    fullPath.replace(event_namePathParam, stringValue(event_name));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGBRERuleEngineTriggersApi::getBRETriggerCallback);

    worker->execute(&input);
}

void
SWGBRERuleEngineTriggersApi::getBRETriggerCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    SWGBreTriggerResource* output = static_cast<SWGBreTriggerResource*>(create(json, QString("SWGBreTriggerResource")));
    

    worker->deleteLater();

    emit getBRETriggerSignal(output);
    
}
void
SWGBRERuleEngineTriggersApi::getBRETriggers(bool filter_system, QString* filter_category, QString* filter_name, qint32 size, qint32 page) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/bre/triggers");


    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("filter_system"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(filter_system)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("filter_category"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(filter_category)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("filter_name"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(filter_name)));

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


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGBRERuleEngineTriggersApi::getBRETriggersCallback);

    worker->execute(&input);
}

void
SWGBRERuleEngineTriggersApi::getBRETriggersCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    SWGPageResource«BreTriggerResource»* output = static_cast<SWGPageResource«BreTriggerResource»*>(create(json, QString("SWGPageResource«BreTriggerResource»")));
    

    worker->deleteLater();

    emit getBRETriggersSignal(output);
    
}
void
SWGBRERuleEngineTriggersApi::updateBRETrigger(QString* event_name, SWGBreTriggerResource bre_trigger_resource) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/bre/triggers/{event_name}");

    QString event_namePathParam("{"); event_namePathParam.append("event_name").append("}");
    fullPath.replace(event_namePathParam, stringValue(event_name));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "PUT");

    
    QString output = bre_trigger_resource.asJson();
    input.request_body.append(output);
    


    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGBRERuleEngineTriggersApi::updateBRETriggerCallback);

    worker->execute(&input);
}

void
SWGBRERuleEngineTriggersApi::updateBRETriggerCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    SWGBreTriggerResource* output = static_cast<SWGBreTriggerResource*>(create(json, QString("SWGBreTriggerResource")));
    

    worker->deleteLater();

    emit updateBRETriggerSignal(output);
    
}
} /* namespace Swagger */
