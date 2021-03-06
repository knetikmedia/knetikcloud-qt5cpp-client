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


#include "SWGFlagReportResource.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGFlagReportResource::SWGFlagReportResource(QString* json) {
    init();
    this->fromJson(*json);
}

SWGFlagReportResource::SWGFlagReportResource() {
    init();
}

SWGFlagReportResource::~SWGFlagReportResource() {
    this->cleanup();
}

void
SWGFlagReportResource::init() {
    context = new QString("");
    context_id = new QString("");
    created_date = 0L;
    id = 0L;
    reason = new QString("");
    resolution = new QString("");
    resolved = 0L;
    updated_date = 0L;
}

void
SWGFlagReportResource::cleanup() {
    
    if(context != nullptr) {
        delete context;
    }

    if(context_id != nullptr) {
        delete context_id;
    }



    if(reason != nullptr) {
        delete reason;
    }

    if(resolution != nullptr) {
        delete resolution;
    }


}

SWGFlagReportResource*
SWGFlagReportResource::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGFlagReportResource::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&context, pJson["context"], "QString", "QString");
    ::Swagger::setValue(&context_id, pJson["context_id"], "QString", "QString");
    ::Swagger::setValue(&created_date, pJson["created_date"], "qint64", "");
    ::Swagger::setValue(&id, pJson["id"], "qint64", "");
    ::Swagger::setValue(&reason, pJson["reason"], "QString", "QString");
    ::Swagger::setValue(&resolution, pJson["resolution"], "QString", "QString");
    ::Swagger::setValue(&resolved, pJson["resolved"], "qint64", "");
    ::Swagger::setValue(&updated_date, pJson["updated_date"], "qint64", "");
}

QString
SWGFlagReportResource::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGFlagReportResource::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    toJsonValue(QString("context"), context, obj, QString("QString"));

    toJsonValue(QString("context_id"), context_id, obj, QString("QString"));

    obj->insert("created_date", QJsonValue(created_date));

    obj->insert("id", QJsonValue(id));

    toJsonValue(QString("reason"), reason, obj, QString("QString"));

    toJsonValue(QString("resolution"), resolution, obj, QString("QString"));

    obj->insert("resolved", QJsonValue(resolved));

    obj->insert("updated_date", QJsonValue(updated_date));

    return obj;
}

QString*
SWGFlagReportResource::getContext() {
    return context;
}
void
SWGFlagReportResource::setContext(QString* context) {
    this->context = context;
}

QString*
SWGFlagReportResource::getContextId() {
    return context_id;
}
void
SWGFlagReportResource::setContextId(QString* context_id) {
    this->context_id = context_id;
}

qint64
SWGFlagReportResource::getCreatedDate() {
    return created_date;
}
void
SWGFlagReportResource::setCreatedDate(qint64 created_date) {
    this->created_date = created_date;
}

qint64
SWGFlagReportResource::getId() {
    return id;
}
void
SWGFlagReportResource::setId(qint64 id) {
    this->id = id;
}

QString*
SWGFlagReportResource::getReason() {
    return reason;
}
void
SWGFlagReportResource::setReason(QString* reason) {
    this->reason = reason;
}

QString*
SWGFlagReportResource::getResolution() {
    return resolution;
}
void
SWGFlagReportResource::setResolution(QString* resolution) {
    this->resolution = resolution;
}

qint64
SWGFlagReportResource::getResolved() {
    return resolved;
}
void
SWGFlagReportResource::setResolved(qint64 resolved) {
    this->resolved = resolved;
}

qint64
SWGFlagReportResource::getUpdatedDate() {
    return updated_date;
}
void
SWGFlagReportResource::setUpdatedDate(qint64 updated_date) {
    this->updated_date = updated_date;
}



} /* namespace Swagger */

