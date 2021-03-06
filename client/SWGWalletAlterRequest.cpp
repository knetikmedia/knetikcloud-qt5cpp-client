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


#include "SWGWalletAlterRequest.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGWalletAlterRequest::SWGWalletAlterRequest(QString* json) {
    init();
    this->fromJson(*json);
}

SWGWalletAlterRequest::SWGWalletAlterRequest() {
    init();
}

SWGWalletAlterRequest::~SWGWalletAlterRequest() {
    this->cleanup();
}

void
SWGWalletAlterRequest::init() {
    delta = 0.0;
    invoice_id = 0;
    reason = new QString("");
    type = new QString("");
}

void
SWGWalletAlterRequest::cleanup() {
    


    if(reason != nullptr) {
        delete reason;
    }

    if(type != nullptr) {
        delete type;
    }
}

SWGWalletAlterRequest*
SWGWalletAlterRequest::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGWalletAlterRequest::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&delta, pJson["delta"], "double", "");
    ::Swagger::setValue(&invoice_id, pJson["invoice_id"], "qint32", "");
    ::Swagger::setValue(&reason, pJson["reason"], "QString", "QString");
    ::Swagger::setValue(&type, pJson["type"], "QString", "QString");
}

QString
SWGWalletAlterRequest::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGWalletAlterRequest::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    obj->insert("delta", QJsonValue(delta));

    obj->insert("invoice_id", QJsonValue(invoice_id));

    toJsonValue(QString("reason"), reason, obj, QString("QString"));

    toJsonValue(QString("type"), type, obj, QString("QString"));

    return obj;
}

double
SWGWalletAlterRequest::getDelta() {
    return delta;
}
void
SWGWalletAlterRequest::setDelta(double delta) {
    this->delta = delta;
}

qint32
SWGWalletAlterRequest::getInvoiceId() {
    return invoice_id;
}
void
SWGWalletAlterRequest::setInvoiceId(qint32 invoice_id) {
    this->invoice_id = invoice_id;
}

QString*
SWGWalletAlterRequest::getReason() {
    return reason;
}
void
SWGWalletAlterRequest::setReason(QString* reason) {
    this->reason = reason;
}

QString*
SWGWalletAlterRequest::getType() {
    return type;
}
void
SWGWalletAlterRequest::setType(QString* type) {
    this->type = type;
}



} /* namespace Swagger */

