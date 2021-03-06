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


#include "SWGTokenDetailsResource.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGTokenDetailsResource::SWGTokenDetailsResource(QString* json) {
    init();
    this->fromJson(*json);
}

SWGTokenDetailsResource::SWGTokenDetailsResource() {
    init();
}

SWGTokenDetailsResource::~SWGTokenDetailsResource() {
    this->cleanup();
}

void
SWGTokenDetailsResource::init() {
    roles = new QList<QString*>();
    user_id = 0;
}

void
SWGTokenDetailsResource::cleanup() {
    
    if(roles != nullptr) {
        QList<QString*>* arr = roles;
        foreach(QString* o, *arr) {
            delete o;
        }
        delete roles;
    }

}

SWGTokenDetailsResource*
SWGTokenDetailsResource::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGTokenDetailsResource::fromJsonObject(QJsonObject &pJson) {
    
    ::Swagger::setValue(&roles, pJson["roles"], "QList", "QString");
    
    ::Swagger::setValue(&user_id, pJson["user_id"], "qint32", "");
}

QString
SWGTokenDetailsResource::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGTokenDetailsResource::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    QJsonArray rolesJsonArray;
    toJsonArray((QList<void*>*)roles, &rolesJsonArray, "roles", "QString");
    obj->insert("roles", rolesJsonArray);

    obj->insert("user_id", QJsonValue(user_id));

    return obj;
}

QList<QString*>*
SWGTokenDetailsResource::getRoles() {
    return roles;
}
void
SWGTokenDetailsResource::setRoles(QList<QString*>* roles) {
    this->roles = roles;
}

qint32
SWGTokenDetailsResource::getUserId() {
    return user_id;
}
void
SWGTokenDetailsResource::setUserId(qint32 user_id) {
    this->user_id = user_id;
}



} /* namespace Swagger */

