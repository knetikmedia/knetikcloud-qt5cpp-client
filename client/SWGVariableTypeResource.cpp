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


#include "SWGVariableTypeResource.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGVariableTypeResource::SWGVariableTypeResource(QString* json) {
    init();
    this->fromJson(*json);
}

SWGVariableTypeResource::SWGVariableTypeResource() {
    init();
}

SWGVariableTypeResource::~SWGVariableTypeResource() {
    this->cleanup();
}

void
SWGVariableTypeResource::init() {
    base = new QString("");
    name = new QString("");
}

void
SWGVariableTypeResource::cleanup() {
    
    if(base != nullptr) {
        delete base;
    }

    if(name != nullptr) {
        delete name;
    }
}

SWGVariableTypeResource*
SWGVariableTypeResource::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGVariableTypeResource::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&base, pJson["base"], "QString", "QString");
    ::Swagger::setValue(&name, pJson["name"], "QString", "QString");
}

QString
SWGVariableTypeResource::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGVariableTypeResource::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    toJsonValue(QString("base"), base, obj, QString("QString"));

    toJsonValue(QString("name"), name, obj, QString("QString"));

    return obj;
}

QString*
SWGVariableTypeResource::getBase() {
    return base;
}
void
SWGVariableTypeResource::setBase(QString* base) {
    this->base = base;
}

QString*
SWGVariableTypeResource::getName() {
    return name;
}
void
SWGVariableTypeResource::setName(QString* name) {
    this->name = name;
}



} /* namespace Swagger */

