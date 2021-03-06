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


#include "SWGCountryResource.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGCountryResource::SWGCountryResource(QString* json) {
    init();
    this->fromJson(*json);
}

SWGCountryResource::SWGCountryResource() {
    init();
}

SWGCountryResource::~SWGCountryResource() {
    this->cleanup();
}

void
SWGCountryResource::init() {
    iso2 = new QString("");
    iso3 = new QString("");
    name = new QString("");
}

void
SWGCountryResource::cleanup() {
    
    if(iso2 != nullptr) {
        delete iso2;
    }

    if(iso3 != nullptr) {
        delete iso3;
    }

    if(name != nullptr) {
        delete name;
    }
}

SWGCountryResource*
SWGCountryResource::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGCountryResource::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&iso2, pJson["iso2"], "QString", "QString");
    ::Swagger::setValue(&iso3, pJson["iso3"], "QString", "QString");
    ::Swagger::setValue(&name, pJson["name"], "QString", "QString");
}

QString
SWGCountryResource::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGCountryResource::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    toJsonValue(QString("iso2"), iso2, obj, QString("QString"));

    toJsonValue(QString("iso3"), iso3, obj, QString("QString"));

    toJsonValue(QString("name"), name, obj, QString("QString"));

    return obj;
}

QString*
SWGCountryResource::getIso2() {
    return iso2;
}
void
SWGCountryResource::setIso2(QString* iso2) {
    this->iso2 = iso2;
}

QString*
SWGCountryResource::getIso3() {
    return iso3;
}
void
SWGCountryResource::setIso3(QString* iso3) {
    this->iso3 = iso3;
}

QString*
SWGCountryResource::getName() {
    return name;
}
void
SWGCountryResource::setName(QString* name) {
    this->name = name;
}



} /* namespace Swagger */

