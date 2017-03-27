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


#include "SWGCreateBillingAgreementRequest.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGCreateBillingAgreementRequest::SWGCreateBillingAgreementRequest(QString* json) {
    init();
    this->fromJson(*json);
}

SWGCreateBillingAgreementRequest::SWGCreateBillingAgreementRequest() {
    init();
}

SWGCreateBillingAgreementRequest::~SWGCreateBillingAgreementRequest() {
    this->cleanup();
}

void
SWGCreateBillingAgreementRequest::init() {
    cancel_url = new QString("");
    return_url = new QString("");
    user_id = 0;
}

void
SWGCreateBillingAgreementRequest::cleanup() {
    
    if(cancel_url != nullptr) {
        delete cancel_url;
    }

    if(return_url != nullptr) {
        delete return_url;
    }

}

SWGCreateBillingAgreementRequest*
SWGCreateBillingAgreementRequest::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGCreateBillingAgreementRequest::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&cancel_url, pJson["cancel_url"], "QString", "QString");
    ::Swagger::setValue(&return_url, pJson["return_url"], "QString", "QString");
    ::Swagger::setValue(&user_id, pJson["user_id"], "qint32", "");
}

QString
SWGCreateBillingAgreementRequest::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGCreateBillingAgreementRequest::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    toJsonValue(QString("cancel_url"), cancel_url, obj, QString("QString"));

    toJsonValue(QString("return_url"), return_url, obj, QString("QString"));

    obj->insert("user_id", QJsonValue(user_id));

    return obj;
}

QString*
SWGCreateBillingAgreementRequest::getCancelUrl() {
    return cancel_url;
}
void
SWGCreateBillingAgreementRequest::setCancelUrl(QString* cancel_url) {
    this->cancel_url = cancel_url;
}

QString*
SWGCreateBillingAgreementRequest::getReturnUrl() {
    return return_url;
}
void
SWGCreateBillingAgreementRequest::setReturnUrl(QString* return_url) {
    this->return_url = return_url;
}

qint32
SWGCreateBillingAgreementRequest::getUserId() {
    return user_id;
}
void
SWGCreateBillingAgreementRequest::setUserId(qint32 user_id) {
    this->user_id = user_id;
}



} /* namespace Swagger */
