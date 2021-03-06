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


#include "SWGCollection«Country».h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGCollection«Country»::SWGCollection«Country»(QString* json) {
    init();
    this->fromJson(*json);
}

SWGCollection«Country»::SWGCollection«Country»() {
    init();
}

SWGCollection«Country»::~SWGCollection«Country»() {
    this->cleanup();
}

void
SWGCollection«Country»::init() {
}

void
SWGCollection«Country»::cleanup() {
    }

SWGCollection«Country»*
SWGCollection«Country»::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGCollection«Country»::fromJsonObject(QJsonObject &pJson) {
}

QString
SWGCollection«Country»::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGCollection«Country»::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    return obj;
}



} /* namespace Swagger */

