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


#include "SWGDispositionCount.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGDispositionCount::SWGDispositionCount(QString* json) {
    init();
    this->fromJson(*json);
}

SWGDispositionCount::SWGDispositionCount() {
    init();
}

SWGDispositionCount::~SWGDispositionCount() {
    this->cleanup();
}

void
SWGDispositionCount::init() {
    count = 0L;
    name = new QString("");
}

void
SWGDispositionCount::cleanup() {
    

    if(name != nullptr) {
        delete name;
    }
}

SWGDispositionCount*
SWGDispositionCount::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGDispositionCount::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&count, pJson["count"], "qint64", "");
    ::Swagger::setValue(&name, pJson["name"], "QString", "QString");
}

QString
SWGDispositionCount::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGDispositionCount::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    obj->insert("count", QJsonValue(count));

    toJsonValue(QString("name"), name, obj, QString("QString"));

    return obj;
}

qint64
SWGDispositionCount::getCount() {
    return count;
}
void
SWGDispositionCount::setCount(qint64 count) {
    this->count = count;
}

QString*
SWGDispositionCount::getName() {
    return name;
}
void
SWGDispositionCount::setName(QString* name) {
    this->name = name;
}



} /* namespace Swagger */

