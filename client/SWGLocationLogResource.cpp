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


#include "SWGLocationLogResource.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGLocationLogResource::SWGLocationLogResource(QString* json) {
    init();
    this->fromJson(*json);
}

SWGLocationLogResource::SWGLocationLogResource() {
    init();
}

SWGLocationLogResource::~SWGLocationLogResource() {
    this->cleanup();
}

void
SWGLocationLogResource::init() {
    country = new QString("");
    ip = new QString("");
    time = 0L;
}

void
SWGLocationLogResource::cleanup() {
    
    if(country != nullptr) {
        delete country;
    }

    if(ip != nullptr) {
        delete ip;
    }

}

SWGLocationLogResource*
SWGLocationLogResource::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGLocationLogResource::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&country, pJson["country"], "QString", "QString");
    ::Swagger::setValue(&ip, pJson["ip"], "QString", "QString");
    ::Swagger::setValue(&time, pJson["time"], "qint64", "");
}

QString
SWGLocationLogResource::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGLocationLogResource::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    toJsonValue(QString("country"), country, obj, QString("QString"));

    toJsonValue(QString("ip"), ip, obj, QString("QString"));

    obj->insert("time", QJsonValue(time));

    return obj;
}

QString*
SWGLocationLogResource::getCountry() {
    return country;
}
void
SWGLocationLogResource::setCountry(QString* country) {
    this->country = country;
}

QString*
SWGLocationLogResource::getIp() {
    return ip;
}
void
SWGLocationLogResource::setIp(QString* ip) {
    this->ip = ip;
}

qint64
SWGLocationLogResource::getTime() {
    return time;
}
void
SWGLocationLogResource::setTime(qint64 time) {
    this->time = time;
}



} /* namespace Swagger */

