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


#include "SWGCart.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGCart::SWGCart(QString* json) {
    init();
    this->fromJson(*json);
}

SWGCart::SWGCart() {
    init();
}

SWGCart::~SWGCart() {
    this->cleanup();
}

void
SWGCart::init() {
    available_shipping_options = new QList<SWGCartShippingOption*>();
    country_tax = 0.0;
    coupons = new QList<SWGCouponDefinition*>();
    created = 0L;
    currency_code = new QString("");
    discount_total = 0.0;
    error_code = 0;
    error_message = new QString("");
    grand_total = 0.0;
    id = new QString("");
    invoice_id = 0.0;
    items = new QList<SWGCartLineItem*>();
    owner = 0;
    selected_shipping_options = new QList<SWGCartShippingOption*>();
    shippable = false;
    shipping_address = new SWGCartShippingAddressRequest();
    shipping_cost = 0.0;
    state_tax = 0.0;
    status = new QString("");
    subtotal = 0.0;
    updated = 0L;
}

void
SWGCart::cleanup() {
    
    if(available_shipping_options != nullptr) {
        QList<SWGCartShippingOption*>* arr = available_shipping_options;
        foreach(SWGCartShippingOption* o, *arr) {
            delete o;
        }
        delete available_shipping_options;
    }


    if(coupons != nullptr) {
        QList<SWGCouponDefinition*>* arr = coupons;
        foreach(SWGCouponDefinition* o, *arr) {
            delete o;
        }
        delete coupons;
    }


    if(currency_code != nullptr) {
        delete currency_code;
    }



    if(error_message != nullptr) {
        delete error_message;
    }


    if(id != nullptr) {
        delete id;
    }


    if(items != nullptr) {
        QList<SWGCartLineItem*>* arr = items;
        foreach(SWGCartLineItem* o, *arr) {
            delete o;
        }
        delete items;
    }


    if(selected_shipping_options != nullptr) {
        QList<SWGCartShippingOption*>* arr = selected_shipping_options;
        foreach(SWGCartShippingOption* o, *arr) {
            delete o;
        }
        delete selected_shipping_options;
    }


    if(shipping_address != nullptr) {
        delete shipping_address;
    }



    if(status != nullptr) {
        delete status;
    }


}

SWGCart*
SWGCart::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGCart::fromJsonObject(QJsonObject &pJson) {
    
    ::Swagger::setValue(&available_shipping_options, pJson["available_shipping_options"], "QList", "SWGCartShippingOption");
    
    ::Swagger::setValue(&country_tax, pJson["country_tax"], "double", "");
    
    ::Swagger::setValue(&coupons, pJson["coupons"], "QList", "SWGCouponDefinition");
    
    ::Swagger::setValue(&created, pJson["created"], "qint64", "");
    ::Swagger::setValue(&currency_code, pJson["currency_code"], "QString", "QString");
    ::Swagger::setValue(&discount_total, pJson["discount_total"], "double", "");
    ::Swagger::setValue(&error_code, pJson["error_code"], "qint32", "");
    ::Swagger::setValue(&error_message, pJson["error_message"], "QString", "QString");
    ::Swagger::setValue(&grand_total, pJson["grand_total"], "double", "");
    ::Swagger::setValue(&id, pJson["id"], "QString", "QString");
    ::Swagger::setValue(&invoice_id, pJson["invoice_id"], "double", "");
    
    ::Swagger::setValue(&items, pJson["items"], "QList", "SWGCartLineItem");
    
    ::Swagger::setValue(&owner, pJson["owner"], "qint32", "");
    
    ::Swagger::setValue(&selected_shipping_options, pJson["selected_shipping_options"], "QList", "SWGCartShippingOption");
    
    ::Swagger::setValue(&shippable, pJson["shippable"], "bool", "");
    ::Swagger::setValue(&shipping_address, pJson["shipping_address"], "SWGCartShippingAddressRequest", "SWGCartShippingAddressRequest");
    ::Swagger::setValue(&shipping_cost, pJson["shipping_cost"], "double", "");
    ::Swagger::setValue(&state_tax, pJson["state_tax"], "double", "");
    ::Swagger::setValue(&status, pJson["status"], "QString", "QString");
    ::Swagger::setValue(&subtotal, pJson["subtotal"], "double", "");
    ::Swagger::setValue(&updated, pJson["updated"], "qint64", "");
}

QString
SWGCart::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGCart::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    QJsonArray available_shipping_optionsJsonArray;
    toJsonArray((QList<void*>*)available_shipping_options, &available_shipping_optionsJsonArray, "available_shipping_options", "SWGCartShippingOption");
    obj->insert("available_shipping_options", available_shipping_optionsJsonArray);

    obj->insert("country_tax", QJsonValue(country_tax));

    QJsonArray couponsJsonArray;
    toJsonArray((QList<void*>*)coupons, &couponsJsonArray, "coupons", "SWGCouponDefinition");
    obj->insert("coupons", couponsJsonArray);

    obj->insert("created", QJsonValue(created));

    toJsonValue(QString("currency_code"), currency_code, obj, QString("QString"));

    obj->insert("discount_total", QJsonValue(discount_total));

    obj->insert("error_code", QJsonValue(error_code));

    toJsonValue(QString("error_message"), error_message, obj, QString("QString"));

    obj->insert("grand_total", QJsonValue(grand_total));

    toJsonValue(QString("id"), id, obj, QString("QString"));

    obj->insert("invoice_id", QJsonValue(invoice_id));

    QJsonArray itemsJsonArray;
    toJsonArray((QList<void*>*)items, &itemsJsonArray, "items", "SWGCartLineItem");
    obj->insert("items", itemsJsonArray);

    obj->insert("owner", QJsonValue(owner));

    QJsonArray selected_shipping_optionsJsonArray;
    toJsonArray((QList<void*>*)selected_shipping_options, &selected_shipping_optionsJsonArray, "selected_shipping_options", "SWGCartShippingOption");
    obj->insert("selected_shipping_options", selected_shipping_optionsJsonArray);

    obj->insert("shippable", QJsonValue(shippable));

    toJsonValue(QString("shipping_address"), shipping_address, obj, QString("SWGCartShippingAddressRequest"));

    obj->insert("shipping_cost", QJsonValue(shipping_cost));

    obj->insert("state_tax", QJsonValue(state_tax));

    toJsonValue(QString("status"), status, obj, QString("QString"));

    obj->insert("subtotal", QJsonValue(subtotal));

    obj->insert("updated", QJsonValue(updated));

    return obj;
}

QList<SWGCartShippingOption*>*
SWGCart::getAvailableShippingOptions() {
    return available_shipping_options;
}
void
SWGCart::setAvailableShippingOptions(QList<SWGCartShippingOption*>* available_shipping_options) {
    this->available_shipping_options = available_shipping_options;
}

double
SWGCart::getCountryTax() {
    return country_tax;
}
void
SWGCart::setCountryTax(double country_tax) {
    this->country_tax = country_tax;
}

QList<SWGCouponDefinition*>*
SWGCart::getCoupons() {
    return coupons;
}
void
SWGCart::setCoupons(QList<SWGCouponDefinition*>* coupons) {
    this->coupons = coupons;
}

qint64
SWGCart::getCreated() {
    return created;
}
void
SWGCart::setCreated(qint64 created) {
    this->created = created;
}

QString*
SWGCart::getCurrencyCode() {
    return currency_code;
}
void
SWGCart::setCurrencyCode(QString* currency_code) {
    this->currency_code = currency_code;
}

double
SWGCart::getDiscountTotal() {
    return discount_total;
}
void
SWGCart::setDiscountTotal(double discount_total) {
    this->discount_total = discount_total;
}

qint32
SWGCart::getErrorCode() {
    return error_code;
}
void
SWGCart::setErrorCode(qint32 error_code) {
    this->error_code = error_code;
}

QString*
SWGCart::getErrorMessage() {
    return error_message;
}
void
SWGCart::setErrorMessage(QString* error_message) {
    this->error_message = error_message;
}

double
SWGCart::getGrandTotal() {
    return grand_total;
}
void
SWGCart::setGrandTotal(double grand_total) {
    this->grand_total = grand_total;
}

QString*
SWGCart::getId() {
    return id;
}
void
SWGCart::setId(QString* id) {
    this->id = id;
}

double
SWGCart::getInvoiceId() {
    return invoice_id;
}
void
SWGCart::setInvoiceId(double invoice_id) {
    this->invoice_id = invoice_id;
}

QList<SWGCartLineItem*>*
SWGCart::getItems() {
    return items;
}
void
SWGCart::setItems(QList<SWGCartLineItem*>* items) {
    this->items = items;
}

qint32
SWGCart::getOwner() {
    return owner;
}
void
SWGCart::setOwner(qint32 owner) {
    this->owner = owner;
}

QList<SWGCartShippingOption*>*
SWGCart::getSelectedShippingOptions() {
    return selected_shipping_options;
}
void
SWGCart::setSelectedShippingOptions(QList<SWGCartShippingOption*>* selected_shipping_options) {
    this->selected_shipping_options = selected_shipping_options;
}

bool
SWGCart::getShippable() {
    return shippable;
}
void
SWGCart::setShippable(bool shippable) {
    this->shippable = shippable;
}

SWGCartShippingAddressRequest*
SWGCart::getShippingAddress() {
    return shipping_address;
}
void
SWGCart::setShippingAddress(SWGCartShippingAddressRequest* shipping_address) {
    this->shipping_address = shipping_address;
}

double
SWGCart::getShippingCost() {
    return shipping_cost;
}
void
SWGCart::setShippingCost(double shipping_cost) {
    this->shipping_cost = shipping_cost;
}

double
SWGCart::getStateTax() {
    return state_tax;
}
void
SWGCart::setStateTax(double state_tax) {
    this->state_tax = state_tax;
}

QString*
SWGCart::getStatus() {
    return status;
}
void
SWGCart::setStatus(QString* status) {
    this->status = status;
}

double
SWGCart::getSubtotal() {
    return subtotal;
}
void
SWGCart::setSubtotal(double subtotal) {
    this->subtotal = subtotal;
}

qint64
SWGCart::getUpdated() {
    return updated;
}
void
SWGCart::setUpdated(qint64 updated) {
    this->updated = updated;
}



} /* namespace Swagger */
