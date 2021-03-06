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


#include "SWGTransactionResource.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGTransactionResource::SWGTransactionResource(QString* json) {
    init();
    this->fromJson(*json);
}

SWGTransactionResource::SWGTransactionResource() {
    init();
}

SWGTransactionResource::~SWGTransactionResource() {
    this->cleanup();
}

void
SWGTransactionResource::init() {
    create_date = 0L;
    currency_code = new QString("");
    details = new QString("");
    id = 0;
    invoice_id = 0;
    is_refunded = false;
    response = new QString("");
    source = new QString("");
    successful = false;
    transaction_id = new QString("");
    type = new QString("");
    type_hint = new QString("");
    value = 0.0;
}

void
SWGTransactionResource::cleanup() {
    

    if(currency_code != nullptr) {
        delete currency_code;
    }

    if(details != nullptr) {
        delete details;
    }




    if(response != nullptr) {
        delete response;
    }

    if(source != nullptr) {
        delete source;
    }


    if(transaction_id != nullptr) {
        delete transaction_id;
    }

    if(type != nullptr) {
        delete type;
    }

    if(type_hint != nullptr) {
        delete type_hint;
    }

}

SWGTransactionResource*
SWGTransactionResource::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGTransactionResource::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&create_date, pJson["create_date"], "qint64", "");
    ::Swagger::setValue(&currency_code, pJson["currency_code"], "QString", "QString");
    ::Swagger::setValue(&details, pJson["details"], "QString", "QString");
    ::Swagger::setValue(&id, pJson["id"], "qint32", "");
    ::Swagger::setValue(&invoice_id, pJson["invoice_id"], "qint32", "");
    ::Swagger::setValue(&is_refunded, pJson["is_refunded"], "bool", "");
    ::Swagger::setValue(&response, pJson["response"], "QString", "QString");
    ::Swagger::setValue(&source, pJson["source"], "QString", "QString");
    ::Swagger::setValue(&successful, pJson["successful"], "bool", "");
    ::Swagger::setValue(&transaction_id, pJson["transaction_id"], "QString", "QString");
    ::Swagger::setValue(&type, pJson["type"], "QString", "QString");
    ::Swagger::setValue(&type_hint, pJson["type_hint"], "QString", "QString");
    ::Swagger::setValue(&value, pJson["value"], "double", "");
}

QString
SWGTransactionResource::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGTransactionResource::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    obj->insert("create_date", QJsonValue(create_date));

    toJsonValue(QString("currency_code"), currency_code, obj, QString("QString"));

    toJsonValue(QString("details"), details, obj, QString("QString"));

    obj->insert("id", QJsonValue(id));

    obj->insert("invoice_id", QJsonValue(invoice_id));

    obj->insert("is_refunded", QJsonValue(is_refunded));

    toJsonValue(QString("response"), response, obj, QString("QString"));

    toJsonValue(QString("source"), source, obj, QString("QString"));

    obj->insert("successful", QJsonValue(successful));

    toJsonValue(QString("transaction_id"), transaction_id, obj, QString("QString"));

    toJsonValue(QString("type"), type, obj, QString("QString"));

    toJsonValue(QString("type_hint"), type_hint, obj, QString("QString"));

    obj->insert("value", QJsonValue(value));

    return obj;
}

qint64
SWGTransactionResource::getCreateDate() {
    return create_date;
}
void
SWGTransactionResource::setCreateDate(qint64 create_date) {
    this->create_date = create_date;
}

QString*
SWGTransactionResource::getCurrencyCode() {
    return currency_code;
}
void
SWGTransactionResource::setCurrencyCode(QString* currency_code) {
    this->currency_code = currency_code;
}

QString*
SWGTransactionResource::getDetails() {
    return details;
}
void
SWGTransactionResource::setDetails(QString* details) {
    this->details = details;
}

qint32
SWGTransactionResource::getId() {
    return id;
}
void
SWGTransactionResource::setId(qint32 id) {
    this->id = id;
}

qint32
SWGTransactionResource::getInvoiceId() {
    return invoice_id;
}
void
SWGTransactionResource::setInvoiceId(qint32 invoice_id) {
    this->invoice_id = invoice_id;
}

bool
SWGTransactionResource::getIsRefunded() {
    return is_refunded;
}
void
SWGTransactionResource::setIsRefunded(bool is_refunded) {
    this->is_refunded = is_refunded;
}

QString*
SWGTransactionResource::getResponse() {
    return response;
}
void
SWGTransactionResource::setResponse(QString* response) {
    this->response = response;
}

QString*
SWGTransactionResource::getSource() {
    return source;
}
void
SWGTransactionResource::setSource(QString* source) {
    this->source = source;
}

bool
SWGTransactionResource::getSuccessful() {
    return successful;
}
void
SWGTransactionResource::setSuccessful(bool successful) {
    this->successful = successful;
}

QString*
SWGTransactionResource::getTransactionId() {
    return transaction_id;
}
void
SWGTransactionResource::setTransactionId(QString* transaction_id) {
    this->transaction_id = transaction_id;
}

QString*
SWGTransactionResource::getType() {
    return type;
}
void
SWGTransactionResource::setType(QString* type) {
    this->type = type;
}

QString*
SWGTransactionResource::getTypeHint() {
    return type_hint;
}
void
SWGTransactionResource::setTypeHint(QString* type_hint) {
    this->type_hint = type_hint;
}

double
SWGTransactionResource::getValue() {
    return value;
}
void
SWGTransactionResource::setValue(double value) {
    this->value = value;
}



} /* namespace Swagger */

