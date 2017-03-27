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


#include "SWGBundledSku.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGBundledSku::SWGBundledSku(QString* json) {
    init();
    this->fromJson(*json);
}

SWGBundledSku::SWGBundledSku() {
    init();
}

SWGBundledSku::~SWGBundledSku() {
    this->cleanup();
}

void
SWGBundledSku::init() {
    price_override = 0.0;
    quantity = 0;
    sku = new QString("");
}

void
SWGBundledSku::cleanup() {
    


    if(sku != nullptr) {
        delete sku;
    }
}

SWGBundledSku*
SWGBundledSku::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGBundledSku::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&price_override, pJson["price_override"], "double", "");
    ::Swagger::setValue(&quantity, pJson["quantity"], "qint32", "");
    ::Swagger::setValue(&sku, pJson["sku"], "QString", "QString");
}

QString
SWGBundledSku::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGBundledSku::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    obj->insert("price_override", QJsonValue(price_override));

    obj->insert("quantity", QJsonValue(quantity));

    toJsonValue(QString("sku"), sku, obj, QString("QString"));

    return obj;
}

double
SWGBundledSku::getPriceOverride() {
    return price_override;
}
void
SWGBundledSku::setPriceOverride(double price_override) {
    this->price_override = price_override;
}

qint32
SWGBundledSku::getQuantity() {
    return quantity;
}
void
SWGBundledSku::setQuantity(qint32 quantity) {
    this->quantity = quantity;
}

QString*
SWGBundledSku::getSku() {
    return sku;
}
void
SWGBundledSku::setSku(QString* sku) {
    this->sku = sku;
}



} /* namespace Swagger */
