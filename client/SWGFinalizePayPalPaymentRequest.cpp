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


#include "SWGFinalizePayPalPaymentRequest.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGFinalizePayPalPaymentRequest::SWGFinalizePayPalPaymentRequest(QString* json) {
    init();
    this->fromJson(*json);
}

SWGFinalizePayPalPaymentRequest::SWGFinalizePayPalPaymentRequest() {
    init();
}

SWGFinalizePayPalPaymentRequest::~SWGFinalizePayPalPaymentRequest() {
    this->cleanup();
}

void
SWGFinalizePayPalPaymentRequest::init() {
    invoice_id = 0;
    payer_id = new QString("");
    token = new QString("");
}

void
SWGFinalizePayPalPaymentRequest::cleanup() {
    

    if(payer_id != nullptr) {
        delete payer_id;
    }

    if(token != nullptr) {
        delete token;
    }
}

SWGFinalizePayPalPaymentRequest*
SWGFinalizePayPalPaymentRequest::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGFinalizePayPalPaymentRequest::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&invoice_id, pJson["invoice_id"], "qint32", "");
    ::Swagger::setValue(&payer_id, pJson["payer_id"], "QString", "QString");
    ::Swagger::setValue(&token, pJson["token"], "QString", "QString");
}

QString
SWGFinalizePayPalPaymentRequest::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGFinalizePayPalPaymentRequest::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    obj->insert("invoice_id", QJsonValue(invoice_id));

    toJsonValue(QString("payer_id"), payer_id, obj, QString("QString"));

    toJsonValue(QString("token"), token, obj, QString("QString"));

    return obj;
}

qint32
SWGFinalizePayPalPaymentRequest::getInvoiceId() {
    return invoice_id;
}
void
SWGFinalizePayPalPaymentRequest::setInvoiceId(qint32 invoice_id) {
    this->invoice_id = invoice_id;
}

QString*
SWGFinalizePayPalPaymentRequest::getPayerId() {
    return payer_id;
}
void
SWGFinalizePayPalPaymentRequest::setPayerId(QString* payer_id) {
    this->payer_id = payer_id;
}

QString*
SWGFinalizePayPalPaymentRequest::getToken() {
    return token;
}
void
SWGFinalizePayPalPaymentRequest::setToken(QString* token) {
    this->token = token;
}



} /* namespace Swagger */

