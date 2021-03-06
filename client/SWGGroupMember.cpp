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


#include "SWGGroupMember.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGGroupMember::SWGGroupMember(QString* json) {
    init();
    this->fromJson(*json);
}

SWGGroupMember::SWGGroupMember() {
    init();
}

SWGGroupMember::~SWGGroupMember() {
    this->cleanup();
}

void
SWGGroupMember::init() {
    group = new SWGGroup();
    secondary = false;
    status = new QString("");
    user = new SWGUser();
}

void
SWGGroupMember::cleanup() {
    
    if(group != nullptr) {
        delete group;
    }


    if(status != nullptr) {
        delete status;
    }

    if(user != nullptr) {
        delete user;
    }
}

SWGGroupMember*
SWGGroupMember::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGGroupMember::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&group, pJson["group"], "SWGGroup", "SWGGroup");
    ::Swagger::setValue(&secondary, pJson["secondary"], "bool", "");
    ::Swagger::setValue(&status, pJson["status"], "QString", "QString");
    ::Swagger::setValue(&user, pJson["user"], "SWGUser", "SWGUser");
}

QString
SWGGroupMember::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGGroupMember::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    toJsonValue(QString("group"), group, obj, QString("SWGGroup"));

    obj->insert("secondary", QJsonValue(secondary));

    toJsonValue(QString("status"), status, obj, QString("QString"));

    toJsonValue(QString("user"), user, obj, QString("SWGUser"));

    return obj;
}

SWGGroup*
SWGGroupMember::getGroup() {
    return group;
}
void
SWGGroupMember::setGroup(SWGGroup* group) {
    this->group = group;
}

bool
SWGGroupMember::getSecondary() {
    return secondary;
}
void
SWGGroupMember::setSecondary(bool secondary) {
    this->secondary = secondary;
}

QString*
SWGGroupMember::getStatus() {
    return status;
}
void
SWGGroupMember::setStatus(QString* status) {
    this->status = status;
}

SWGUser*
SWGGroupMember::getUser() {
    return user;
}
void
SWGGroupMember::setUser(SWGUser* user) {
    this->user = user;
}



} /* namespace Swagger */

