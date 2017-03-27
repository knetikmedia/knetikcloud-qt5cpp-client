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

#include "SWGStoreSalesApi.h"
#include "SWGHelpers.h"
#include "SWGModelFactory.h"

#include <QJsonArray>
#include <QJsonDocument>

namespace Swagger {
SWGStoreSalesApi::SWGStoreSalesApi() {}

SWGStoreSalesApi::~SWGStoreSalesApi() {}

SWGStoreSalesApi::SWGStoreSalesApi(QString host, QString basePath) {
    this->host = host;
    this->basePath = basePath;
}

void
SWGStoreSalesApi::createCatalogSale(SWGCatalogSale catalog_sale) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/store/sales");



    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    
    QString output = catalog_sale.asJson();
    input.request_body.append(output);
    


    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGStoreSalesApi::createCatalogSaleCallback);

    worker->execute(&input);
}

void
SWGStoreSalesApi::createCatalogSaleCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    SWGCatalogSale* output = static_cast<SWGCatalogSale*>(create(json, QString("SWGCatalogSale")));
    

    worker->deleteLater();

    emit createCatalogSaleSignal(output);
    
}
void
SWGStoreSalesApi::deleteCatalogSale(qint32 id) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/store/sales/{id}");

    QString idPathParam("{"); idPathParam.append("id").append("}");
    fullPath.replace(idPathParam, stringValue(id));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "DELETE");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGStoreSalesApi::deleteCatalogSaleCallback);

    worker->execute(&input);
}

void
SWGStoreSalesApi::deleteCatalogSaleCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    worker->deleteLater();

    
    emit deleteCatalogSaleSignal();
}
void
SWGStoreSalesApi::getCatalogSale(qint32 id) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/store/sales/{id}");

    QString idPathParam("{"); idPathParam.append("id").append("}");
    fullPath.replace(idPathParam, stringValue(id));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGStoreSalesApi::getCatalogSaleCallback);

    worker->execute(&input);
}

void
SWGStoreSalesApi::getCatalogSaleCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    SWGCatalogSale* output = static_cast<SWGCatalogSale*>(create(json, QString("SWGCatalogSale")));
    

    worker->deleteLater();

    emit getCatalogSaleSignal(output);
    
}
void
SWGStoreSalesApi::getCatalogSales(qint32 size, qint32 page, QString* order) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/store/sales");


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
            &SWGStoreSalesApi::getCatalogSalesCallback);

    worker->execute(&input);
}

void
SWGStoreSalesApi::getCatalogSalesCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    SWGPageResource«CatalogSale»* output = static_cast<SWGPageResource«CatalogSale»*>(create(json, QString("SWGPageResource«CatalogSale»")));
    

    worker->deleteLater();

    emit getCatalogSalesSignal(output);
    
}
void
SWGStoreSalesApi::updateCatalogSale(qint32 id, SWGCatalogSale catalog_sale) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/store/sales/{id}");

    QString idPathParam("{"); idPathParam.append("id").append("}");
    fullPath.replace(idPathParam, stringValue(id));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "PUT");

    
    QString output = catalog_sale.asJson();
    input.request_body.append(output);
    


    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGStoreSalesApi::updateCatalogSaleCallback);

    worker->execute(&input);
}

void
SWGStoreSalesApi::updateCatalogSaleCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    SWGCatalogSale* output = static_cast<SWGCatalogSale*>(create(json, QString("SWGCatalogSale")));
    

    worker->deleteLater();

    emit updateCatalogSaleSignal(output);
    
}
} /* namespace Swagger */