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


#include "SWGOauthAccessTokenResource.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGOauthAccessTokenResource::SWGOauthAccessTokenResource(QString* json) {
    init();
    this->fromJson(*json);
}

SWGOauthAccessTokenResource::SWGOauthAccessTokenResource() {
    init();
}

SWGOauthAccessTokenResource::~SWGOauthAccessTokenResource() {
    this->cleanup();
}

void
SWGOauthAccessTokenResource::init() {
    client_id = new QString("");
    token = new QString("");
    username = new QString("");
}

void
SWGOauthAccessTokenResource::cleanup() {
    
    if(client_id != nullptr) {
        delete client_id;
    }

    if(token != nullptr) {
        delete token;
    }

    if(username != nullptr) {
        delete username;
    }
}

SWGOauthAccessTokenResource*
SWGOauthAccessTokenResource::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGOauthAccessTokenResource::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&client_id, pJson["client_id"], "QString", "QString");
    ::Swagger::setValue(&token, pJson["token"], "QString", "QString");
    ::Swagger::setValue(&username, pJson["username"], "QString", "QString");
}

QString
SWGOauthAccessTokenResource::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGOauthAccessTokenResource::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    toJsonValue(QString("client_id"), client_id, obj, QString("QString"));

    toJsonValue(QString("token"), token, obj, QString("QString"));

    toJsonValue(QString("username"), username, obj, QString("QString"));

    return obj;
}

QString*
SWGOauthAccessTokenResource::getClientId() {
    return client_id;
}
void
SWGOauthAccessTokenResource::setClientId(QString* client_id) {
    this->client_id = client_id;
}

QString*
SWGOauthAccessTokenResource::getToken() {
    return token;
}
void
SWGOauthAccessTokenResource::setToken(QString* token) {
    this->token = token;
}

QString*
SWGOauthAccessTokenResource::getUsername() {
    return username;
}
void
SWGOauthAccessTokenResource::setUsername(QString* username) {
    this->username = username;
}



} /* namespace Swagger */

