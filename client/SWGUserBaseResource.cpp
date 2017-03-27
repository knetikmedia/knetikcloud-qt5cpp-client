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


#include "SWGUserBaseResource.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGUserBaseResource::SWGUserBaseResource(QString* json) {
    init();
    this->fromJson(*json);
}

SWGUserBaseResource::SWGUserBaseResource() {
    init();
}

SWGUserBaseResource::~SWGUserBaseResource() {
    this->cleanup();
}

void
SWGUserBaseResource::init() {
    avatar_url = new QString("");
    display_name = new QString("");
    email = new QString("");
    fullname = new QString("");
    id = 0;
    username = new QString("");
}

void
SWGUserBaseResource::cleanup() {
    
    if(avatar_url != nullptr) {
        delete avatar_url;
    }

    if(display_name != nullptr) {
        delete display_name;
    }

    if(email != nullptr) {
        delete email;
    }

    if(fullname != nullptr) {
        delete fullname;
    }


    if(username != nullptr) {
        delete username;
    }
}

SWGUserBaseResource*
SWGUserBaseResource::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGUserBaseResource::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&avatar_url, pJson["avatar_url"], "QString", "QString");
    ::Swagger::setValue(&display_name, pJson["display_name"], "QString", "QString");
    ::Swagger::setValue(&email, pJson["email"], "QString", "QString");
    ::Swagger::setValue(&fullname, pJson["fullname"], "QString", "QString");
    ::Swagger::setValue(&id, pJson["id"], "qint32", "");
    ::Swagger::setValue(&username, pJson["username"], "QString", "QString");
}

QString
SWGUserBaseResource::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGUserBaseResource::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    toJsonValue(QString("avatar_url"), avatar_url, obj, QString("QString"));

    toJsonValue(QString("display_name"), display_name, obj, QString("QString"));

    toJsonValue(QString("email"), email, obj, QString("QString"));

    toJsonValue(QString("fullname"), fullname, obj, QString("QString"));

    obj->insert("id", QJsonValue(id));

    toJsonValue(QString("username"), username, obj, QString("QString"));

    return obj;
}

QString*
SWGUserBaseResource::getAvatarUrl() {
    return avatar_url;
}
void
SWGUserBaseResource::setAvatarUrl(QString* avatar_url) {
    this->avatar_url = avatar_url;
}

QString*
SWGUserBaseResource::getDisplayName() {
    return display_name;
}
void
SWGUserBaseResource::setDisplayName(QString* display_name) {
    this->display_name = display_name;
}

QString*
SWGUserBaseResource::getEmail() {
    return email;
}
void
SWGUserBaseResource::setEmail(QString* email) {
    this->email = email;
}

QString*
SWGUserBaseResource::getFullname() {
    return fullname;
}
void
SWGUserBaseResource::setFullname(QString* fullname) {
    this->fullname = fullname;
}

qint32
SWGUserBaseResource::getId() {
    return id;
}
void
SWGUserBaseResource::setId(qint32 id) {
    this->id = id;
}

QString*
SWGUserBaseResource::getUsername() {
    return username;
}
void
SWGUserBaseResource::setUsername(QString* username) {
    this->username = username;
}



} /* namespace Swagger */
