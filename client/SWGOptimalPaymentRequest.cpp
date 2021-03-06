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


#include "SWGOptimalPaymentRequest.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGOptimalPaymentRequest::SWGOptimalPaymentRequest(QString* json) {
    init();
    this->fromJson(*json);
}

SWGOptimalPaymentRequest::SWGOptimalPaymentRequest() {
    init();
}

SWGOptimalPaymentRequest::~SWGOptimalPaymentRequest() {
    this->cleanup();
}

void
SWGOptimalPaymentRequest::init() {
    email = new QString("");
    first_name = new QString("");
    invoice_id = 0;
    last_name = new QString("");
    on_decline = new QString("");
    on_error = new QString("");
    on_success = new QString("");
}

void
SWGOptimalPaymentRequest::cleanup() {
    
    if(email != nullptr) {
        delete email;
    }

    if(first_name != nullptr) {
        delete first_name;
    }


    if(last_name != nullptr) {
        delete last_name;
    }

    if(on_decline != nullptr) {
        delete on_decline;
    }

    if(on_error != nullptr) {
        delete on_error;
    }

    if(on_success != nullptr) {
        delete on_success;
    }
}

SWGOptimalPaymentRequest*
SWGOptimalPaymentRequest::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGOptimalPaymentRequest::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&email, pJson["email"], "QString", "QString");
    ::Swagger::setValue(&first_name, pJson["first_name"], "QString", "QString");
    ::Swagger::setValue(&invoice_id, pJson["invoice_id"], "qint32", "");
    ::Swagger::setValue(&last_name, pJson["last_name"], "QString", "QString");
    ::Swagger::setValue(&on_decline, pJson["on_decline"], "QString", "QString");
    ::Swagger::setValue(&on_error, pJson["on_error"], "QString", "QString");
    ::Swagger::setValue(&on_success, pJson["on_success"], "QString", "QString");
}

QString
SWGOptimalPaymentRequest::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGOptimalPaymentRequest::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    toJsonValue(QString("email"), email, obj, QString("QString"));

    toJsonValue(QString("first_name"), first_name, obj, QString("QString"));

    obj->insert("invoice_id", QJsonValue(invoice_id));

    toJsonValue(QString("last_name"), last_name, obj, QString("QString"));

    toJsonValue(QString("on_decline"), on_decline, obj, QString("QString"));

    toJsonValue(QString("on_error"), on_error, obj, QString("QString"));

    toJsonValue(QString("on_success"), on_success, obj, QString("QString"));

    return obj;
}

QString*
SWGOptimalPaymentRequest::getEmail() {
    return email;
}
void
SWGOptimalPaymentRequest::setEmail(QString* email) {
    this->email = email;
}

QString*
SWGOptimalPaymentRequest::getFirstName() {
    return first_name;
}
void
SWGOptimalPaymentRequest::setFirstName(QString* first_name) {
    this->first_name = first_name;
}

qint32
SWGOptimalPaymentRequest::getInvoiceId() {
    return invoice_id;
}
void
SWGOptimalPaymentRequest::setInvoiceId(qint32 invoice_id) {
    this->invoice_id = invoice_id;
}

QString*
SWGOptimalPaymentRequest::getLastName() {
    return last_name;
}
void
SWGOptimalPaymentRequest::setLastName(QString* last_name) {
    this->last_name = last_name;
}

QString*
SWGOptimalPaymentRequest::getOnDecline() {
    return on_decline;
}
void
SWGOptimalPaymentRequest::setOnDecline(QString* on_decline) {
    this->on_decline = on_decline;
}

QString*
SWGOptimalPaymentRequest::getOnError() {
    return on_error;
}
void
SWGOptimalPaymentRequest::setOnError(QString* on_error) {
    this->on_error = on_error;
}

QString*
SWGOptimalPaymentRequest::getOnSuccess() {
    return on_success;
}
void
SWGOptimalPaymentRequest::setOnSuccess(QString* on_success) {
    this->on_success = on_success;
}



} /* namespace Swagger */

