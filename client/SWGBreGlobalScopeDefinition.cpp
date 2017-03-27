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


#include "SWGBreGlobalScopeDefinition.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGBreGlobalScopeDefinition::SWGBreGlobalScopeDefinition(QString* json) {
    init();
    this->fromJson(*json);
}

SWGBreGlobalScopeDefinition::SWGBreGlobalScopeDefinition() {
    init();
}

SWGBreGlobalScopeDefinition::~SWGBreGlobalScopeDefinition() {
    this->cleanup();
}

void
SWGBreGlobalScopeDefinition::init() {
    name = new QString("");
    type = new QString("");
}

void
SWGBreGlobalScopeDefinition::cleanup() {
    
    if(name != nullptr) {
        delete name;
    }

    if(type != nullptr) {
        delete type;
    }
}

SWGBreGlobalScopeDefinition*
SWGBreGlobalScopeDefinition::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGBreGlobalScopeDefinition::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&name, pJson["name"], "QString", "QString");
    ::Swagger::setValue(&type, pJson["type"], "QString", "QString");
}

QString
SWGBreGlobalScopeDefinition::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGBreGlobalScopeDefinition::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    toJsonValue(QString("name"), name, obj, QString("QString"));

    toJsonValue(QString("type"), type, obj, QString("QString"));

    return obj;
}

QString*
SWGBreGlobalScopeDefinition::getName() {
    return name;
}
void
SWGBreGlobalScopeDefinition::setName(QString* name) {
    this->name = name;
}

QString*
SWGBreGlobalScopeDefinition::getType() {
    return type;
}
void
SWGBreGlobalScopeDefinition::setType(QString* type) {
    this->type = type;
}



} /* namespace Swagger */

