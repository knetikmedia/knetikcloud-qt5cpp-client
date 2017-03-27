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


#include "SWGEntitlementItem.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGEntitlementItem::SWGEntitlementItem(QString* json) {
    init();
    this->fromJson(*json);
}

SWGEntitlementItem::SWGEntitlementItem() {
    init();
}

SWGEntitlementItem::~SWGEntitlementItem() {
    this->cleanup();
}

void
SWGEntitlementItem::init() {
    additional_properties = new QMap<QString, SWGProperty>();
    behaviors = new QList<SWGBehavior*>();
    category = new QString("");
    created_date = 0L;
    id = 0;
    long_description = new QString("");
    name = new QString("");
    short_description = new QString("");
    sort = 0;
    tags = new QList<QString*>();
    template = new QString("");
    type_hint = new QString("");
    unique_key = new QString("");
    updated_date = 0L;
}

void
SWGEntitlementItem::cleanup() {
    
    if(additional_properties != nullptr) {
        QList<SWGProperty*>* arr = additional_properties;
        foreach(SWGProperty* o, *arr) {
            delete o;
        }
        delete additional_properties;
    }

    if(behaviors != nullptr) {
        QList<SWGBehavior*>* arr = behaviors;
        foreach(SWGBehavior* o, *arr) {
            delete o;
        }
        delete behaviors;
    }

    if(category != nullptr) {
        delete category;
    }



    if(long_description != nullptr) {
        delete long_description;
    }

    if(name != nullptr) {
        delete name;
    }

    if(short_description != nullptr) {
        delete short_description;
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

    if(type_hint != nullptr) {
        delete type_hint;
    }

    if(unique_key != nullptr) {
        delete unique_key;
    }

}

SWGEntitlementItem*
SWGEntitlementItem::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGEntitlementItem::fromJsonObject(QJsonObject &pJson) {
    
    ::Swagger::setValue(&additional_properties, pJson["additional_properties"], "QMap", "SWGProperty");
    
    
    ::Swagger::setValue(&behaviors, pJson["behaviors"], "QList", "SWGBehavior");
    
    ::Swagger::setValue(&category, pJson["category"], "QString", "QString");
    ::Swagger::setValue(&created_date, pJson["created_date"], "qint64", "");
    ::Swagger::setValue(&id, pJson["id"], "qint32", "");
    ::Swagger::setValue(&long_description, pJson["long_description"], "QString", "QString");
    ::Swagger::setValue(&name, pJson["name"], "QString", "QString");
    ::Swagger::setValue(&short_description, pJson["short_description"], "QString", "QString");
    ::Swagger::setValue(&sort, pJson["sort"], "qint32", "");
    
    ::Swagger::setValue(&tags, pJson["tags"], "QList", "QString");
    
    ::Swagger::setValue(&template, pJson["template"], "QString", "QString");
    ::Swagger::setValue(&type_hint, pJson["type_hint"], "QString", "QString");
    ::Swagger::setValue(&unique_key, pJson["unique_key"], "QString", "QString");
    ::Swagger::setValue(&updated_date, pJson["updated_date"], "qint64", "");
}

QString
SWGEntitlementItem::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGEntitlementItem::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    QJsonArray additional_propertiesJsonArray;
    toJsonArray((QList<void*>*)additional_properties, &additional_propertiesJsonArray, "additional_properties", "SWGProperty");
    obj->insert("additional_properties", additional_propertiesJsonArray);

    QJsonArray behaviorsJsonArray;
    toJsonArray((QList<void*>*)behaviors, &behaviorsJsonArray, "behaviors", "SWGBehavior");
    obj->insert("behaviors", behaviorsJsonArray);

    toJsonValue(QString("category"), category, obj, QString("QString"));

    obj->insert("created_date", QJsonValue(created_date));

    obj->insert("id", QJsonValue(id));

    toJsonValue(QString("long_description"), long_description, obj, QString("QString"));

    toJsonValue(QString("name"), name, obj, QString("QString"));

    toJsonValue(QString("short_description"), short_description, obj, QString("QString"));

    obj->insert("sort", QJsonValue(sort));

    QJsonArray tagsJsonArray;
    toJsonArray((QList<void*>*)tags, &tagsJsonArray, "tags", "QString");
    obj->insert("tags", tagsJsonArray);

    toJsonValue(QString("template"), template, obj, QString("QString"));

    toJsonValue(QString("type_hint"), type_hint, obj, QString("QString"));

    toJsonValue(QString("unique_key"), unique_key, obj, QString("QString"));

    obj->insert("updated_date", QJsonValue(updated_date));

    return obj;
}

QMap<QString, SWGProperty*>*
SWGEntitlementItem::getAdditionalProperties() {
    return additional_properties;
}
void
SWGEntitlementItem::setAdditionalProperties(QMap<QString, SWGProperty*>* additional_properties) {
    this->additional_properties = additional_properties;
}

QList<SWGBehavior*>*
SWGEntitlementItem::getBehaviors() {
    return behaviors;
}
void
SWGEntitlementItem::setBehaviors(QList<SWGBehavior*>* behaviors) {
    this->behaviors = behaviors;
}

QString*
SWGEntitlementItem::getCategory() {
    return category;
}
void
SWGEntitlementItem::setCategory(QString* category) {
    this->category = category;
}

qint64
SWGEntitlementItem::getCreatedDate() {
    return created_date;
}
void
SWGEntitlementItem::setCreatedDate(qint64 created_date) {
    this->created_date = created_date;
}

qint32
SWGEntitlementItem::getId() {
    return id;
}
void
SWGEntitlementItem::setId(qint32 id) {
    this->id = id;
}

QString*
SWGEntitlementItem::getLongDescription() {
    return long_description;
}
void
SWGEntitlementItem::setLongDescription(QString* long_description) {
    this->long_description = long_description;
}

QString*
SWGEntitlementItem::getName() {
    return name;
}
void
SWGEntitlementItem::setName(QString* name) {
    this->name = name;
}

QString*
SWGEntitlementItem::getShortDescription() {
    return short_description;
}
void
SWGEntitlementItem::setShortDescription(QString* short_description) {
    this->short_description = short_description;
}

qint32
SWGEntitlementItem::getSort() {
    return sort;
}
void
SWGEntitlementItem::setSort(qint32 sort) {
    this->sort = sort;
}

QList<QString*>*
SWGEntitlementItem::getTags() {
    return tags;
}
void
SWGEntitlementItem::setTags(QList<QString*>* tags) {
    this->tags = tags;
}

QString*
SWGEntitlementItem::getTemplate() {
    return template;
}
void
SWGEntitlementItem::setTemplate(QString* template) {
    this->template = template;
}

QString*
SWGEntitlementItem::getTypeHint() {
    return type_hint;
}
void
SWGEntitlementItem::setTypeHint(QString* type_hint) {
    this->type_hint = type_hint;
}

QString*
SWGEntitlementItem::getUniqueKey() {
    return unique_key;
}
void
SWGEntitlementItem::setUniqueKey(QString* unique_key) {
    this->unique_key = unique_key;
}

qint64
SWGEntitlementItem::getUpdatedDate() {
    return updated_date;
}
void
SWGEntitlementItem::setUpdatedDate(qint64 updated_date) {
    this->updated_date = updated_date;
}



} /* namespace Swagger */
