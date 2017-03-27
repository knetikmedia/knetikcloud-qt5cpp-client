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


#include "SWGPaymentMethodResource.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGPaymentMethodResource::SWGPaymentMethodResource(QString* json) {
    init();
    this->fromJson(*json);
}

SWGPaymentMethodResource::SWGPaymentMethodResource() {
    init();
}

SWGPaymentMethodResource::~SWGPaymentMethodResource() {
    this->cleanup();
}

void
SWGPaymentMethodResource::init() {
    created_date = 0L;
    default = false;
    disabled = false;
    expiration_date = 0L;
    expiration_month = 0;
    expiration_year = 0;
    id = 0L;
    last4 = new QString("");
    long_description = new QString("");
    name = new QString("");
    payment_method_type = new SWGPaymentMethodTypeResource();
    payment_type = new QString("");
    short_description = new QString("");
    sort = 0;
    token = new QString("");
    unique_key = new QString("");
    updated_date = 0L;
    user_id = 0;
    verified = false;
}

void
SWGPaymentMethodResource::cleanup() {
    







    if(last4 != nullptr) {
        delete last4;
    }

    if(long_description != nullptr) {
        delete long_description;
    }

    if(name != nullptr) {
        delete name;
    }

    if(payment_method_type != nullptr) {
        delete payment_method_type;
    }

    if(payment_type != nullptr) {
        delete payment_type;
    }

    if(short_description != nullptr) {
        delete short_description;
    }


    if(token != nullptr) {
        delete token;
    }

    if(unique_key != nullptr) {
        delete unique_key;
    }



}

SWGPaymentMethodResource*
SWGPaymentMethodResource::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGPaymentMethodResource::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&created_date, pJson["created_date"], "qint64", "");
    ::Swagger::setValue(&default, pJson["default"], "bool", "");
    ::Swagger::setValue(&disabled, pJson["disabled"], "bool", "");
    ::Swagger::setValue(&expiration_date, pJson["expiration_date"], "qint64", "");
    ::Swagger::setValue(&expiration_month, pJson["expiration_month"], "qint32", "");
    ::Swagger::setValue(&expiration_year, pJson["expiration_year"], "qint32", "");
    ::Swagger::setValue(&id, pJson["id"], "qint64", "");
    ::Swagger::setValue(&last4, pJson["last4"], "QString", "QString");
    ::Swagger::setValue(&long_description, pJson["long_description"], "QString", "QString");
    ::Swagger::setValue(&name, pJson["name"], "QString", "QString");
    ::Swagger::setValue(&payment_method_type, pJson["payment_method_type"], "SWGPaymentMethodTypeResource", "SWGPaymentMethodTypeResource");
    ::Swagger::setValue(&payment_type, pJson["payment_type"], "QString", "QString");
    ::Swagger::setValue(&short_description, pJson["short_description"], "QString", "QString");
    ::Swagger::setValue(&sort, pJson["sort"], "qint32", "");
    ::Swagger::setValue(&token, pJson["token"], "QString", "QString");
    ::Swagger::setValue(&unique_key, pJson["unique_key"], "QString", "QString");
    ::Swagger::setValue(&updated_date, pJson["updated_date"], "qint64", "");
    ::Swagger::setValue(&user_id, pJson["user_id"], "qint32", "");
    ::Swagger::setValue(&verified, pJson["verified"], "bool", "");
}

QString
SWGPaymentMethodResource::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGPaymentMethodResource::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    obj->insert("created_date", QJsonValue(created_date));

    obj->insert("default", QJsonValue(default));

    obj->insert("disabled", QJsonValue(disabled));

    obj->insert("expiration_date", QJsonValue(expiration_date));

    obj->insert("expiration_month", QJsonValue(expiration_month));

    obj->insert("expiration_year", QJsonValue(expiration_year));

    obj->insert("id", QJsonValue(id));

    toJsonValue(QString("last4"), last4, obj, QString("QString"));

    toJsonValue(QString("long_description"), long_description, obj, QString("QString"));

    toJsonValue(QString("name"), name, obj, QString("QString"));

    toJsonValue(QString("payment_method_type"), payment_method_type, obj, QString("SWGPaymentMethodTypeResource"));

    toJsonValue(QString("payment_type"), payment_type, obj, QString("QString"));

    toJsonValue(QString("short_description"), short_description, obj, QString("QString"));

    obj->insert("sort", QJsonValue(sort));

    toJsonValue(QString("token"), token, obj, QString("QString"));

    toJsonValue(QString("unique_key"), unique_key, obj, QString("QString"));

    obj->insert("updated_date", QJsonValue(updated_date));

    obj->insert("user_id", QJsonValue(user_id));

    obj->insert("verified", QJsonValue(verified));

    return obj;
}

qint64
SWGPaymentMethodResource::getCreatedDate() {
    return created_date;
}
void
SWGPaymentMethodResource::setCreatedDate(qint64 created_date) {
    this->created_date = created_date;
}

bool
SWGPaymentMethodResource::getDefault() {
    return default;
}
void
SWGPaymentMethodResource::setDefault(bool default) {
    this->default = default;
}

bool
SWGPaymentMethodResource::getDisabled() {
    return disabled;
}
void
SWGPaymentMethodResource::setDisabled(bool disabled) {
    this->disabled = disabled;
}

qint64
SWGPaymentMethodResource::getExpirationDate() {
    return expiration_date;
}
void
SWGPaymentMethodResource::setExpirationDate(qint64 expiration_date) {
    this->expiration_date = expiration_date;
}

qint32
SWGPaymentMethodResource::getExpirationMonth() {
    return expiration_month;
}
void
SWGPaymentMethodResource::setExpirationMonth(qint32 expiration_month) {
    this->expiration_month = expiration_month;
}

qint32
SWGPaymentMethodResource::getExpirationYear() {
    return expiration_year;
}
void
SWGPaymentMethodResource::setExpirationYear(qint32 expiration_year) {
    this->expiration_year = expiration_year;
}

qint64
SWGPaymentMethodResource::getId() {
    return id;
}
void
SWGPaymentMethodResource::setId(qint64 id) {
    this->id = id;
}

QString*
SWGPaymentMethodResource::getLast4() {
    return last4;
}
void
SWGPaymentMethodResource::setLast4(QString* last4) {
    this->last4 = last4;
}

QString*
SWGPaymentMethodResource::getLongDescription() {
    return long_description;
}
void
SWGPaymentMethodResource::setLongDescription(QString* long_description) {
    this->long_description = long_description;
}

QString*
SWGPaymentMethodResource::getName() {
    return name;
}
void
SWGPaymentMethodResource::setName(QString* name) {
    this->name = name;
}

SWGPaymentMethodTypeResource*
SWGPaymentMethodResource::getPaymentMethodType() {
    return payment_method_type;
}
void
SWGPaymentMethodResource::setPaymentMethodType(SWGPaymentMethodTypeResource* payment_method_type) {
    this->payment_method_type = payment_method_type;
}

QString*
SWGPaymentMethodResource::getPaymentType() {
    return payment_type;
}
void
SWGPaymentMethodResource::setPaymentType(QString* payment_type) {
    this->payment_type = payment_type;
}

QString*
SWGPaymentMethodResource::getShortDescription() {
    return short_description;
}
void
SWGPaymentMethodResource::setShortDescription(QString* short_description) {
    this->short_description = short_description;
}

qint32
SWGPaymentMethodResource::getSort() {
    return sort;
}
void
SWGPaymentMethodResource::setSort(qint32 sort) {
    this->sort = sort;
}

QString*
SWGPaymentMethodResource::getToken() {
    return token;
}
void
SWGPaymentMethodResource::setToken(QString* token) {
    this->token = token;
}

QString*
SWGPaymentMethodResource::getUniqueKey() {
    return unique_key;
}
void
SWGPaymentMethodResource::setUniqueKey(QString* unique_key) {
    this->unique_key = unique_key;
}

qint64
SWGPaymentMethodResource::getUpdatedDate() {
    return updated_date;
}
void
SWGPaymentMethodResource::setUpdatedDate(qint64 updated_date) {
    this->updated_date = updated_date;
}

qint32
SWGPaymentMethodResource::getUserId() {
    return user_id;
}
void
SWGPaymentMethodResource::setUserId(qint32 user_id) {
    this->user_id = user_id;
}

bool
SWGPaymentMethodResource::getVerified() {
    return verified;
}
void
SWGPaymentMethodResource::setVerified(bool verified) {
    this->verified = verified;
}



} /* namespace Swagger */

