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


#include "SWGRawSMSResource.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGRawSMSResource::SWGRawSMSResource(QString* json) {
    init();
    this->fromJson(*json);
}

SWGRawSMSResource::SWGRawSMSResource() {
    init();
}

SWGRawSMSResource::~SWGRawSMSResource() {
    this->cleanup();
}

void
SWGRawSMSResource::init() {
    from = new QString("");
    recipients = new QList<qint32>();
    text = new QString("");
}

void
SWGRawSMSResource::cleanup() {
    
    if(from != nullptr) {
        delete from;
    }


    if(text != nullptr) {
        delete text;
    }
}

SWGRawSMSResource*
SWGRawSMSResource::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGRawSMSResource::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&from, pJson["from"], "QString", "QString");
    
    
    ::Swagger::setValue(&recipients, pJson["recipients"], "QList", "qint32");
    ::Swagger::setValue(&text, pJson["text"], "QString", "QString");
}

QString
SWGRawSMSResource::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGRawSMSResource::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    toJsonValue(QString("from"), from, obj, QString("QString"));

    QJsonArray recipientsJsonArray;
    toJsonArray((QList<void*>*)recipients, &recipientsJsonArray, "recipients", "qint32");
    obj->insert("recipients", recipientsJsonArray);

    toJsonValue(QString("text"), text, obj, QString("QString"));

    return obj;
}

QString*
SWGRawSMSResource::getFrom() {
    return from;
}
void
SWGRawSMSResource::setFrom(QString* from) {
    this->from = from;
}

QList<qint32>*
SWGRawSMSResource::getRecipients() {
    return recipients;
}
void
SWGRawSMSResource::setRecipients(QList<qint32>* recipients) {
    this->recipients = recipients;
}

QString*
SWGRawSMSResource::getText() {
    return text;
}
void
SWGRawSMSResource::setText(QString* text) {
    this->text = text;
}



} /* namespace Swagger */

