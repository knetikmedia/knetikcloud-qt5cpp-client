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


#include "SWGUserRelationshipResource.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGUserRelationshipResource::SWGUserRelationshipResource(QString* json) {
    init();
    this->fromJson(*json);
}

SWGUserRelationshipResource::SWGUserRelationshipResource() {
    init();
}

SWGUserRelationshipResource::~SWGUserRelationshipResource() {
    this->cleanup();
}

void
SWGUserRelationshipResource::init() {
    child = new SWGSimpleUserResource();
    context = new QString("");
    id = 0L;
    parent = new SWGSimpleUserResource();
}

void
SWGUserRelationshipResource::cleanup() {
    
    if(child != nullptr) {
        delete child;
    }

    if(context != nullptr) {
        delete context;
    }


    if(parent != nullptr) {
        delete parent;
    }
}

SWGUserRelationshipResource*
SWGUserRelationshipResource::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGUserRelationshipResource::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&child, pJson["child"], "SWGSimpleUserResource", "SWGSimpleUserResource");
    ::Swagger::setValue(&context, pJson["context"], "QString", "QString");
    ::Swagger::setValue(&id, pJson["id"], "qint64", "");
    ::Swagger::setValue(&parent, pJson["parent"], "SWGSimpleUserResource", "SWGSimpleUserResource");
}

QString
SWGUserRelationshipResource::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGUserRelationshipResource::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    toJsonValue(QString("child"), child, obj, QString("SWGSimpleUserResource"));

    toJsonValue(QString("context"), context, obj, QString("QString"));

    obj->insert("id", QJsonValue(id));

    toJsonValue(QString("parent"), parent, obj, QString("SWGSimpleUserResource"));

    return obj;
}

SWGSimpleUserResource*
SWGUserRelationshipResource::getChild() {
    return child;
}
void
SWGUserRelationshipResource::setChild(SWGSimpleUserResource* child) {
    this->child = child;
}

QString*
SWGUserRelationshipResource::getContext() {
    return context;
}
void
SWGUserRelationshipResource::setContext(QString* context) {
    this->context = context;
}

qint64
SWGUserRelationshipResource::getId() {
    return id;
}
void
SWGUserRelationshipResource::setId(qint64 id) {
    this->id = id;
}

SWGSimpleUserResource*
SWGUserRelationshipResource::getParent() {
    return parent;
}
void
SWGUserRelationshipResource::setParent(SWGSimpleUserResource* parent) {
    this->parent = parent;
}



} /* namespace Swagger */

