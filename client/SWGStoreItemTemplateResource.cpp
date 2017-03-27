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


#include "SWGStoreItemTemplateResource.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGStoreItemTemplateResource::SWGStoreItemTemplateResource(QString* json) {
    init();
    this->fromJson(*json);
}

SWGStoreItemTemplateResource::SWGStoreItemTemplateResource() {
    init();
}

SWGStoreItemTemplateResource::~SWGStoreItemTemplateResource() {
    this->cleanup();
}

void
SWGStoreItemTemplateResource::init() {
    behaviors = new QList<SWGItemBehaviorDefinitionResource*>();
    created_date = 0L;
    id = new QString("");
    name = new QString("");
    properties = new QList<SWGPropertyDefinitionResource*>();
    sku_template = new SWGTemplateResource();
    updated_date = 0L;
}

void
SWGStoreItemTemplateResource::cleanup() {
    
    if(behaviors != nullptr) {
        QList<SWGItemBehaviorDefinitionResource*>* arr = behaviors;
        foreach(SWGItemBehaviorDefinitionResource* o, *arr) {
            delete o;
        }
        delete behaviors;
    }


    if(id != nullptr) {
        delete id;
    }

    if(name != nullptr) {
        delete name;
    }

    if(properties != nullptr) {
        QList<SWGPropertyDefinitionResource*>* arr = properties;
        foreach(SWGPropertyDefinitionResource* o, *arr) {
            delete o;
        }
        delete properties;
    }

    if(sku_template != nullptr) {
        delete sku_template;
    }

}

SWGStoreItemTemplateResource*
SWGStoreItemTemplateResource::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGStoreItemTemplateResource::fromJsonObject(QJsonObject &pJson) {
    
    ::Swagger::setValue(&behaviors, pJson["behaviors"], "QList", "SWGItemBehaviorDefinitionResource");
    
    ::Swagger::setValue(&created_date, pJson["created_date"], "qint64", "");
    ::Swagger::setValue(&id, pJson["id"], "QString", "QString");
    ::Swagger::setValue(&name, pJson["name"], "QString", "QString");
    
    ::Swagger::setValue(&properties, pJson["properties"], "QList", "SWGPropertyDefinitionResource");
    
    ::Swagger::setValue(&sku_template, pJson["sku_template"], "SWGTemplateResource", "SWGTemplateResource");
    ::Swagger::setValue(&updated_date, pJson["updated_date"], "qint64", "");
}

QString
SWGStoreItemTemplateResource::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGStoreItemTemplateResource::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    QJsonArray behaviorsJsonArray;
    toJsonArray((QList<void*>*)behaviors, &behaviorsJsonArray, "behaviors", "SWGItemBehaviorDefinitionResource");
    obj->insert("behaviors", behaviorsJsonArray);

    obj->insert("created_date", QJsonValue(created_date));

    toJsonValue(QString("id"), id, obj, QString("QString"));

    toJsonValue(QString("name"), name, obj, QString("QString"));

    QJsonArray propertiesJsonArray;
    toJsonArray((QList<void*>*)properties, &propertiesJsonArray, "properties", "SWGPropertyDefinitionResource");
    obj->insert("properties", propertiesJsonArray);

    toJsonValue(QString("sku_template"), sku_template, obj, QString("SWGTemplateResource"));

    obj->insert("updated_date", QJsonValue(updated_date));

    return obj;
}

QList<SWGItemBehaviorDefinitionResource*>*
SWGStoreItemTemplateResource::getBehaviors() {
    return behaviors;
}
void
SWGStoreItemTemplateResource::setBehaviors(QList<SWGItemBehaviorDefinitionResource*>* behaviors) {
    this->behaviors = behaviors;
}

qint64
SWGStoreItemTemplateResource::getCreatedDate() {
    return created_date;
}
void
SWGStoreItemTemplateResource::setCreatedDate(qint64 created_date) {
    this->created_date = created_date;
}

QString*
SWGStoreItemTemplateResource::getId() {
    return id;
}
void
SWGStoreItemTemplateResource::setId(QString* id) {
    this->id = id;
}

QString*
SWGStoreItemTemplateResource::getName() {
    return name;
}
void
SWGStoreItemTemplateResource::setName(QString* name) {
    this->name = name;
}

QList<SWGPropertyDefinitionResource*>*
SWGStoreItemTemplateResource::getProperties() {
    return properties;
}
void
SWGStoreItemTemplateResource::setProperties(QList<SWGPropertyDefinitionResource*>* properties) {
    this->properties = properties;
}

SWGTemplateResource*
SWGStoreItemTemplateResource::getSkuTemplate() {
    return sku_template;
}
void
SWGStoreItemTemplateResource::setSkuTemplate(SWGTemplateResource* sku_template) {
    this->sku_template = sku_template;
}

qint64
SWGStoreItemTemplateResource::getUpdatedDate() {
    return updated_date;
}
void
SWGStoreItemTemplateResource::setUpdatedDate(qint64 updated_date) {
    this->updated_date = updated_date;
}



} /* namespace Swagger */
