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


#include "SWGAchievementDefinitionResource.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGAchievementDefinitionResource::SWGAchievementDefinitionResource(QString* json) {
    init();
    this->fromJson(*json);
}

SWGAchievementDefinitionResource::SWGAchievementDefinitionResource() {
    init();
}

SWGAchievementDefinitionResource::~SWGAchievementDefinitionResource() {
    this->cleanup();
}

void
SWGAchievementDefinitionResource::init() {
    additional_properties = new QMap<QString, SWGProperty>();
    created_date = 0L;
    description = new QString("");
    hidden = false;
    name = new QString("");
    required_progress = 0;
    rule_id = new QString("");
    tags = new QList<QString*>();
    template = new QString("");
    trigger_event_name = new QString("");
    updated_date = 0L;
}

void
SWGAchievementDefinitionResource::cleanup() {
    
    if(additional_properties != nullptr) {
        QList<SWGProperty*>* arr = additional_properties;
        foreach(SWGProperty* o, *arr) {
            delete o;
        }
        delete additional_properties;
    }


    if(description != nullptr) {
        delete description;
    }


    if(name != nullptr) {
        delete name;
    }


    if(rule_id != nullptr) {
        delete rule_id;
    }

    if(tags != nullptr) {
        QList<QString*>* arr = tags;
        foreach(QString* o, *arr) {
            delete o;
        }
        delete tags;
    }

    if(template != nullptr) {
        delete template;
    }

    if(trigger_event_name != nullptr) {
        delete trigger_event_name;
    }

}

SWGAchievementDefinitionResource*
SWGAchievementDefinitionResource::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGAchievementDefinitionResource::fromJsonObject(QJsonObject &pJson) {
    
    ::Swagger::setValue(&additional_properties, pJson["additional_properties"], "QMap", "SWGProperty");
    
    ::Swagger::setValue(&created_date, pJson["created_date"], "qint64", "");
    ::Swagger::setValue(&description, pJson["description"], "QString", "QString");
    ::Swagger::setValue(&hidden, pJson["hidden"], "bool", "");
    ::Swagger::setValue(&name, pJson["name"], "QString", "QString");
    ::Swagger::setValue(&required_progress, pJson["required_progress"], "qint32", "");
    ::Swagger::setValue(&rule_id, pJson["rule_id"], "QString", "QString");
    
    ::Swagger::setValue(&tags, pJson["tags"], "QList", "QString");
    
    ::Swagger::setValue(&template, pJson["template"], "QString", "QString");
    ::Swagger::setValue(&trigger_event_name, pJson["trigger_event_name"], "QString", "QString");
    ::Swagger::setValue(&updated_date, pJson["updated_date"], "qint64", "");
}

QString
SWGAchievementDefinitionResource::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGAchievementDefinitionResource::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    QJsonArray additional_propertiesJsonArray;
    toJsonArray((QList<void*>*)additional_properties, &additional_propertiesJsonArray, "additional_properties", "SWGProperty");
    obj->insert("additional_properties", additional_propertiesJsonArray);

    obj->insert("created_date", QJsonValue(created_date));

    toJsonValue(QString("description"), description, obj, QString("QString"));

    obj->insert("hidden", QJsonValue(hidden));

    toJsonValue(QString("name"), name, obj, QString("QString"));

    obj->insert("required_progress", QJsonValue(required_progress));

    toJsonValue(QString("rule_id"), rule_id, obj, QString("QString"));

    QJsonArray tagsJsonArray;
    toJsonArray((QList<void*>*)tags, &tagsJsonArray, "tags", "QString");
    obj->insert("tags", tagsJsonArray);

    toJsonValue(QString("template"), template, obj, QString("QString"));

    toJsonValue(QString("trigger_event_name"), trigger_event_name, obj, QString("QString"));

    obj->insert("updated_date", QJsonValue(updated_date));

    return obj;
}

QMap<QString, SWGProperty*>*
SWGAchievementDefinitionResource::getAdditionalProperties() {
    return additional_properties;
}
void
SWGAchievementDefinitionResource::setAdditionalProperties(QMap<QString, SWGProperty*>* additional_properties) {
    this->additional_properties = additional_properties;
}

qint64
SWGAchievementDefinitionResource::getCreatedDate() {
    return created_date;
}
void
SWGAchievementDefinitionResource::setCreatedDate(qint64 created_date) {
    this->created_date = created_date;
}

QString*
SWGAchievementDefinitionResource::getDescription() {
    return description;
}
void
SWGAchievementDefinitionResource::setDescription(QString* description) {
    this->description = description;
}

bool
SWGAchievementDefinitionResource::getHidden() {
    return hidden;
}
void
SWGAchievementDefinitionResource::setHidden(bool hidden) {
    this->hidden = hidden;
}

QString*
SWGAchievementDefinitionResource::getName() {
    return name;
}
void
SWGAchievementDefinitionResource::setName(QString* name) {
    this->name = name;
}

qint32
SWGAchievementDefinitionResource::getRequiredProgress() {
    return required_progress;
}
void
SWGAchievementDefinitionResource::setRequiredProgress(qint32 required_progress) {
    this->required_progress = required_progress;
}

QString*
SWGAchievementDefinitionResource::getRuleId() {
    return rule_id;
}
void
SWGAchievementDefinitionResource::setRuleId(QString* rule_id) {
    this->rule_id = rule_id;
}

QList<QString*>*
SWGAchievementDefinitionResource::getTags() {
    return tags;
}
void
SWGAchievementDefinitionResource::setTags(QList<QString*>* tags) {
    this->tags = tags;
}

QString*
SWGAchievementDefinitionResource::getTemplate() {
    return template;
}
void
SWGAchievementDefinitionResource::setTemplate(QString* template) {
    this->template = template;
}

QString*
SWGAchievementDefinitionResource::getTriggerEventName() {
    return trigger_event_name;
}
void
SWGAchievementDefinitionResource::setTriggerEventName(QString* trigger_event_name) {
    this->trigger_event_name = trigger_event_name;
}

qint64
SWGAchievementDefinitionResource::getUpdatedDate() {
    return updated_date;
}
void
SWGAchievementDefinitionResource::setUpdatedDate(qint64 updated_date) {
    this->updated_date = updated_date;
}



} /* namespace Swagger */
