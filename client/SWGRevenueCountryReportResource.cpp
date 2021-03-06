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


#include "SWGRevenueCountryReportResource.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGRevenueCountryReportResource::SWGRevenueCountryReportResource(QString* json) {
    init();
    this->fromJson(*json);
}

SWGRevenueCountryReportResource::SWGRevenueCountryReportResource() {
    init();
}

SWGRevenueCountryReportResource::~SWGRevenueCountryReportResource() {
    this->cleanup();
}

void
SWGRevenueCountryReportResource::init() {
    country = new QString("");
    revenue = 0.0;
    volume = 0L;
}

void
SWGRevenueCountryReportResource::cleanup() {
    
    if(country != nullptr) {
        delete country;
    }


}

SWGRevenueCountryReportResource*
SWGRevenueCountryReportResource::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGRevenueCountryReportResource::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&country, pJson["country"], "QString", "QString");
    ::Swagger::setValue(&revenue, pJson["revenue"], "double", "");
    ::Swagger::setValue(&volume, pJson["volume"], "qint64", "");
}

QString
SWGRevenueCountryReportResource::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGRevenueCountryReportResource::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    toJsonValue(QString("country"), country, obj, QString("QString"));

    obj->insert("revenue", QJsonValue(revenue));

    obj->insert("volume", QJsonValue(volume));

    return obj;
}

QString*
SWGRevenueCountryReportResource::getCountry() {
    return country;
}
void
SWGRevenueCountryReportResource::setCountry(QString* country) {
    this->country = country;
}

double
SWGRevenueCountryReportResource::getRevenue() {
    return revenue;
}
void
SWGRevenueCountryReportResource::setRevenue(double revenue) {
    this->revenue = revenue;
}

qint64
SWGRevenueCountryReportResource::getVolume() {
    return volume;
}
void
SWGRevenueCountryReportResource::setVolume(qint64 volume) {
    this->volume = volume;
}



} /* namespace Swagger */

