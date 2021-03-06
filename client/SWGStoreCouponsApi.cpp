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

#include "SWGStoreCouponsApi.h"
#include "SWGHelpers.h"
#include "SWGModelFactory.h"

#include <QJsonArray>
#include <QJsonDocument>

namespace Swagger {
SWGStoreCouponsApi::SWGStoreCouponsApi() {}

SWGStoreCouponsApi::~SWGStoreCouponsApi() {}

SWGStoreCouponsApi::SWGStoreCouponsApi(QString host, QString basePath) {
    this->host = host;
    this->basePath = basePath;
}

void
SWGStoreCouponsApi::createCouponItem(bool cascade, SWGCouponItem coupon_item) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/store/coupons");


    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("cascade"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(cascade)));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    
    QString output = coupon_item.asJson();
    input.request_body.append(output);
    


    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGStoreCouponsApi::createCouponItemCallback);

    worker->execute(&input);
}

void
SWGStoreCouponsApi::createCouponItemCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    SWGCouponItem* output = static_cast<SWGCouponItem*>(create(json, QString("SWGCouponItem")));
    

    worker->deleteLater();

    emit createCouponItemSignal(output);
    
}
void
SWGStoreCouponsApi::createCouponTemplate(SWGItemTemplateResource coupon_template_resource) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/store/coupons/templates");



    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    
    QString output = coupon_template_resource.asJson();
    input.request_body.append(output);
    


    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGStoreCouponsApi::createCouponTemplateCallback);

    worker->execute(&input);
}

void
SWGStoreCouponsApi::createCouponTemplateCallback(HttpRequestWorker * worker) {
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

    emit createCouponTemplateSignal(output);
    
}
void
SWGStoreCouponsApi::deleteCouponItem(qint32 id) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/store/coupons/{id}");

    QString idPathParam("{"); idPathParam.append("id").append("}");
    fullPath.replace(idPathParam, stringValue(id));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "DELETE");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGStoreCouponsApi::deleteCouponItemCallback);

    worker->execute(&input);
}

void
SWGStoreCouponsApi::deleteCouponItemCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    worker->deleteLater();

    
    emit deleteCouponItemSignal();
}
void
SWGStoreCouponsApi::deleteCouponTemplate(QString* id, QString* cascade) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/store/coupons/templates/{id}");

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
            &SWGStoreCouponsApi::deleteCouponTemplateCallback);

    worker->execute(&input);
}

void
SWGStoreCouponsApi::deleteCouponTemplateCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    worker->deleteLater();

    
    emit deleteCouponTemplateSignal();
}
void
SWGStoreCouponsApi::getCouponItem(qint32 id) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/store/coupons/{id}");

    QString idPathParam("{"); idPathParam.append("id").append("}");
    fullPath.replace(idPathParam, stringValue(id));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGStoreCouponsApi::getCouponItemCallback);

    worker->execute(&input);
}

void
SWGStoreCouponsApi::getCouponItemCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    SWGCouponItem* output = static_cast<SWGCouponItem*>(create(json, QString("SWGCouponItem")));
    

    worker->deleteLater();

    emit getCouponItemSignal(output);
    
}
void
SWGStoreCouponsApi::getCouponTemplate(QString* id) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/store/coupons/templates/{id}");

    QString idPathParam("{"); idPathParam.append("id").append("}");
    fullPath.replace(idPathParam, stringValue(id));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGStoreCouponsApi::getCouponTemplateCallback);

    worker->execute(&input);
}

void
SWGStoreCouponsApi::getCouponTemplateCallback(HttpRequestWorker * worker) {
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

    emit getCouponTemplateSignal(output);
    
}
void
SWGStoreCouponsApi::getCouponTemplates(qint32 size, qint32 page, QString* order) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/store/coupons/templates");


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
            &SWGStoreCouponsApi::getCouponTemplatesCallback);

    worker->execute(&input);
}

void
SWGStoreCouponsApi::getCouponTemplatesCallback(HttpRequestWorker * worker) {
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

    emit getCouponTemplatesSignal(output);
    
}
void
SWGStoreCouponsApi::updateCouponItem(qint32 id, bool cascade, SWGCouponItem coupon_item) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/store/coupons/{id}");

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

    
    QString output = coupon_item.asJson();
    input.request_body.append(output);
    


    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGStoreCouponsApi::updateCouponItemCallback);

    worker->execute(&input);
}

void
SWGStoreCouponsApi::updateCouponItemCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    SWGCouponItem* output = static_cast<SWGCouponItem*>(create(json, QString("SWGCouponItem")));
    

    worker->deleteLater();

    emit updateCouponItemSignal(output);
    
}
void
SWGStoreCouponsApi::updateCouponTemplate(QString* id, SWGItemTemplateResource coupon_template_resource) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/store/coupons/templates/{id}");

    QString idPathParam("{"); idPathParam.append("id").append("}");
    fullPath.replace(idPathParam, stringValue(id));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "PUT");

    
    QString output = coupon_template_resource.asJson();
    input.request_body.append(output);
    


    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGStoreCouponsApi::updateCouponTemplateCallback);

    worker->execute(&input);
}

void
SWGStoreCouponsApi::updateCouponTemplateCallback(HttpRequestWorker * worker) {
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

    emit updateCouponTemplateSignal(output);
    
}
} /* namespace Swagger */
