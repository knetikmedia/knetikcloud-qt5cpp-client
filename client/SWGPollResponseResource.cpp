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


#include "SWGPollResponseResource.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGPollResponseResource::SWGPollResponseResource(QString* json) {
    init();
    this->fromJson(*json);
}

SWGPollResponseResource::SWGPollResponseResource() {
    init();
}

SWGPollResponseResource::~SWGPollResponseResource() {
    this->cleanup();
}

void
SWGPollResponseResource::init() {
    answer = new QString("");
    answered_date = 0L;
    id = new QString("");
    poll_id = new QString("");
    user = new SWGSimpleUserResource();
}

void
SWGPollResponseResource::cleanup() {
    
    if(answer != nullptr) {
        delete answer;
    }


    if(id != nullptr) {
        delete id;
    }

    if(poll_id != nullptr) {
        delete poll_id;
    }

    if(user != nullptr) {
        delete user;
    }
}

SWGPollResponseResource*
SWGPollResponseResource::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGPollResponseResource::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&answer, pJson["answer"], "QString", "QString");
    ::Swagger::setValue(&answered_date, pJson["answered_date"], "qint64", "");
    ::Swagger::setValue(&id, pJson["id"], "QString", "QString");
    ::Swagger::setValue(&poll_id, pJson["poll_id"], "QString", "QString");
    ::Swagger::setValue(&user, pJson["user"], "SWGSimpleUserResource", "SWGSimpleUserResource");
}

QString
SWGPollResponseResource::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGPollResponseResource::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    toJsonValue(QString("answer"), answer, obj, QString("QString"));

    obj->insert("answered_date", QJsonValue(answered_date));

    toJsonValue(QString("id"), id, obj, QString("QString"));

    toJsonValue(QString("poll_id"), poll_id, obj, QString("QString"));

    toJsonValue(QString("user"), user, obj, QString("SWGSimpleUserResource"));

    return obj;
}

QString*
SWGPollResponseResource::getAnswer() {
    return answer;
}
void
SWGPollResponseResource::setAnswer(QString* answer) {
    this->answer = answer;
}

qint64
SWGPollResponseResource::getAnsweredDate() {
    return answered_date;
}
void
SWGPollResponseResource::setAnsweredDate(qint64 answered_date) {
    this->answered_date = answered_date;
}

QString*
SWGPollResponseResource::getId() {
    return id;
}
void
SWGPollResponseResource::setId(QString* id) {
    this->id = id;
}

QString*
SWGPollResponseResource::getPollId() {
    return poll_id;
}
void
SWGPollResponseResource::setPollId(QString* poll_id) {
    this->poll_id = poll_id;
}

SWGSimpleUserResource*
SWGPollResponseResource::getUser() {
    return user;
}
void
SWGPollResponseResource::setUser(SWGSimpleUserResource* user) {
    this->user = user;
}



} /* namespace Swagger */
