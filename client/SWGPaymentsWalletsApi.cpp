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

#include "SWGPaymentsWalletsApi.h"
#include "SWGHelpers.h"
#include "SWGModelFactory.h"

#include <QJsonArray>
#include <QJsonDocument>

namespace Swagger {
SWGPaymentsWalletsApi::SWGPaymentsWalletsApi() {}

SWGPaymentsWalletsApi::~SWGPaymentsWalletsApi() {}

SWGPaymentsWalletsApi::SWGPaymentsWalletsApi(QString host, QString basePath) {
    this->host = host;
    this->basePath = basePath;
}

void
SWGPaymentsWalletsApi::getUserWallet(qint32 user_id, QString* currency_code) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/users/{user_id}/wallets/{currency_code}");

    QString user_idPathParam("{"); user_idPathParam.append("user_id").append("}");
    fullPath.replace(user_idPathParam, stringValue(user_id));
    QString currency_codePathParam("{"); currency_codePathParam.append("currency_code").append("}");
    fullPath.replace(currency_codePathParam, stringValue(currency_code));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGPaymentsWalletsApi::getUserWalletCallback);

    worker->execute(&input);
}

void
SWGPaymentsWalletsApi::getUserWalletCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    SWGSimpleWallet* output = static_cast<SWGSimpleWallet*>(create(json, QString("SWGSimpleWallet")));
    

    worker->deleteLater();

    emit getUserWalletSignal(output);
    
}
void
SWGPaymentsWalletsApi::getUserWalletTransactions(qint32 user_id, QString* currency_code, QString* filter_type, qint64 filter_max_date, qint64 filter_min_date, QString* filter_sign, qint32 size, qint32 page, QString* order) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/users/{user_id}/wallets/{currency_code}/transactions");

    QString user_idPathParam("{"); user_idPathParam.append("user_id").append("}");
    fullPath.replace(user_idPathParam, stringValue(user_id));
    QString currency_codePathParam("{"); currency_codePathParam.append("currency_code").append("}");
    fullPath.replace(currency_codePathParam, stringValue(currency_code));

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
    fullPath.append(QUrl::toPercentEncoding("filter_max_date"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(filter_max_date)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("filter_min_date"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(filter_min_date)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("filter_sign"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(filter_sign)));

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
            &SWGPaymentsWalletsApi::getUserWalletTransactionsCallback);

    worker->execute(&input);
}

void
SWGPaymentsWalletsApi::getUserWalletTransactionsCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    SWGPageResource«WalletTransactionResource»* output = static_cast<SWGPageResource«WalletTransactionResource»*>(create(json, QString("SWGPageResource«WalletTransactionResource»")));
    

    worker->deleteLater();

    emit getUserWalletTransactionsSignal(output);
    
}
void
SWGPaymentsWalletsApi::getUserWallets(qint32 user_id) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/users/{user_id}/wallets");

    QString user_idPathParam("{"); user_idPathParam.append("user_id").append("}");
    fullPath.replace(user_idPathParam, stringValue(user_id));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGPaymentsWalletsApi::getUserWalletsCallback);

    worker->execute(&input);
}

void
SWGPaymentsWalletsApi::getUserWalletsCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
    QList<SWGSimpleWallet*>* output = new QList<SWGSimpleWallet*>();
    QString json(worker->response);
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonArray jsonArray = doc.array();

    foreach(QJsonValue obj, jsonArray) {
        SWGSimpleWallet* o = new SWGSimpleWallet();
        QJsonObject jv = obj.toObject();
        QJsonObject * ptr = (QJsonObject*)&jv;
        o->fromJsonObject(*ptr);
        output->append(o);
    }

    

    worker->deleteLater();

    emit getUserWalletsSignal(output);
    
}
void
SWGPaymentsWalletsApi::getWalletBalances() {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/wallets/totals");



    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGPaymentsWalletsApi::getWalletBalancesCallback);

    worker->execute(&input);
}

void
SWGPaymentsWalletsApi::getWalletBalancesCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    SWGPageResource«WalletTotalResponse»* output = static_cast<SWGPageResource«WalletTotalResponse»*>(create(json, QString("SWGPageResource«WalletTotalResponse»")));
    

    worker->deleteLater();

    emit getWalletBalancesSignal(output);
    
}
void
SWGPaymentsWalletsApi::getWalletTransactions(qint32 filter_invoice, QString* filter_type, QString* filter_date, QString* filter_sign, qint32 filter_user_id, QString* filter_username, QString* filter_details, QString* filter_currency_code, qint32 size, qint32 page, QString* order) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/wallets/transactions");


    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("filter_invoice"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(filter_invoice)));

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
    fullPath.append(QUrl::toPercentEncoding("filter_date"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(filter_date)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("filter_sign"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(filter_sign)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("filter_user_id"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(filter_user_id)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("filter_username"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(filter_username)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("filter_details"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(filter_details)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("filter_currency_code"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(filter_currency_code)));

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
            &SWGPaymentsWalletsApi::getWalletTransactionsCallback);

    worker->execute(&input);
}

void
SWGPaymentsWalletsApi::getWalletTransactionsCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    SWGPageResource«WalletTransactionResource»* output = static_cast<SWGPageResource«WalletTransactionResource»*>(create(json, QString("SWGPageResource«WalletTransactionResource»")));
    

    worker->deleteLater();

    emit getWalletTransactionsSignal(output);
    
}
void
SWGPaymentsWalletsApi::getWallets(qint32 size, qint32 page, QString* order) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/wallets");


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
            &SWGPaymentsWalletsApi::getWalletsCallback);

    worker->execute(&input);
}

void
SWGPaymentsWalletsApi::getWalletsCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    SWGPageResource«SimpleWallet»* output = static_cast<SWGPageResource«SimpleWallet»*>(create(json, QString("SWGPageResource«SimpleWallet»")));
    

    worker->deleteLater();

    emit getWalletsSignal(output);
    
}
void
SWGPaymentsWalletsApi::updateWalletBalance(qint32 user_id, QString* currency_code, SWGWalletAlterRequest request) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/users/{user_id}/wallets/{currency_code}/balance");

    QString user_idPathParam("{"); user_idPathParam.append("user_id").append("}");
    fullPath.replace(user_idPathParam, stringValue(user_id));
    QString currency_codePathParam("{"); currency_codePathParam.append("currency_code").append("}");
    fullPath.replace(currency_codePathParam, stringValue(currency_code));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "PUT");

    
    QString output = request.asJson();
    input.request_body.append(output);
    


    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGPaymentsWalletsApi::updateWalletBalanceCallback);

    worker->execute(&input);
}

void
SWGPaymentsWalletsApi::updateWalletBalanceCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    SWGWalletTransactionResource* output = static_cast<SWGWalletTransactionResource*>(create(json, QString("SWGWalletTransactionResource")));
    

    worker->deleteLater();

    emit updateWalletBalanceSignal(output);
    
}
} /* namespace Swagger */