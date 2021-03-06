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


#include "SWGLookupTypeResource.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGLookupTypeResource::SWGLookupTypeResource(QString* json) {
    init();
    this->fromJson(*json);
}

SWGLookupTypeResource::SWGLookupTypeResource() {
    init();
}

SWGLookupTypeResource::~SWGLookupTypeResource() {
    this->cleanup();
}

void
SWGLookupTypeResource::init() {
    description = new QString("");
    key_type = new QString("");
    name = new QString("");
    value_type = new QString("");
}

void
SWGLookupTypeResource::cleanup() {
    
    if(description != nullptr) {
        delete description;
    }

    if(key_type != nullptr) {
        delete key_type;
    }

    if(name != nullptr) {
        delete name;
    }

    if(value_type != nullptr) {
        delete value_type;
    }
}

SWGLookupTypeResource*
SWGLookupTypeResource::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGLookupTypeResource::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&description, pJson["description"], "QString", "QString");
    ::Swagger::setValue(&key_type, pJson["key_type"], "QString", "QString");
    ::Swagger::setValue(&name, pJson["name"], "QString", "QString");
    ::Swagger::setValue(&value_type, pJson["value_type"], "QString", "QString");
}

QString
SWGLookupTypeResource::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGLookupTypeResource::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    toJsonValue(QString("description"), description, obj, QString("QString"));

    toJsonValue(QString("key_type"), key_type, obj, QString("QString"));

    toJsonValue(QString("name"), name, obj, QString("QString"));

    toJsonValue(QString("value_type"), value_type, obj, QString("QString"));

    return obj;
}

QString*
SWGLookupTypeResource::getDescription() {
    return description;
}
void
SWGLookupTypeResource::setDescription(QString* description) {
    this->description = description;
}

QString*
SWGLookupTypeResource::getKeyType() {
    return key_type;
}
void
SWGLookupTypeResource::setKeyType(QString* key_type) {
    this->key_type = key_type;
}

QString*
SWGLookupTypeResource::getName() {
    return name;
}
void
SWGLookupTypeResource::setName(QString* name) {
    this->name = name;
}

QString*
SWGLookupTypeResource::getValueType() {
    return value_type;
}
void
SWGLookupTypeResource::setValueType(QString* value_type) {
    this->value_type = value_type;
}



} /* namespace Swagger */

