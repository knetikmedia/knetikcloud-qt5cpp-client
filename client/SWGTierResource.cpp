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


#include "SWGTierResource.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGTierResource::SWGTierResource(QString* json) {
    init();
    this->fromJson(*json);
}

SWGTierResource::SWGTierResource() {
    init();
}

SWGTierResource::~SWGTierResource() {
    this->cleanup();
}

void
SWGTierResource::init() {
    additional_properties = new QMap<QString, SWGProperty>();
    name = new QString("");
    required_progress = 0;
    trigger_event_name = new QString("");
}

void
SWGTierResource::cleanup() {
    
    if(additional_properties != nullptr) {
        QList<SWGProperty*>* arr = additional_properties;
        foreach(SWGProperty* o, *arr) {
            delete o;
        }
        delete additional_properties;
    }

    if(name != nullptr) {
        delete name;
    }


    if(trigger_event_name != nullptr) {
        delete trigger_event_name;
    }
}

SWGTierResource*
SWGTierResource::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGTierResource::fromJsonObject(QJsonObject &pJson) {
    
    ::Swagger::setValue(&additional_properties, pJson["additional_properties"], "QMap", "SWGProperty");
    
    ::Swagger::setValue(&name, pJson["name"], "QString", "QString");
    ::Swagger::setValue(&required_progress, pJson["required_progress"], "qint32", "");
    ::Swagger::setValue(&trigger_event_name, pJson["trigger_event_name"], "QString", "QString");
}

QString
SWGTierResource::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGTierResource::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    QJsonArray additional_propertiesJsonArray;
    toJsonArray((QList<void*>*)additional_properties, &additional_propertiesJsonArray, "additional_properties", "SWGProperty");
    obj->insert("additional_properties", additional_propertiesJsonArray);

    toJsonValue(QString("name"), name, obj, QString("QString"));

    obj->insert("required_progress", QJsonValue(required_progress));

    toJsonValue(QString("trigger_event_name"), trigger_event_name, obj, QString("QString"));

    return obj;
}

QMap<QString, SWGProperty*>*
SWGTierResource::getAdditionalProperties() {
    return additional_properties;
}
void
SWGTierResource::setAdditionalProperties(QMap<QString, SWGProperty*>* additional_properties) {
    this->additional_properties = additional_properties;
}

QString*
SWGTierResource::getName() {
    return name;
}
void
SWGTierResource::setName(QString* name) {
    this->name = name;
}

qint32
SWGTierResource::getRequiredProgress() {
    return required_progress;
}
void
SWGTierResource::setRequiredProgress(qint32 required_progress) {
    this->required_progress = required_progress;
}

QString*
SWGTierResource::getTriggerEventName() {
    return trigger_event_name;
}
void
SWGTierResource::setTriggerEventName(QString* trigger_event_name) {
    this->trigger_event_name = trigger_event_name;
}



} /* namespace Swagger */
