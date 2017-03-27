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


#include "SWGSubscriptionTemplateResource.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGSubscriptionTemplateResource::SWGSubscriptionTemplateResource(QString* json) {
    init();
    this->fromJson(*json);
}

SWGSubscriptionTemplateResource::SWGSubscriptionTemplateResource() {
    init();
}

SWGSubscriptionTemplateResource::~SWGSubscriptionTemplateResource() {
    this->cleanup();
}

void
SWGSubscriptionTemplateResource::init() {
    created_date = 0L;
    id = new QString("");
    name = new QString("");
    plan_template = new SWGTemplateResource();
    properties = new QList<SWGPropertyDefinitionResource*>();
    updated_date = 0L;
}

void
SWGSubscriptionTemplateResource::cleanup() {
    

    if(id != nullptr) {
        delete id;
    }

    if(name != nullptr) {
        delete name;
    }

    if(plan_template != nullptr) {
        delete plan_template;
    }

    if(properties != nullptr) {
        QList<SWGPropertyDefinitionResource*>* arr = properties;
        foreach(SWGPropertyDefinitionResource* o, *arr) {
            delete o;
        }
        delete properties;
    }

}

SWGSubscriptionTemplateResource*
SWGSubscriptionTemplateResource::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGSubscriptionTemplateResource::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&created_date, pJson["created_date"], "qint64", "");
    ::Swagger::setValue(&id, pJson["id"], "QString", "QString");
    ::Swagger::setValue(&name, pJson["name"], "QString", "QString");
    ::Swagger::setValue(&plan_template, pJson["plan_template"], "SWGTemplateResource", "SWGTemplateResource");
    
    ::Swagger::setValue(&properties, pJson["properties"], "QList", "SWGPropertyDefinitionResource");
    
    ::Swagger::setValue(&updated_date, pJson["updated_date"], "qint64", "");
}

QString
SWGSubscriptionTemplateResource::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGSubscriptionTemplateResource::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    obj->insert("created_date", QJsonValue(created_date));

    toJsonValue(QString("id"), id, obj, QString("QString"));

    toJsonValue(QString("name"), name, obj, QString("QString"));

    toJsonValue(QString("plan_template"), plan_template, obj, QString("SWGTemplateResource"));

    QJsonArray propertiesJsonArray;
    toJsonArray((QList<void*>*)properties, &propertiesJsonArray, "properties", "SWGPropertyDefinitionResource");
    obj->insert("properties", propertiesJsonArray);

    obj->insert("updated_date", QJsonValue(updated_date));

    return obj;
}

qint64
SWGSubscriptionTemplateResource::getCreatedDate() {
    return created_date;
}
void
SWGSubscriptionTemplateResource::setCreatedDate(qint64 created_date) {
    this->created_date = created_date;
}

QString*
SWGSubscriptionTemplateResource::getId() {
    return id;
}
void
SWGSubscriptionTemplateResource::setId(QString* id) {
    this->id = id;
}

QString*
SWGSubscriptionTemplateResource::getName() {
    return name;
}
void
SWGSubscriptionTemplateResource::setName(QString* name) {
    this->name = name;
}

SWGTemplateResource*
SWGSubscriptionTemplateResource::getPlanTemplate() {
    return plan_template;
}
void
SWGSubscriptionTemplateResource::setPlanTemplate(SWGTemplateResource* plan_template) {
    this->plan_template = plan_template;
}

QList<SWGPropertyDefinitionResource*>*
SWGSubscriptionTemplateResource::getProperties() {
    return properties;
}
void
SWGSubscriptionTemplateResource::setProperties(QList<SWGPropertyDefinitionResource*>* properties) {
    this->properties = properties;
}

qint64
SWGSubscriptionTemplateResource::getUpdatedDate() {
    return updated_date;
}
void
SWGSubscriptionTemplateResource::setUpdatedDate(qint64 updated_date) {
    this->updated_date = updated_date;
}



} /* namespace Swagger */

