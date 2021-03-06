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


#include "SWGRoleResource.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGRoleResource::SWGRoleResource(QString* json) {
    init();
    this->fromJson(*json);
}

SWGRoleResource::SWGRoleResource() {
    init();
}

SWGRoleResource::~SWGRoleResource() {
    this->cleanup();
}

void
SWGRoleResource::init() {
    client_count = 0;
    created_date = 0L;
    locked = false;
    name = new QString("");
    role = new QString("");
    role_permission = new QList<SWGPermissionResource*>();
    user_count = 0;
}

void
SWGRoleResource::cleanup() {
    



    if(name != nullptr) {
        delete name;
    }

    if(role != nullptr) {
        delete role;
    }

    if(role_permission != nullptr) {
        QList<SWGPermissionResource*>* arr = role_permission;
        foreach(SWGPermissionResource* o, *arr) {
            delete o;
        }
        delete role_permission;
    }

}

SWGRoleResource*
SWGRoleResource::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGRoleResource::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&client_count, pJson["client_count"], "qint32", "");
    ::Swagger::setValue(&created_date, pJson["created_date"], "qint64", "");
    ::Swagger::setValue(&locked, pJson["locked"], "bool", "");
    ::Swagger::setValue(&name, pJson["name"], "QString", "QString");
    ::Swagger::setValue(&role, pJson["role"], "QString", "QString");
    
    ::Swagger::setValue(&role_permission, pJson["role_permission"], "QList", "SWGPermissionResource");
    
    ::Swagger::setValue(&user_count, pJson["user_count"], "qint32", "");
}

QString
SWGRoleResource::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGRoleResource::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    obj->insert("client_count", QJsonValue(client_count));

    obj->insert("created_date", QJsonValue(created_date));

    obj->insert("locked", QJsonValue(locked));

    toJsonValue(QString("name"), name, obj, QString("QString"));

    toJsonValue(QString("role"), role, obj, QString("QString"));

    QJsonArray role_permissionJsonArray;
    toJsonArray((QList<void*>*)role_permission, &role_permissionJsonArray, "role_permission", "SWGPermissionResource");
    obj->insert("role_permission", role_permissionJsonArray);

    obj->insert("user_count", QJsonValue(user_count));

    return obj;
}

qint32
SWGRoleResource::getClientCount() {
    return client_count;
}
void
SWGRoleResource::setClientCount(qint32 client_count) {
    this->client_count = client_count;
}

qint64
SWGRoleResource::getCreatedDate() {
    return created_date;
}
void
SWGRoleResource::setCreatedDate(qint64 created_date) {
    this->created_date = created_date;
}

bool
SWGRoleResource::getLocked() {
    return locked;
}
void
SWGRoleResource::setLocked(bool locked) {
    this->locked = locked;
}

QString*
SWGRoleResource::getName() {
    return name;
}
void
SWGRoleResource::setName(QString* name) {
    this->name = name;
}

QString*
SWGRoleResource::getRole() {
    return role;
}
void
SWGRoleResource::setRole(QString* role) {
    this->role = role;
}

QList<SWGPermissionResource*>*
SWGRoleResource::getRolePermission() {
    return role_permission;
}
void
SWGRoleResource::setRolePermission(QList<SWGPermissionResource*>* role_permission) {
    this->role_permission = role_permission;
}

qint32
SWGRoleResource::getUserCount() {
    return user_count;
}
void
SWGRoleResource::setUserCount(qint32 user_count) {
    this->user_count = user_count;
}



} /* namespace Swagger */

