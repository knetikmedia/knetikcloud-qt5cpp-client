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


#include "SWGUserRelationship.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGUserRelationship::SWGUserRelationship(QString* json) {
    init();
    this->fromJson(*json);
}

SWGUserRelationship::SWGUserRelationship() {
    init();
}

SWGUserRelationship::~SWGUserRelationship() {
    this->cleanup();
}

void
SWGUserRelationship::init() {
    child = new SWGUser();
    context = new QString("");
    id = 0L;
    parent = new SWGUser();
}

void
SWGUserRelationship::cleanup() {
    
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

SWGUserRelationship*
SWGUserRelationship::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGUserRelationship::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&child, pJson["child"], "SWGUser", "SWGUser");
    ::Swagger::setValue(&context, pJson["context"], "QString", "QString");
    ::Swagger::setValue(&id, pJson["id"], "qint64", "");
    ::Swagger::setValue(&parent, pJson["parent"], "SWGUser", "SWGUser");
}

QString
SWGUserRelationship::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGUserRelationship::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    toJsonValue(QString("child"), child, obj, QString("SWGUser"));

    toJsonValue(QString("context"), context, obj, QString("QString"));

    obj->insert("id", QJsonValue(id));

    toJsonValue(QString("parent"), parent, obj, QString("SWGUser"));

    return obj;
}

SWGUser*
SWGUserRelationship::getChild() {
    return child;
}
void
SWGUserRelationship::setChild(SWGUser* child) {
    this->child = child;
}

QString*
SWGUserRelationship::getContext() {
    return context;
}
void
SWGUserRelationship::setContext(QString* context) {
    this->context = context;
}

qint64
SWGUserRelationship::getId() {
    return id;
}
void
SWGUserRelationship::setId(qint64 id) {
    this->id = id;
}

SWGUser*
SWGUserRelationship::getParent() {
    return parent;
}
void
SWGUserRelationship::setParent(SWGUser* parent) {
    this->parent = parent;
}



} /* namespace Swagger */

