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


#include "SWGSimpleReferenceResource«string».h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGSimpleReferenceResource«string»::SWGSimpleReferenceResource«string»(QString* json) {
    init();
    this->fromJson(*json);
}

SWGSimpleReferenceResource«string»::SWGSimpleReferenceResource«string»() {
    init();
}

SWGSimpleReferenceResource«string»::~SWGSimpleReferenceResource«string»() {
    this->cleanup();
}

void
SWGSimpleReferenceResource«string»::init() {
    id = new QString("");
    name = new QString("");
}

void
SWGSimpleReferenceResource«string»::cleanup() {
    
    if(id != nullptr) {
        delete id;
    }

    if(name != nullptr) {
        delete name;
    }
}

SWGSimpleReferenceResource«string»*
SWGSimpleReferenceResource«string»::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGSimpleReferenceResource«string»::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&id, pJson["id"], "QString", "QString");
    ::Swagger::setValue(&name, pJson["name"], "QString", "QString");
}

QString
SWGSimpleReferenceResource«string»::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGSimpleReferenceResource«string»::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    toJsonValue(QString("id"), id, obj, QString("QString"));

    toJsonValue(QString("name"), name, obj, QString("QString"));

    return obj;
}

QString*
SWGSimpleReferenceResource«string»::getId() {
    return id;
}
void
SWGSimpleReferenceResource«string»::setId(QString* id) {
    this->id = id;
}

QString*
SWGSimpleReferenceResource«string»::getName() {
    return name;
}
void
SWGSimpleReferenceResource«string»::setName(QString* name) {
    this->name = name;
}



} /* namespace Swagger */

