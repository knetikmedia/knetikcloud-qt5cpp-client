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


#include "SWGInvoiceItemResource.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGInvoiceItemResource::SWGInvoiceItemResource(QString* json) {
    init();
    this->fromJson(*json);
}

SWGInvoiceItemResource::SWGInvoiceItemResource() {
    init();
}

SWGInvoiceItemResource::~SWGInvoiceItemResource() {
    this->cleanup();
}

void
SWGInvoiceItemResource::init() {
    affiliate_id = 0;
    bundle_sku = new QString("");
    current_fulfillment_status = new QString("");
    id = 0;
    invoice_id = 0;
    item_id = 0;
    item_name = new QString("");
    original_total_price = 0.0;
    original_unit_price = 0.0;
    qty = 0;
    sale_name = new QString("");
    sku = new QString("");
    sku_description = new QString("");
    system_price = 0.0;
    total_price = 0.0;
    type_hint = new QString("");
    unit_price = 0.0;
}

void
SWGInvoiceItemResource::cleanup() {
    

    if(bundle_sku != nullptr) {
        delete bundle_sku;
    }

    if(current_fulfillment_status != nullptr) {
        delete current_fulfillment_status;
    }




    if(item_name != nullptr) {
        delete item_name;
    }




    if(sale_name != nullptr) {
        delete sale_name;
    }

    if(sku != nullptr) {
        delete sku;
    }

    if(sku_description != nullptr) {
        delete sku_description;
    }



    if(type_hint != nullptr) {
        delete type_hint;
    }

}

SWGInvoiceItemResource*
SWGInvoiceItemResource::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGInvoiceItemResource::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&affiliate_id, pJson["affiliate_id"], "qint32", "");
    ::Swagger::setValue(&bundle_sku, pJson["bundle_sku"], "QString", "QString");
    ::Swagger::setValue(&current_fulfillment_status, pJson["current_fulfillment_status"], "QString", "QString");
    ::Swagger::setValue(&id, pJson["id"], "qint32", "");
    ::Swagger::setValue(&invoice_id, pJson["invoice_id"], "qint32", "");
    ::Swagger::setValue(&item_id, pJson["item_id"], "qint32", "");
    ::Swagger::setValue(&item_name, pJson["item_name"], "QString", "QString");
    ::Swagger::setValue(&original_total_price, pJson["original_total_price"], "double", "");
    ::Swagger::setValue(&original_unit_price, pJson["original_unit_price"], "double", "");
    ::Swagger::setValue(&qty, pJson["qty"], "qint32", "");
    ::Swagger::setValue(&sale_name, pJson["sale_name"], "QString", "QString");
    ::Swagger::setValue(&sku, pJson["sku"], "QString", "QString");
    ::Swagger::setValue(&sku_description, pJson["sku_description"], "QString", "QString");
    ::Swagger::setValue(&system_price, pJson["system_price"], "double", "");
    ::Swagger::setValue(&total_price, pJson["total_price"], "double", "");
    ::Swagger::setValue(&type_hint, pJson["type_hint"], "QString", "QString");
    ::Swagger::setValue(&unit_price, pJson["unit_price"], "double", "");
}

QString
SWGInvoiceItemResource::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGInvoiceItemResource::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    obj->insert("affiliate_id", QJsonValue(affiliate_id));

    toJsonValue(QString("bundle_sku"), bundle_sku, obj, QString("QString"));

    toJsonValue(QString("current_fulfillment_status"), current_fulfillment_status, obj, QString("QString"));

    obj->insert("id", QJsonValue(id));

    obj->insert("invoice_id", QJsonValue(invoice_id));

    obj->insert("item_id", QJsonValue(item_id));

    toJsonValue(QString("item_name"), item_name, obj, QString("QString"));

    obj->insert("original_total_price", QJsonValue(original_total_price));

    obj->insert("original_unit_price", QJsonValue(original_unit_price));

    obj->insert("qty", QJsonValue(qty));

    toJsonValue(QString("sale_name"), sale_name, obj, QString("QString"));

    toJsonValue(QString("sku"), sku, obj, QString("QString"));

    toJsonValue(QString("sku_description"), sku_description, obj, QString("QString"));

    obj->insert("system_price", QJsonValue(system_price));

    obj->insert("total_price", QJsonValue(total_price));

    toJsonValue(QString("type_hint"), type_hint, obj, QString("QString"));

    obj->insert("unit_price", QJsonValue(unit_price));

    return obj;
}

qint32
SWGInvoiceItemResource::getAffiliateId() {
    return affiliate_id;
}
void
SWGInvoiceItemResource::setAffiliateId(qint32 affiliate_id) {
    this->affiliate_id = affiliate_id;
}

QString*
SWGInvoiceItemResource::getBundleSku() {
    return bundle_sku;
}
void
SWGInvoiceItemResource::setBundleSku(QString* bundle_sku) {
    this->bundle_sku = bundle_sku;
}

QString*
SWGInvoiceItemResource::getCurrentFulfillmentStatus() {
    return current_fulfillment_status;
}
void
SWGInvoiceItemResource::setCurrentFulfillmentStatus(QString* current_fulfillment_status) {
    this->current_fulfillment_status = current_fulfillment_status;
}

qint32
SWGInvoiceItemResource::getId() {
    return id;
}
void
SWGInvoiceItemResource::setId(qint32 id) {
    this->id = id;
}

qint32
SWGInvoiceItemResource::getInvoiceId() {
    return invoice_id;
}
void
SWGInvoiceItemResource::setInvoiceId(qint32 invoice_id) {
    this->invoice_id = invoice_id;
}

qint32
SWGInvoiceItemResource::getItemId() {
    return item_id;
}
void
SWGInvoiceItemResource::setItemId(qint32 item_id) {
    this->item_id = item_id;
}

QString*
SWGInvoiceItemResource::getItemName() {
    return item_name;
}
void
SWGInvoiceItemResource::setItemName(QString* item_name) {
    this->item_name = item_name;
}

double
SWGInvoiceItemResource::getOriginalTotalPrice() {
    return original_total_price;
}
void
SWGInvoiceItemResource::setOriginalTotalPrice(double original_total_price) {
    this->original_total_price = original_total_price;
}

double
SWGInvoiceItemResource::getOriginalUnitPrice() {
    return original_unit_price;
}
void
SWGInvoiceItemResource::setOriginalUnitPrice(double original_unit_price) {
    this->original_unit_price = original_unit_price;
}

qint32
SWGInvoiceItemResource::getQty() {
    return qty;
}
void
SWGInvoiceItemResource::setQty(qint32 qty) {
    this->qty = qty;
}

QString*
SWGInvoiceItemResource::getSaleName() {
    return sale_name;
}
void
SWGInvoiceItemResource::setSaleName(QString* sale_name) {
    this->sale_name = sale_name;
}

QString*
SWGInvoiceItemResource::getSku() {
    return sku;
}
void
SWGInvoiceItemResource::setSku(QString* sku) {
    this->sku = sku;
}

QString*
SWGInvoiceItemResource::getSkuDescription() {
    return sku_description;
}
void
SWGInvoiceItemResource::setSkuDescription(QString* sku_description) {
    this->sku_description = sku_description;
}

double
SWGInvoiceItemResource::getSystemPrice() {
    return system_price;
}
void
SWGInvoiceItemResource::setSystemPrice(double system_price) {
    this->system_price = system_price;
}

double
SWGInvoiceItemResource::getTotalPrice() {
    return total_price;
}
void
SWGInvoiceItemResource::setTotalPrice(double total_price) {
    this->total_price = total_price;
}

QString*
SWGInvoiceItemResource::getTypeHint() {
    return type_hint;
}
void
SWGInvoiceItemResource::setTypeHint(QString* type_hint) {
    this->type_hint = type_hint;
}

double
SWGInvoiceItemResource::getUnitPrice() {
    return unit_price;
}
void
SWGInvoiceItemResource::setUnitPrice(double unit_price) {
    this->unit_price = unit_price;
}



} /* namespace Swagger */

