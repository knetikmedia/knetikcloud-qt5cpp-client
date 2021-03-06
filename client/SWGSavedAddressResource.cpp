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


#include "SWGSavedAddressResource.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGSavedAddressResource::SWGSavedAddressResource(QString* json) {
    init();
    this->fromJson(*json);
}

SWGSavedAddressResource::SWGSavedAddressResource() {
    init();
}

SWGSavedAddressResource::~SWGSavedAddressResource() {
    this->cleanup();
}

void
SWGSavedAddressResource::init() {
    address1 = new QString("");
    address2 = new QString("");
    city = new QString("");
    country_code = new QString("");
    default = false;
    first_name = new QString("");
    id = 0;
    last_name = new QString("");
    name = new QString("");
    phone1 = new QString("");
    phone2 = new QString("");
    postal_code = new QString("");
    state_code = new QString("");
}

void
SWGSavedAddressResource::cleanup() {
    
    if(address1 != nullptr) {
        delete address1;
    }

    if(address2 != nullptr) {
        delete address2;
    }

    if(city != nullptr) {
        delete city;
    }

    if(country_code != nullptr) {
        delete country_code;
    }


    if(first_name != nullptr) {
        delete first_name;
    }


    if(last_name != nullptr) {
        delete last_name;
    }

    if(name != nullptr) {
        delete name;
    }

    if(phone1 != nullptr) {
        delete phone1;
    }

    if(phone2 != nullptr) {
        delete phone2;
    }

    if(postal_code != nullptr) {
        delete postal_code;
    }

    if(state_code != nullptr) {
        delete state_code;
    }
}

SWGSavedAddressResource*
SWGSavedAddressResource::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGSavedAddressResource::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&address1, pJson["address1"], "QString", "QString");
    ::Swagger::setValue(&address2, pJson["address2"], "QString", "QString");
    ::Swagger::setValue(&city, pJson["city"], "QString", "QString");
    ::Swagger::setValue(&country_code, pJson["country_code"], "QString", "QString");
    ::Swagger::setValue(&default, pJson["default"], "bool", "");
    ::Swagger::setValue(&first_name, pJson["first_name"], "QString", "QString");
    ::Swagger::setValue(&id, pJson["id"], "qint32", "");
    ::Swagger::setValue(&last_name, pJson["last_name"], "QString", "QString");
    ::Swagger::setValue(&name, pJson["name"], "QString", "QString");
    ::Swagger::setValue(&phone1, pJson["phone1"], "QString", "QString");
    ::Swagger::setValue(&phone2, pJson["phone2"], "QString", "QString");
    ::Swagger::setValue(&postal_code, pJson["postal_code"], "QString", "QString");
    ::Swagger::setValue(&state_code, pJson["state_code"], "QString", "QString");
}

QString
SWGSavedAddressResource::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGSavedAddressResource::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    toJsonValue(QString("address1"), address1, obj, QString("QString"));

    toJsonValue(QString("address2"), address2, obj, QString("QString"));

    toJsonValue(QString("city"), city, obj, QString("QString"));

    toJsonValue(QString("country_code"), country_code, obj, QString("QString"));

    obj->insert("default", QJsonValue(default));

    toJsonValue(QString("first_name"), first_name, obj, QString("QString"));

    obj->insert("id", QJsonValue(id));

    toJsonValue(QString("last_name"), last_name, obj, QString("QString"));

    toJsonValue(QString("name"), name, obj, QString("QString"));

    toJsonValue(QString("phone1"), phone1, obj, QString("QString"));

    toJsonValue(QString("phone2"), phone2, obj, QString("QString"));

    toJsonValue(QString("postal_code"), postal_code, obj, QString("QString"));

    toJsonValue(QString("state_code"), state_code, obj, QString("QString"));

    return obj;
}

QString*
SWGSavedAddressResource::getAddress1() {
    return address1;
}
void
SWGSavedAddressResource::setAddress1(QString* address1) {
    this->address1 = address1;
}

QString*
SWGSavedAddressResource::getAddress2() {
    return address2;
}
void
SWGSavedAddressResource::setAddress2(QString* address2) {
    this->address2 = address2;
}

QString*
SWGSavedAddressResource::getCity() {
    return city;
}
void
SWGSavedAddressResource::setCity(QString* city) {
    this->city = city;
}

QString*
SWGSavedAddressResource::getCountryCode() {
    return country_code;
}
void
SWGSavedAddressResource::setCountryCode(QString* country_code) {
    this->country_code = country_code;
}

bool
SWGSavedAddressResource::getDefault() {
    return default;
}
void
SWGSavedAddressResource::setDefault(bool default) {
    this->default = default;
}

QString*
SWGSavedAddressResource::getFirstName() {
    return first_name;
}
void
SWGSavedAddressResource::setFirstName(QString* first_name) {
    this->first_name = first_name;
}

qint32
SWGSavedAddressResource::getId() {
    return id;
}
void
SWGSavedAddressResource::setId(qint32 id) {
    this->id = id;
}

QString*
SWGSavedAddressResource::getLastName() {
    return last_name;
}
void
SWGSavedAddressResource::setLastName(QString* last_name) {
    this->last_name = last_name;
}

QString*
SWGSavedAddressResource::getName() {
    return name;
}
void
SWGSavedAddressResource::setName(QString* name) {
    this->name = name;
}

QString*
SWGSavedAddressResource::getPhone1() {
    return phone1;
}
void
SWGSavedAddressResource::setPhone1(QString* phone1) {
    this->phone1 = phone1;
}

QString*
SWGSavedAddressResource::getPhone2() {
    return phone2;
}
void
SWGSavedAddressResource::setPhone2(QString* phone2) {
    this->phone2 = phone2;
}

QString*
SWGSavedAddressResource::getPostalCode() {
    return postal_code;
}
void
SWGSavedAddressResource::setPostalCode(QString* postal_code) {
    this->postal_code = postal_code;
}

QString*
SWGSavedAddressResource::getStateCode() {
    return state_code;
}
void
SWGSavedAddressResource::setStateCode(QString* state_code) {
    this->state_code = state_code;
}



} /* namespace Swagger */

