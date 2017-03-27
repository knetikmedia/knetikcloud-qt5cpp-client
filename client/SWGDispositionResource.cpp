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


#include "SWGDispositionResource.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGDispositionResource::SWGDispositionResource(QString* json) {
    init();
    this->fromJson(*json);
}

SWGDispositionResource::SWGDispositionResource() {
    init();
}

SWGDispositionResource::~SWGDispositionResource() {
    this->cleanup();
}

void
SWGDispositionResource::init() {
    context = new QString("");
    context_id = new QString("");
    created_date = 0L;
    id = 0L;
    name = new QString("");
    user = new SWGSimpleUserResource();
}

void
SWGDispositionResource::cleanup() {
    
    if(context != nullptr) {
        delete context;
    }

    if(context_id != nullptr) {
        delete context_id;
    }



    if(name != nullptr) {
        delete name;
    }

    if(user != nullptr) {
        delete user;
    }
}

SWGDispositionResource*
SWGDispositionResource::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGDispositionResource::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&context, pJson["context"], "QString", "QString");
    ::Swagger::setValue(&context_id, pJson["context_id"], "QString", "QString");
    ::Swagger::setValue(&created_date, pJson["created_date"], "qint64", "");
    ::Swagger::setValue(&id, pJson["id"], "qint64", "");
    ::Swagger::setValue(&name, pJson["name"], "QString", "QString");
    ::Swagger::setValue(&user, pJson["user"], "SWGSimpleUserResource", "SWGSimpleUserResource");
}

QString
SWGDispositionResource::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGDispositionResource::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    toJsonValue(QString("context"), context, obj, QString("QString"));

    toJsonValue(QString("context_id"), context_id, obj, QString("QString"));

    obj->insert("created_date", QJsonValue(created_date));

    obj->insert("id", QJsonValue(id));

    toJsonValue(QString("name"), name, obj, QString("QString"));

    toJsonValue(QString("user"), user, obj, QString("SWGSimpleUserResource"));

    return obj;
}

QString*
SWGDispositionResource::getContext() {
    return context;
}
void
SWGDispositionResource::setContext(QString* context) {
    this->context = context;
}

QString*
SWGDispositionResource::getContextId() {
    return context_id;
}
void
SWGDispositionResource::setContextId(QString* context_id) {
    this->context_id = context_id;
}

qint64
SWGDispositionResource::getCreatedDate() {
    return created_date;
}
void
SWGDispositionResource::setCreatedDate(qint64 created_date) {
    this->created_date = created_date;
}

qint64
SWGDispositionResource::getId() {
    return id;
}
void
SWGDispositionResource::setId(qint64 id) {
    this->id = id;
}

QString*
SWGDispositionResource::getName() {
    return name;
}
void
SWGDispositionResource::setName(QString* name) {
    this->name = name;
}

SWGSimpleUserResource*
SWGDispositionResource::getUser() {
    return user;
}
void
SWGDispositionResource::setUser(SWGSimpleUserResource* user) {
    this->user = user;
}



} /* namespace Swagger */

