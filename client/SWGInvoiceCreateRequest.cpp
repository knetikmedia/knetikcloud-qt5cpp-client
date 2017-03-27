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


#include "SWGInvoiceCreateRequest.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGInvoiceCreateRequest::SWGInvoiceCreateRequest(QString* json) {
    init();
    this->fromJson(*json);
}

SWGInvoiceCreateRequest::SWGInvoiceCreateRequest() {
    init();
}

SWGInvoiceCreateRequest::~SWGInvoiceCreateRequest() {
    this->cleanup();
}

void
SWGInvoiceCreateRequest::init() {
    cart_guid = new QString("");
}

void
SWGInvoiceCreateRequest::cleanup() {
    
    if(cart_guid != nullptr) {
        delete cart_guid;
    }
}

SWGInvoiceCreateRequest*
SWGInvoiceCreateRequest::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGInvoiceCreateRequest::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&cart_guid, pJson["cart_guid"], "QString", "QString");
}

QString
SWGInvoiceCreateRequest::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGInvoiceCreateRequest::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    toJsonValue(QString("cart_guid"), cart_guid, obj, QString("QString"));

    return obj;
}

QString*
SWGInvoiceCreateRequest::getCartGuid() {
    return cart_guid;
}
void
SWGInvoiceCreateRequest::setCartGuid(QString* cart_guid) {
    this->cart_guid = cart_guid;
}



} /* namespace Swagger */

