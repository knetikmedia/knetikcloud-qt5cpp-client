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

#include "SWGStoreShippingApi.h"
#include "SWGHelpers.h"
#include "SWGModelFactory.h"

#include <QJsonArray>
#include <QJsonDocument>

namespace Swagger {
SWGStoreShippingApi::SWGStoreShippingApi() {}

SWGStoreShippingApi::~SWGStoreShippingApi() {}

SWGStoreShippingApi::SWGStoreShippingApi(QString host, QString basePath) {
    this->host = host;
    this->basePath = basePath;
}

void
SWGStoreShippingApi::createShippingItem(bool cascade, SWGShippingItem shipping_item) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/store/shipping");


    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("cascade"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(cascade)));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    
    QString output = shipping_item.asJson();
    input.request_body.append(output);
    


    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGStoreShippingApi::createShippingItemCallback);

    worker->execute(&input);
}

void
SWGStoreShippingApi::createShippingItemCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    SWGShippingItem* output = static_cast<SWGShippingItem*>(create(json, QString("SWGShippingItem")));
    

    worker->deleteLater();

    emit createShippingItemSignal(output);
    
}
void
SWGStoreShippingApi::createShippingTemplate(SWGItemTemplateResource shipping_template_resource) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/store/shipping/templates");



    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    
    QString output = shipping_template_resource.asJson();
    input.request_body.append(output);
    


    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGStoreShippingApi::createShippingTemplateCallback);

    worker->execute(&input);
}

void
SWGStoreShippingApi::createShippingTemplateCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    SWGItemTemplateResource* output = static_cast<SWGItemTemplateResource*>(create(json, QString("SWGItemTemplateResource")));
    

    worker->deleteLater();

    emit createShippingTemplateSignal(output);
    
}
void
SWGStoreShippingApi::deleteShippingItem(qint32 id) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/store/shipping/{id}");

    QString idPathParam("{"); idPathParam.append("id").append("}");
    fullPath.replace(idPathParam, stringValue(id));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "DELETE");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGStoreShippingApi::deleteShippingItemCallback);

    worker->execute(&input);
}

void
SWGStoreShippingApi::deleteShippingItemCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    worker->deleteLater();

    
    emit deleteShippingItemSignal();
}
void
SWGStoreShippingApi::deleteShippingTemplate(QString* id, QString* cascade) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/store/shipping/templates/{id}");

    QString idPathParam("{"); idPathParam.append("id").append("}");
    fullPath.replace(idPathParam, stringValue(id));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("cascade"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(cascade)));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "DELETE");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGStoreShippingApi::deleteShippingTemplateCallback);

    worker->execute(&input);
}

void
SWGStoreShippingApi::deleteShippingTemplateCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    worker->deleteLater();

    
    emit deleteShippingTemplateSignal();
}
void
SWGStoreShippingApi::getShippingItem(qint32 id) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/store/shipping/{id}");

    QString idPathParam("{"); idPathParam.append("id").append("}");
    fullPath.replace(idPathParam, stringValue(id));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGStoreShippingApi::getShippingItemCallback);

    worker->execute(&input);
}

void
SWGStoreShippingApi::getShippingItemCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    SWGShippingItem* output = static_cast<SWGShippingItem*>(create(json, QString("SWGShippingItem")));
    

    worker->deleteLater();

    emit getShippingItemSignal(output);
    
}
void
SWGStoreShippingApi::getShippingTemplate(QString* id) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/store/shipping/templates/{id}");

    QString idPathParam("{"); idPathParam.append("id").append("}");
    fullPath.replace(idPathParam, stringValue(id));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGStoreShippingApi::getShippingTemplateCallback);

    worker->execute(&input);
}

void
SWGStoreShippingApi::getShippingTemplateCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    SWGItemTemplateResource* output = static_cast<SWGItemTemplateResource*>(create(json, QString("SWGItemTemplateResource")));
    

    worker->deleteLater();

    emit getShippingTemplateSignal(output);
    
}
void
SWGStoreShippingApi::getShippingTemplates(qint32 size, qint32 page, QString* order) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/store/shipping/templates");


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
            &SWGStoreShippingApi::getShippingTemplatesCallback);

    worker->execute(&input);
}

void
SWGStoreShippingApi::getShippingTemplatesCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    SWGPageResource«ItemTemplateResource»* output = static_cast<SWGPageResource«ItemTemplateResource»*>(create(json, QString("SWGPageResource«ItemTemplateResource»")));
    

    worker->deleteLater();

    emit getShippingTemplatesSignal(output);
    
}
void
SWGStoreShippingApi::updateShippingItem(qint32 id, bool cascade, SWGShippingItem shipping_item) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/store/shipping/{id}");

    QString idPathParam("{"); idPathParam.append("id").append("}");
    fullPath.replace(idPathParam, stringValue(id));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("cascade"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(cascade)));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "PUT");

    
    QString output = shipping_item.asJson();
    input.request_body.append(output);
    


    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGStoreShippingApi::updateShippingItemCallback);

    worker->execute(&input);
}

void
SWGStoreShippingApi::updateShippingItemCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    SWGShippingItem* output = static_cast<SWGShippingItem*>(create(json, QString("SWGShippingItem")));
    

    worker->deleteLater();

    emit updateShippingItemSignal(output);
    
}
void
SWGStoreShippingApi::updateShippingTemplate(QString* id, SWGItemTemplateResource shipping_template_resource) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/store/shipping/templates/{id}");

    QString idPathParam("{"); idPathParam.append("id").append("}");
    fullPath.replace(idPathParam, stringValue(id));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "PUT");

    
    QString output = shipping_template_resource.asJson();
    input.request_body.append(output);
    


    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGStoreShippingApi::updateShippingTemplateCallback);

    worker->execute(&input);
}

void
SWGStoreShippingApi::updateShippingTemplateCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    SWGItemTemplateResource* output = static_cast<SWGItemTemplateResource*>(create(json, QString("SWGItemTemplateResource")));
    

    worker->deleteLater();

    emit updateShippingTemplateSignal(output);
    
}
} /* namespace Swagger */
