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


#include "SWGCategoryResource.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGCategoryResource::SWGCategoryResource(QString* json) {
    init();
    this->fromJson(*json);
}

SWGCategoryResource::SWGCategoryResource() {
    init();
}

SWGCategoryResource::~SWGCategoryResource() {
    this->cleanup();
}

void
SWGCategoryResource::init() {
    active = false;
    additional_properties = new QMap<QString, SWGProperty>();
    id = new QString("");
    name = new QString("");
    template = new QString("");
}

void
SWGCategoryResource::cleanup() {
    

    if(additional_properties != nullptr) {
        QList<SWGProperty*>* arr = additional_properties;
        foreach(SWGProperty* o, *arr) {
            delete o;
        }
        delete additional_properties;
    }

    if(id != nullptr) {
        delete id;
    }

    if(name != nullptr) {
        delete name;
    }

    if(template != nullptr) {
        delete template;
    }
}

SWGCategoryResource*
SWGCategoryResource::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGCategoryResource::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&active, pJson["active"], "bool", "");
    
    ::Swagger::setValue(&additional_properties, pJson["additional_properties"], "QMap", "SWGProperty");
    
    ::Swagger::setValue(&id, pJson["id"], "QString", "QString");
    ::Swagger::setValue(&name, pJson["name"], "QString", "QString");
    ::Swagger::setValue(&template, pJson["template"], "QString", "QString");
}

QString
SWGCategoryResource::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGCategoryResource::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    obj->insert("active", QJsonValue(active));

    QJsonArray additional_propertiesJsonArray;
    toJsonArray((QList<void*>*)additional_properties, &additional_propertiesJsonArray, "additional_properties", "SWGProperty");
    obj->insert("additional_properties", additional_propertiesJsonArray);

    toJsonValue(QString("id"), id, obj, QString("QString"));

    toJsonValue(QString("name"), name, obj, QString("QString"));

    toJsonValue(QString("template"), template, obj, QString("QString"));

    return obj;
}

bool
SWGCategoryResource::getActive() {
    return active;
}
void
SWGCategoryResource::setActive(bool active) {
    this->active = active;
}

QMap<QString, SWGProperty*>*
SWGCategoryResource::getAdditionalProperties() {
    return additional_properties;
}
void
SWGCategoryResource::setAdditionalProperties(QMap<QString, SWGProperty*>* additional_properties) {
    this->additional_properties = additional_properties;
}

QString*
SWGCategoryResource::getId() {
    return id;
}
void
SWGCategoryResource::setId(QString* id) {
    this->id = id;
}

QString*
SWGCategoryResource::getName() {
    return name;
}
void
SWGCategoryResource::setName(QString* name) {
    this->name = name;
}

QString*
SWGCategoryResource::getTemplate() {
    return template;
}
void
SWGCategoryResource::setTemplate(QString* template) {
    this->template = template;
}



} /* namespace Swagger */

