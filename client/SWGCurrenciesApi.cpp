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

#include "SWGCurrenciesApi.h"
#include "SWGHelpers.h"
#include "SWGModelFactory.h"

#include <QJsonArray>
#include <QJsonDocument>

namespace Swagger {
SWGCurrenciesApi::SWGCurrenciesApi() {}

SWGCurrenciesApi::~SWGCurrenciesApi() {}

SWGCurrenciesApi::SWGCurrenciesApi(QString host, QString basePath) {
    this->host = host;
    this->basePath = basePath;
}

void
SWGCurrenciesApi::createCurrency(SWGCurrencyResource currency) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/currencies");



    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    
    QString output = currency.asJson();
    input.request_body.append(output);
    


    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGCurrenciesApi::createCurrencyCallback);

    worker->execute(&input);
}

void
SWGCurrenciesApi::createCurrencyCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    SWGCurrencyResource* output = static_cast<SWGCurrencyResource*>(create(json, QString("SWGCurrencyResource")));
    

    worker->deleteLater();

    emit createCurrencySignal(output);
    
}
void
SWGCurrenciesApi::deleteCurrency(QString* code) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/currencies/{code}");

    QString codePathParam("{"); codePathParam.append("code").append("}");
    fullPath.replace(codePathParam, stringValue(code));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "DELETE");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGCurrenciesApi::deleteCurrencyCallback);

    worker->execute(&input);
}

void
SWGCurrenciesApi::deleteCurrencyCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    worker->deleteLater();

    
    emit deleteCurrencySignal();
}
void
SWGCurrenciesApi::getCurrencies(bool filter_enabled_currencies, QString* filter_type, qint32 size, qint32 page, QString* order) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/currencies");


    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("filter_enabled_currencies"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(filter_enabled_currencies)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("filter_type"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(filter_type)));

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
            &SWGCurrenciesApi::getCurrenciesCallback);

    worker->execute(&input);
}

void
SWGCurrenciesApi::getCurrenciesCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    SWGPageResource«CurrencyResource»* output = static_cast<SWGPageResource«CurrencyResource»*>(create(json, QString("SWGPageResource«CurrencyResource»")));
    

    worker->deleteLater();

    emit getCurrenciesSignal(output);
    
}
void
SWGCurrenciesApi::getCurrency(QString* code) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/currencies/{code}");

    QString codePathParam("{"); codePathParam.append("code").append("}");
    fullPath.replace(codePathParam, stringValue(code));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGCurrenciesApi::getCurrencyCallback);

    worker->execute(&input);
}

void
SWGCurrenciesApi::getCurrencyCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    SWGCurrencyResource* output = static_cast<SWGCurrencyResource*>(create(json, QString("SWGCurrencyResource")));
    

    worker->deleteLater();

    emit getCurrencySignal(output);
    
}
void
SWGCurrenciesApi::updateCurrency(QString* code, SWGCurrencyResource currency) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/currencies/{code}");

    QString codePathParam("{"); codePathParam.append("code").append("}");
    fullPath.replace(codePathParam, stringValue(code));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "PUT");

    
    QString output = currency.asJson();
    input.request_body.append(output);
    


    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGCurrenciesApi::updateCurrencyCallback);

    worker->execute(&input);
}

void
SWGCurrenciesApi::updateCurrencyCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    worker->deleteLater();

    
    emit updateCurrencySignal();
}
} /* namespace Swagger */
