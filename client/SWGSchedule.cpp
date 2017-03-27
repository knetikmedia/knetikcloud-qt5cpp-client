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


#include "SWGSchedule.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGSchedule::SWGSchedule(QString* json) {
    init();
    this->fromJson(*json);
}

SWGSchedule::SWGSchedule() {
    init();
}

SWGSchedule::~SWGSchedule() {
    this->cleanup();
}

void
SWGSchedule::init() {
    duration = 0;
    duration_unit = new QString("");
    repeat = new QString("");
}

void
SWGSchedule::cleanup() {
    

    if(duration_unit != nullptr) {
        delete duration_unit;
    }

    if(repeat != nullptr) {
        delete repeat;
    }
}

SWGSchedule*
SWGSchedule::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGSchedule::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&duration, pJson["duration"], "qint32", "");
    ::Swagger::setValue(&duration_unit, pJson["duration_unit"], "QString", "QString");
    ::Swagger::setValue(&repeat, pJson["repeat"], "QString", "QString");
}

QString
SWGSchedule::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGSchedule::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    obj->insert("duration", QJsonValue(duration));

    toJsonValue(QString("duration_unit"), duration_unit, obj, QString("QString"));

    toJsonValue(QString("repeat"), repeat, obj, QString("QString"));

    return obj;
}

qint32
SWGSchedule::getDuration() {
    return duration;
}
void
SWGSchedule::setDuration(qint32 duration) {
    this->duration = duration;
}

QString*
SWGSchedule::getDurationUnit() {
    return duration_unit;
}
void
SWGSchedule::setDurationUnit(QString* duration_unit) {
    this->duration_unit = duration_unit;
}

QString*
SWGSchedule::getRepeat() {
    return repeat;
}
void
SWGSchedule::setRepeat(QString* repeat) {
    this->repeat = repeat;
}



} /* namespace Swagger */

