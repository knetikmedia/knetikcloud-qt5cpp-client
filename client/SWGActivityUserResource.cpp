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


#include "SWGActivityUserResource.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGActivityUserResource::SWGActivityUserResource(QString* json) {
    init();
    this->fromJson(*json);
}

SWGActivityUserResource::SWGActivityUserResource() {
    init();
}

SWGActivityUserResource::~SWGActivityUserResource() {
    this->cleanup();
}

void
SWGActivityUserResource::init() {
    host = false;
    id = 0L;
    joined_date = 0L;
    left_date = 0L;
    metric = new SWGMetricResource();
    status = new QString("");
    user = new SWGSimpleUserResource();
}

void
SWGActivityUserResource::cleanup() {
    




    if(metric != nullptr) {
        delete metric;
    }

    if(status != nullptr) {
        delete status;
    }

    if(user != nullptr) {
        delete user;
    }
}

SWGActivityUserResource*
SWGActivityUserResource::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGActivityUserResource::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&host, pJson["host"], "bool", "");
    ::Swagger::setValue(&id, pJson["id"], "qint64", "");
    ::Swagger::setValue(&joined_date, pJson["joined_date"], "qint64", "");
    ::Swagger::setValue(&left_date, pJson["left_date"], "qint64", "");
    ::Swagger::setValue(&metric, pJson["metric"], "SWGMetricResource", "SWGMetricResource");
    ::Swagger::setValue(&status, pJson["status"], "QString", "QString");
    ::Swagger::setValue(&user, pJson["user"], "SWGSimpleUserResource", "SWGSimpleUserResource");
}

QString
SWGActivityUserResource::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGActivityUserResource::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    obj->insert("host", QJsonValue(host));

    obj->insert("id", QJsonValue(id));

    obj->insert("joined_date", QJsonValue(joined_date));

    obj->insert("left_date", QJsonValue(left_date));

    toJsonValue(QString("metric"), metric, obj, QString("SWGMetricResource"));

    toJsonValue(QString("status"), status, obj, QString("QString"));

    toJsonValue(QString("user"), user, obj, QString("SWGSimpleUserResource"));

    return obj;
}

bool
SWGActivityUserResource::getHost() {
    return host;
}
void
SWGActivityUserResource::setHost(bool host) {
    this->host = host;
}

qint64
SWGActivityUserResource::getId() {
    return id;
}
void
SWGActivityUserResource::setId(qint64 id) {
    this->id = id;
}

qint64
SWGActivityUserResource::getJoinedDate() {
    return joined_date;
}
void
SWGActivityUserResource::setJoinedDate(qint64 joined_date) {
    this->joined_date = joined_date;
}

qint64
SWGActivityUserResource::getLeftDate() {
    return left_date;
}
void
SWGActivityUserResource::setLeftDate(qint64 left_date) {
    this->left_date = left_date;
}

SWGMetricResource*
SWGActivityUserResource::getMetric() {
    return metric;
}
void
SWGActivityUserResource::setMetric(SWGMetricResource* metric) {
    this->metric = metric;
}

QString*
SWGActivityUserResource::getStatus() {
    return status;
}
void
SWGActivityUserResource::setStatus(QString* status) {
    this->status = status;
}

SWGSimpleUserResource*
SWGActivityUserResource::getUser() {
    return user;
}
void
SWGActivityUserResource::setUser(SWGSimpleUserResource* user) {
    this->user = user;
}



} /* namespace Swagger */

