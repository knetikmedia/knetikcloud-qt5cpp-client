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


#include "SWGUserTag.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGUserTag::SWGUserTag(QString* json) {
    init();
    this->fromJson(*json);
}

SWGUserTag::SWGUserTag() {
    init();
}

SWGUserTag::~SWGUserTag() {
    this->cleanup();
}

void
SWGUserTag::init() {
    id = 0;
    tag = new QString("");
    user = new SWGUser();
}

void
SWGUserTag::cleanup() {
    

    if(tag != nullptr) {
        delete tag;
    }

    if(user != nullptr) {
        delete user;
    }
}

SWGUserTag*
SWGUserTag::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGUserTag::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&id, pJson["id"], "qint32", "");
    ::Swagger::setValue(&tag, pJson["tag"], "QString", "QString");
    ::Swagger::setValue(&user, pJson["user"], "SWGUser", "SWGUser");
}

QString
SWGUserTag::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGUserTag::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    obj->insert("id", QJsonValue(id));

    toJsonValue(QString("tag"), tag, obj, QString("QString"));

    toJsonValue(QString("user"), user, obj, QString("SWGUser"));

    return obj;
}

qint32
SWGUserTag::getId() {
    return id;
}
void
SWGUserTag::setId(qint32 id) {
    this->id = id;
}

QString*
SWGUserTag::getTag() {
    return tag;
}
void
SWGUserTag::setTag(QString* tag) {
    this->tag = tag;
}

SWGUser*
SWGUserTag::getUser() {
    return user;
}
void
SWGUserTag::setUser(SWGUser* user) {
    this->user = user;
}



} /* namespace Swagger */
