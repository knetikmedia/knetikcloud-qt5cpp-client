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

#include "SWGPaymentsStripeApi.h"
#include "SWGHelpers.h"
#include "SWGModelFactory.h"

#include <QJsonArray>
#include <QJsonDocument>

namespace Swagger {
SWGPaymentsStripeApi::SWGPaymentsStripeApi() {}

SWGPaymentsStripeApi::~SWGPaymentsStripeApi() {}

SWGPaymentsStripeApi::SWGPaymentsStripeApi(QString host, QString basePath) {
    this->host = host;
    this->basePath = basePath;
}

void
SWGPaymentsStripeApi::createStripePaymentMethod(SWGStripeCreatePaymentMethod request) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/payment/provider/stripe/payment-methods");



    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    
    QString output = request.asJson();
    input.request_body.append(output);
    


    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGPaymentsStripeApi::createStripePaymentMethodCallback);

    worker->execute(&input);
}

void
SWGPaymentsStripeApi::createStripePaymentMethodCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    SWGPaymentMethodResource* output = static_cast<SWGPaymentMethodResource*>(create(json, QString("SWGPaymentMethodResource")));
    

    worker->deleteLater();

    emit createStripePaymentMethodSignal(output);
    
}
void
SWGPaymentsStripeApi::payStripeInvoice(SWGStripePaymentRequest request) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/payment/provider/stripe/payments");



    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    
    QString output = request.asJson();
    input.request_body.append(output);
    


    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGPaymentsStripeApi::payStripeInvoiceCallback);

    worker->execute(&input);
}

void
SWGPaymentsStripeApi::payStripeInvoiceCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    worker->deleteLater();

    
    emit payStripeInvoiceSignal();
}
} /* namespace Swagger */
