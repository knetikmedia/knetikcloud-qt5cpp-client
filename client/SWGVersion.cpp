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


#include "SWGVersion.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGVersion::SWGVersion(QString* json) {
    init();
    this->fromJson(*json);
}

SWGVersion::SWGVersion() {
    init();
}

SWGVersion::~SWGVersion() {
    this->cleanup();
}

void
SWGVersion::init() {
    version = new QString("");
}

void
SWGVersion::cleanup() {
    
    if(version != nullptr) {
        delete version;
    }
}

SWGVersion*
SWGVersion::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGVersion::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&version, pJson["version"], "QString", "QString");
}

QString
SWGVersion::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGVersion::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    toJsonValue(QString("version"), version, obj, QString("QString"));

    return obj;
}

QString*
SWGVersion::getVersion() {
    return version;
}
void
SWGVersion::setVersion(QString* version) {
    this->version = version;
}



} /* namespace Swagger */
