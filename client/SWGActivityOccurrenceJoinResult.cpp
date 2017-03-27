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


#include "SWGActivityOccurrenceJoinResult.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGActivityOccurrenceJoinResult::SWGActivityOccurrenceJoinResult(QString* json) {
    init();
    this->fromJson(*json);
}

SWGActivityOccurrenceJoinResult::SWGActivityOccurrenceJoinResult() {
    init();
}

SWGActivityOccurrenceJoinResult::~SWGActivityOccurrenceJoinResult() {
    this->cleanup();
}

void
SWGActivityOccurrenceJoinResult::init() {
    entitlement = new SWGActivityEntitlementResource();
    error_code = 0;
    message = new QString("");
    user_id = 0L;
}

void
SWGActivityOccurrenceJoinResult::cleanup() {
    
    if(entitlement != nullptr) {
        delete entitlement;
    }


    if(message != nullptr) {
        delete message;
    }

}

SWGActivityOccurrenceJoinResult*
SWGActivityOccurrenceJoinResult::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGActivityOccurrenceJoinResult::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&entitlement, pJson["entitlement"], "SWGActivityEntitlementResource", "SWGActivityEntitlementResource");
    ::Swagger::setValue(&error_code, pJson["error_code"], "qint32", "");
    ::Swagger::setValue(&message, pJson["message"], "QString", "QString");
    ::Swagger::setValue(&user_id, pJson["user_id"], "qint64", "");
}

QString
SWGActivityOccurrenceJoinResult::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGActivityOccurrenceJoinResult::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    toJsonValue(QString("entitlement"), entitlement, obj, QString("SWGActivityEntitlementResource"));

    obj->insert("error_code", QJsonValue(error_code));

    toJsonValue(QString("message"), message, obj, QString("QString"));

    obj->insert("user_id", QJsonValue(user_id));

    return obj;
}

SWGActivityEntitlementResource*
SWGActivityOccurrenceJoinResult::getEntitlement() {
    return entitlement;
}
void
SWGActivityOccurrenceJoinResult::setEntitlement(SWGActivityEntitlementResource* entitlement) {
    this->entitlement = entitlement;
}

qint32
SWGActivityOccurrenceJoinResult::getErrorCode() {
    return error_code;
}
void
SWGActivityOccurrenceJoinResult::setErrorCode(qint32 error_code) {
    this->error_code = error_code;
}

QString*
SWGActivityOccurrenceJoinResult::getMessage() {
    return message;
}
void
SWGActivityOccurrenceJoinResult::setMessage(QString* message) {
    this->message = message;
}

qint64
SWGActivityOccurrenceJoinResult::getUserId() {
    return user_id;
}
void
SWGActivityOccurrenceJoinResult::setUserId(qint64 user_id) {
    this->user_id = user_id;
}



} /* namespace Swagger */

