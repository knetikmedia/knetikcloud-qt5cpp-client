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


#include "SWGActivityResource.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGActivityResource::SWGActivityResource(QString* json) {
    init();
    this->fromJson(*json);
}

SWGActivityResource::SWGActivityResource() {
    init();
}

SWGActivityResource::~SWGActivityResource() {
    this->cleanup();
}

void
SWGActivityResource::init() {
    created_date = 0L;
    entitlements = new QList<SWGActivityEntitlementResource*>();
    id = 0L;
    launch = new QString("");
    long_description = new QString("");
    name = new QString("");
    reward_set = new SWGRewardSetResource();
    settings = new QList<SWGAvailableSettingResource*>();
    short_description = new QString("");
    template = false;
    type = new QString("");
    unique_key = new QString("");
    updated_date = 0L;
}

void
SWGActivityResource::cleanup() {
    

    if(entitlements != nullptr) {
        QList<SWGActivityEntitlementResource*>* arr = entitlements;
        foreach(SWGActivityEntitlementResource* o, *arr) {
            delete o;
        }
        delete entitlements;
    }


    if(launch != nullptr) {
        delete launch;
    }

    if(long_description != nullptr) {
        delete long_description;
    }

    if(name != nullptr) {
        delete name;
    }

    if(reward_set != nullptr) {
        delete reward_set;
    }

    if(settings != nullptr) {
        QList<SWGAvailableSettingResource*>* arr = settings;
        foreach(SWGAvailableSettingResource* o, *arr) {
            delete o;
        }
        delete settings;
    }

    if(short_description != nullptr) {
        delete short_description;
    }


    if(type != nullptr) {
        delete type;
    }

    if(unique_key != nullptr) {
        delete unique_key;
    }

}

SWGActivityResource*
SWGActivityResource::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGActivityResource::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&created_date, pJson["created_date"], "qint64", "");
    
    ::Swagger::setValue(&entitlements, pJson["entitlements"], "QList", "SWGActivityEntitlementResource");
    
    ::Swagger::setValue(&id, pJson["id"], "qint64", "");
    ::Swagger::setValue(&launch, pJson["launch"], "QString", "QString");
    ::Swagger::setValue(&long_description, pJson["long_description"], "QString", "QString");
    ::Swagger::setValue(&name, pJson["name"], "QString", "QString");
    ::Swagger::setValue(&reward_set, pJson["reward_set"], "SWGRewardSetResource", "SWGRewardSetResource");
    
    ::Swagger::setValue(&settings, pJson["settings"], "QList", "SWGAvailableSettingResource");
    
    ::Swagger::setValue(&short_description, pJson["short_description"], "QString", "QString");
    ::Swagger::setValue(&template, pJson["template"], "bool", "");
    ::Swagger::setValue(&type, pJson["type"], "QString", "QString");
    ::Swagger::setValue(&unique_key, pJson["unique_key"], "QString", "QString");
    ::Swagger::setValue(&updated_date, pJson["updated_date"], "qint64", "");
}

QString
SWGActivityResource::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGActivityResource::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    obj->insert("created_date", QJsonValue(created_date));

    QJsonArray entitlementsJsonArray;
    toJsonArray((QList<void*>*)entitlements, &entitlementsJsonArray, "entitlements", "SWGActivityEntitlementResource");
    obj->insert("entitlements", entitlementsJsonArray);

    obj->insert("id", QJsonValue(id));

    toJsonValue(QString("launch"), launch, obj, QString("QString"));

    toJsonValue(QString("long_description"), long_description, obj, QString("QString"));

    toJsonValue(QString("name"), name, obj, QString("QString"));

    toJsonValue(QString("reward_set"), reward_set, obj, QString("SWGRewardSetResource"));

    QJsonArray settingsJsonArray;
    toJsonArray((QList<void*>*)settings, &settingsJsonArray, "settings", "SWGAvailableSettingResource");
    obj->insert("settings", settingsJsonArray);

    toJsonValue(QString("short_description"), short_description, obj, QString("QString"));

    obj->insert("template", QJsonValue(template));

    toJsonValue(QString("type"), type, obj, QString("QString"));

    toJsonValue(QString("unique_key"), unique_key, obj, QString("QString"));

    obj->insert("updated_date", QJsonValue(updated_date));

    return obj;
}

qint64
SWGActivityResource::getCreatedDate() {
    return created_date;
}
void
SWGActivityResource::setCreatedDate(qint64 created_date) {
    this->created_date = created_date;
}

QList<SWGActivityEntitlementResource*>*
SWGActivityResource::getEntitlements() {
    return entitlements;
}
void
SWGActivityResource::setEntitlements(QList<SWGActivityEntitlementResource*>* entitlements) {
    this->entitlements = entitlements;
}

qint64
SWGActivityResource::getId() {
    return id;
}
void
SWGActivityResource::setId(qint64 id) {
    this->id = id;
}

QString*
SWGActivityResource::getLaunch() {
    return launch;
}
void
SWGActivityResource::setLaunch(QString* launch) {
    this->launch = launch;
}

QString*
SWGActivityResource::getLongDescription() {
    return long_description;
}
void
SWGActivityResource::setLongDescription(QString* long_description) {
    this->long_description = long_description;
}

QString*
SWGActivityResource::getName() {
    return name;
}
void
SWGActivityResource::setName(QString* name) {
    this->name = name;
}

SWGRewardSetResource*
SWGActivityResource::getRewardSet() {
    return reward_set;
}
void
SWGActivityResource::setRewardSet(SWGRewardSetResource* reward_set) {
    this->reward_set = reward_set;
}

QList<SWGAvailableSettingResource*>*
SWGActivityResource::getSettings() {
    return settings;
}
void
SWGActivityResource::setSettings(QList<SWGAvailableSettingResource*>* settings) {
    this->settings = settings;
}

QString*
SWGActivityResource::getShortDescription() {
    return short_description;
}
void
SWGActivityResource::setShortDescription(QString* short_description) {
    this->short_description = short_description;
}

bool
SWGActivityResource::getTemplate() {
    return template;
}
void
SWGActivityResource::setTemplate(bool template) {
    this->template = template;
}

QString*
SWGActivityResource::getType() {
    return type;
}
void
SWGActivityResource::setType(QString* type) {
    this->type = type;
}

QString*
SWGActivityResource::getUniqueKey() {
    return unique_key;
}
void
SWGActivityResource::setUniqueKey(QString* unique_key) {
    this->unique_key = unique_key;
}

qint64
SWGActivityResource::getUpdatedDate() {
    return updated_date;
}
void
SWGActivityResource::setUpdatedDate(qint64 updated_date) {
    this->updated_date = updated_date;
}



} /* namespace Swagger */

