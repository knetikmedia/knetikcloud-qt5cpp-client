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


#include "SWGAggregateInvoiceReportResource.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGAggregateInvoiceReportResource::SWGAggregateInvoiceReportResource(QString* json) {
    init();
    this->fromJson(*json);
}

SWGAggregateInvoiceReportResource::SWGAggregateInvoiceReportResource() {
    init();
}

SWGAggregateInvoiceReportResource::~SWGAggregateInvoiceReportResource() {
    this->cleanup();
}

void
SWGAggregateInvoiceReportResource::init() {
    count = 0L;
    date = new QString("");
    revenue = 0.0;
    user_count = 0L;
}

void
SWGAggregateInvoiceReportResource::cleanup() {
    

    if(date != nullptr) {
        delete date;
    }


}

SWGAggregateInvoiceReportResource*
SWGAggregateInvoiceReportResource::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGAggregateInvoiceReportResource::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&count, pJson["count"], "qint64", "");
    ::Swagger::setValue(&date, pJson["date"], "QString", "QString");
    ::Swagger::setValue(&revenue, pJson["revenue"], "double", "");
    ::Swagger::setValue(&user_count, pJson["user_count"], "qint64", "");
}

QString
SWGAggregateInvoiceReportResource::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGAggregateInvoiceReportResource::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    obj->insert("count", QJsonValue(count));

    toJsonValue(QString("date"), date, obj, QString("QString"));

    obj->insert("revenue", QJsonValue(revenue));

    obj->insert("user_count", QJsonValue(user_count));

    return obj;
}

qint64
SWGAggregateInvoiceReportResource::getCount() {
    return count;
}
void
SWGAggregateInvoiceReportResource::setCount(qint64 count) {
    this->count = count;
}

QString*
SWGAggregateInvoiceReportResource::getDate() {
    return date;
}
void
SWGAggregateInvoiceReportResource::setDate(QString* date) {
    this->date = date;
}

double
SWGAggregateInvoiceReportResource::getRevenue() {
    return revenue;
}
void
SWGAggregateInvoiceReportResource::setRevenue(double revenue) {
    this->revenue = revenue;
}

qint64
SWGAggregateInvoiceReportResource::getUserCount() {
    return user_count;
}
void
SWGAggregateInvoiceReportResource::setUserCount(qint64 user_count) {
    this->user_count = user_count;
}



} /* namespace Swagger */
