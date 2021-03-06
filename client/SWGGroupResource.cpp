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


#include "SWGGroupResource.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGGroupResource::SWGGroupResource(QString* json) {
    init();
    this->fromJson(*json);
}

SWGGroupResource::SWGGroupResource() {
    init();
}

SWGGroupResource::~SWGGroupResource() {
    this->cleanup();
}

void
SWGGroupResource::init() {
    additional_properties = new QMap<QString, SWGProperty>();
    description = new QString("");
    member_count = 0;
    message_of_the_day = new QString("");
    name = new QString("");
    parent = new QString("");
    status = new QString("");
    sub_member_count = 0;
    template = new QString("");
    unique_name = new QString("");
}

void
SWGGroupResource::cleanup() {
    
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


    if(message_of_the_day != nullptr) {
        delete message_of_the_day;
    }

    if(name != nullptr) {
        delete name;
    }

    if(parent != nullptr) {
        delete parent;
    }

    if(status != nullptr) {
        delete status;
    }


    if(template != nullptr) {
        delete template;
    }

    if(unique_name != nullptr) {
        delete unique_name;
    }
}

SWGGroupResource*
SWGGroupResource::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGGroupResource::fromJsonObject(QJsonObject &pJson) {
    
    ::Swagger::setValue(&additional_properties, pJson["additional_properties"], "QMap", "SWGProperty");
    
    ::Swagger::setValue(&description, pJson["description"], "QString", "QString");
    ::Swagger::setValue(&member_count, pJson["member_count"], "qint32", "");
    ::Swagger::setValue(&message_of_the_day, pJson["message_of_the_day"], "QString", "QString");
    ::Swagger::setValue(&name, pJson["name"], "QString", "QString");
    ::Swagger::setValue(&parent, pJson["parent"], "QString", "QString");
    ::Swagger::setValue(&status, pJson["status"], "QString", "QString");
    ::Swagger::setValue(&sub_member_count, pJson["sub_member_count"], "qint32", "");
    ::Swagger::setValue(&template, pJson["template"], "QString", "QString");
    ::Swagger::setValue(&unique_name, pJson["unique_name"], "QString", "QString");
}

QString
SWGGroupResource::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGGroupResource::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    QJsonArray additional_propertiesJsonArray;
    toJsonArray((QList<void*>*)additional_properties, &additional_propertiesJsonArray, "additional_properties", "SWGProperty");
    obj->insert("additional_properties", additional_propertiesJsonArray);

    toJsonValue(QString("description"), description, obj, QString("QString"));

    obj->insert("member_count", QJsonValue(member_count));

    toJsonValue(QString("message_of_the_day"), message_of_the_day, obj, QString("QString"));

    toJsonValue(QString("name"), name, obj, QString("QString"));

    toJsonValue(QString("parent"), parent, obj, QString("QString"));

    toJsonValue(QString("status"), status, obj, QString("QString"));

    obj->insert("sub_member_count", QJsonValue(sub_member_count));

    toJsonValue(QString("template"), template, obj, QString("QString"));

    toJsonValue(QString("unique_name"), unique_name, obj, QString("QString"));

    return obj;
}

QMap<QString, SWGProperty*>*
SWGGroupResource::getAdditionalProperties() {
    return additional_properties;
}
void
SWGGroupResource::setAdditionalProperties(QMap<QString, SWGProperty*>* additional_properties) {
    this->additional_properties = additional_properties;
}

QString*
SWGGroupResource::getDescription() {
    return description;
}
void
SWGGroupResource::setDescription(QString* description) {
    this->description = description;
}

qint32
SWGGroupResource::getMemberCount() {
    return member_count;
}
void
SWGGroupResource::setMemberCount(qint32 member_count) {
    this->member_count = member_count;
}

QString*
SWGGroupResource::getMessageOfTheDay() {
    return message_of_the_day;
}
void
SWGGroupResource::setMessageOfTheDay(QString* message_of_the_day) {
    this->message_of_the_day = message_of_the_day;
}

QString*
SWGGroupResource::getName() {
    return name;
}
void
SWGGroupResource::setName(QString* name) {
    this->name = name;
}

QString*
SWGGroupResource::getParent() {
    return parent;
}
void
SWGGroupResource::setParent(QString* parent) {
    this->parent = parent;
}

QString*
SWGGroupResource::getStatus() {
    return status;
}
void
SWGGroupResource::setStatus(QString* status) {
    this->status = status;
}

qint32
SWGGroupResource::getSubMemberCount() {
    return sub_member_count;
}
void
SWGGroupResource::setSubMemberCount(qint32 sub_member_count) {
    this->sub_member_count = sub_member_count;
}

QString*
SWGGroupResource::getTemplate() {
    return template;
}
void
SWGGroupResource::setTemplate(QString* template) {
    this->template = template;
}

QString*
SWGGroupResource::getUniqueName() {
    return unique_name;
}
void
SWGGroupResource::setUniqueName(QString* unique_name) {
    this->unique_name = unique_name;
}



} /* namespace Swagger */

