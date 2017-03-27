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


#include "SWGCreatePayPalPaymentRequest.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGCreatePayPalPaymentRequest::SWGCreatePayPalPaymentRequest(QString* json) {
    init();
    this->fromJson(*json);
}

SWGCreatePayPalPaymentRequest::SWGCreatePayPalPaymentRequest() {
    init();
}

SWGCreatePayPalPaymentRequest::~SWGCreatePayPalPaymentRequest() {
    this->cleanup();
}

void
SWGCreatePayPalPaymentRequest::init() {
    cancel_url = new QString("");
    invoice_id = 0;
    return_url = new QString("");
}

void
SWGCreatePayPalPaymentRequest::cleanup() {
    
    if(cancel_url != nullptr) {
        delete cancel_url;
    }


    if(return_url != nullptr) {
        delete return_url;
    }
}

SWGCreatePayPalPaymentRequest*
SWGCreatePayPalPaymentRequest::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGCreatePayPalPaymentRequest::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&cancel_url, pJson["cancel_url"], "QString", "QString");
    ::Swagger::setValue(&invoice_id, pJson["invoice_id"], "qint32", "");
    ::Swagger::setValue(&return_url, pJson["return_url"], "QString", "QString");
}

QString
SWGCreatePayPalPaymentRequest::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGCreatePayPalPaymentRequest::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    toJsonValue(QString("cancel_url"), cancel_url, obj, QString("QString"));

    obj->insert("invoice_id", QJsonValue(invoice_id));

    toJsonValue(QString("return_url"), return_url, obj, QString("QString"));

    return obj;
}

QString*
SWGCreatePayPalPaymentRequest::getCancelUrl() {
    return cancel_url;
}
void
SWGCreatePayPalPaymentRequest::setCancelUrl(QString* cancel_url) {
    this->cancel_url = cancel_url;
}

qint32
SWGCreatePayPalPaymentRequest::getInvoiceId() {
    return invoice_id;
}
void
SWGCreatePayPalPaymentRequest::setInvoiceId(qint32 invoice_id) {
    this->invoice_id = invoice_id;
}

QString*
SWGCreatePayPalPaymentRequest::getReturnUrl() {
    return return_url;
}
void
SWGCreatePayPalPaymentRequest::setReturnUrl(QString* return_url) {
    this->return_url = return_url;
}



} /* namespace Swagger */
