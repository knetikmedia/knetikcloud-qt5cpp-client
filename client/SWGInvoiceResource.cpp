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


#include "SWGInvoiceResource.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGInvoiceResource::SWGInvoiceResource(QString* json) {
    init();
    this->fromJson(*json);
}

SWGInvoiceResource::SWGInvoiceResource() {
    init();
}

SWGInvoiceResource::~SWGInvoiceResource() {
    this->cleanup();
}

void
SWGInvoiceResource::init() {
    billing_address1 = new QString("");
    billing_address2 = new QString("");
    billing_city_name = new QString("");
    billing_country_name = new QString("");
    billing_full_name = new QString("");
    billing_postal_code = new QString("");
    billing_state_name = new QString("");
    cart_id = new QString("");
    created_date = 0L;
    currency = new QString("");
    current_fulfillment_status = new QString("");
    current_payment_status = new QString("");
    discount = 0.0;
    email = new QString("");
    external_ref = new QString("");
    fed_tax = 0.0;
    grand_total = 0.0;
    id = 0;
    invoice_number = new QString("");
    items = new QList<SWGInvoiceItemResource*>();
    name_prefix = new QString("");
    order_notes = new QString("");
    parent_invoice_id = 0;
    payment_method_id = 0;
    phone = new QString("");
    phone_number = new QString("");
    shipping = 0.0;
    shipping_address1 = new QString("");
    shipping_address2 = new QString("");
    shipping_city_name = new QString("");
    shipping_country_name = new QString("");
    shipping_full_name = new QString("");
    shipping_postal_code = new QString("");
    shipping_state_name = new QString("");
    sort = 0;
    state_tax = 0.0;
    subtotal = 0.0;
    updated_date = 0L;
    user = new SWGSimpleUserResource();
    vendor_id = 0;
    vendor_name = new QString("");
}

void
SWGInvoiceResource::cleanup() {
    
    if(billing_address1 != nullptr) {
        delete billing_address1;
    }

    if(billing_address2 != nullptr) {
        delete billing_address2;
    }

    if(billing_city_name != nullptr) {
        delete billing_city_name;
    }

    if(billing_country_name != nullptr) {
        delete billing_country_name;
    }

    if(billing_full_name != nullptr) {
        delete billing_full_name;
    }

    if(billing_postal_code != nullptr) {
        delete billing_postal_code;
    }

    if(billing_state_name != nullptr) {
        delete billing_state_name;
    }

    if(cart_id != nullptr) {
        delete cart_id;
    }


    if(currency != nullptr) {
        delete currency;
    }

    if(current_fulfillment_status != nullptr) {
        delete current_fulfillment_status;
    }

    if(current_payment_status != nullptr) {
        delete current_payment_status;
    }


    if(email != nullptr) {
        delete email;
    }

    if(external_ref != nullptr) {
        delete external_ref;
    }




    if(invoice_number != nullptr) {
        delete invoice_number;
    }

    if(items != nullptr) {
        QList<SWGInvoiceItemResource*>* arr = items;
        foreach(SWGInvoiceItemResource* o, *arr) {
            delete o;
        }
        delete items;
    }

    if(name_prefix != nullptr) {
        delete name_prefix;
    }

    if(order_notes != nullptr) {
        delete order_notes;
    }



    if(phone != nullptr) {
        delete phone;
    }

    if(phone_number != nullptr) {
        delete phone_number;
    }


    if(shipping_address1 != nullptr) {
        delete shipping_address1;
    }

    if(shipping_address2 != nullptr) {
        delete shipping_address2;
    }

    if(shipping_city_name != nullptr) {
        delete shipping_city_name;
    }

    if(shipping_country_name != nullptr) {
        delete shipping_country_name;
    }

    if(shipping_full_name != nullptr) {
        delete shipping_full_name;
    }

    if(shipping_postal_code != nullptr) {
        delete shipping_postal_code;
    }

    if(shipping_state_name != nullptr) {
        delete shipping_state_name;
    }





    if(user != nullptr) {
        delete user;
    }


    if(vendor_name != nullptr) {
        delete vendor_name;
    }
}

SWGInvoiceResource*
SWGInvoiceResource::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGInvoiceResource::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&billing_address1, pJson["billing_address1"], "QString", "QString");
    ::Swagger::setValue(&billing_address2, pJson["billing_address2"], "QString", "QString");
    ::Swagger::setValue(&billing_city_name, pJson["billing_city_name"], "QString", "QString");
    ::Swagger::setValue(&billing_country_name, pJson["billing_country_name"], "QString", "QString");
    ::Swagger::setValue(&billing_full_name, pJson["billing_full_name"], "QString", "QString");
    ::Swagger::setValue(&billing_postal_code, pJson["billing_postal_code"], "QString", "QString");
    ::Swagger::setValue(&billing_state_name, pJson["billing_state_name"], "QString", "QString");
    ::Swagger::setValue(&cart_id, pJson["cart_id"], "QString", "QString");
    ::Swagger::setValue(&created_date, pJson["created_date"], "qint64", "");
    ::Swagger::setValue(&currency, pJson["currency"], "QString", "QString");
    ::Swagger::setValue(&current_fulfillment_status, pJson["current_fulfillment_status"], "QString", "QString");
    ::Swagger::setValue(&current_payment_status, pJson["current_payment_status"], "QString", "QString");
    ::Swagger::setValue(&discount, pJson["discount"], "double", "");
    ::Swagger::setValue(&email, pJson["email"], "QString", "QString");
    ::Swagger::setValue(&external_ref, pJson["external_ref"], "QString", "QString");
    ::Swagger::setValue(&fed_tax, pJson["fed_tax"], "double", "");
    ::Swagger::setValue(&grand_total, pJson["grand_total"], "double", "");
    ::Swagger::setValue(&id, pJson["id"], "qint32", "");
    ::Swagger::setValue(&invoice_number, pJson["invoice_number"], "QString", "QString");
    
    ::Swagger::setValue(&items, pJson["items"], "QList", "SWGInvoiceItemResource");
    
    ::Swagger::setValue(&name_prefix, pJson["name_prefix"], "QString", "QString");
    ::Swagger::setValue(&order_notes, pJson["order_notes"], "QString", "QString");
    ::Swagger::setValue(&parent_invoice_id, pJson["parent_invoice_id"], "qint32", "");
    ::Swagger::setValue(&payment_method_id, pJson["payment_method_id"], "qint32", "");
    ::Swagger::setValue(&phone, pJson["phone"], "QString", "QString");
    ::Swagger::setValue(&phone_number, pJson["phone_number"], "QString", "QString");
    ::Swagger::setValue(&shipping, pJson["shipping"], "double", "");
    ::Swagger::setValue(&shipping_address1, pJson["shipping_address1"], "QString", "QString");
    ::Swagger::setValue(&shipping_address2, pJson["shipping_address2"], "QString", "QString");
    ::Swagger::setValue(&shipping_city_name, pJson["shipping_city_name"], "QString", "QString");
    ::Swagger::setValue(&shipping_country_name, pJson["shipping_country_name"], "QString", "QString");
    ::Swagger::setValue(&shipping_full_name, pJson["shipping_full_name"], "QString", "QString");
    ::Swagger::setValue(&shipping_postal_code, pJson["shipping_postal_code"], "QString", "QString");
    ::Swagger::setValue(&shipping_state_name, pJson["shipping_state_name"], "QString", "QString");
    ::Swagger::setValue(&sort, pJson["sort"], "qint32", "");
    ::Swagger::setValue(&state_tax, pJson["state_tax"], "double", "");
    ::Swagger::setValue(&subtotal, pJson["subtotal"], "double", "");
    ::Swagger::setValue(&updated_date, pJson["updated_date"], "qint64", "");
    ::Swagger::setValue(&user, pJson["user"], "SWGSimpleUserResource", "SWGSimpleUserResource");
    ::Swagger::setValue(&vendor_id, pJson["vendor_id"], "qint32", "");
    ::Swagger::setValue(&vendor_name, pJson["vendor_name"], "QString", "QString");
}

QString
SWGInvoiceResource::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGInvoiceResource::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    toJsonValue(QString("billing_address1"), billing_address1, obj, QString("QString"));

    toJsonValue(QString("billing_address2"), billing_address2, obj, QString("QString"));

    toJsonValue(QString("billing_city_name"), billing_city_name, obj, QString("QString"));

    toJsonValue(QString("billing_country_name"), billing_country_name, obj, QString("QString"));

    toJsonValue(QString("billing_full_name"), billing_full_name, obj, QString("QString"));

    toJsonValue(QString("billing_postal_code"), billing_postal_code, obj, QString("QString"));

    toJsonValue(QString("billing_state_name"), billing_state_name, obj, QString("QString"));

    toJsonValue(QString("cart_id"), cart_id, obj, QString("QString"));

    obj->insert("created_date", QJsonValue(created_date));

    toJsonValue(QString("currency"), currency, obj, QString("QString"));

    toJsonValue(QString("current_fulfillment_status"), current_fulfillment_status, obj, QString("QString"));

    toJsonValue(QString("current_payment_status"), current_payment_status, obj, QString("QString"));

    obj->insert("discount", QJsonValue(discount));

    toJsonValue(QString("email"), email, obj, QString("QString"));

    toJsonValue(QString("external_ref"), external_ref, obj, QString("QString"));

    obj->insert("fed_tax", QJsonValue(fed_tax));

    obj->insert("grand_total", QJsonValue(grand_total));

    obj->insert("id", QJsonValue(id));

    toJsonValue(QString("invoice_number"), invoice_number, obj, QString("QString"));

    QJsonArray itemsJsonArray;
    toJsonArray((QList<void*>*)items, &itemsJsonArray, "items", "SWGInvoiceItemResource");
    obj->insert("items", itemsJsonArray);

    toJsonValue(QString("name_prefix"), name_prefix, obj, QString("QString"));

    toJsonValue(QString("order_notes"), order_notes, obj, QString("QString"));

    obj->insert("parent_invoice_id", QJsonValue(parent_invoice_id));

    obj->insert("payment_method_id", QJsonValue(payment_method_id));

    toJsonValue(QString("phone"), phone, obj, QString("QString"));

    toJsonValue(QString("phone_number"), phone_number, obj, QString("QString"));

    obj->insert("shipping", QJsonValue(shipping));

    toJsonValue(QString("shipping_address1"), shipping_address1, obj, QString("QString"));

    toJsonValue(QString("shipping_address2"), shipping_address2, obj, QString("QString"));

    toJsonValue(QString("shipping_city_name"), shipping_city_name, obj, QString("QString"));

    toJsonValue(QString("shipping_country_name"), shipping_country_name, obj, QString("QString"));

    toJsonValue(QString("shipping_full_name"), shipping_full_name, obj, QString("QString"));

    toJsonValue(QString("shipping_postal_code"), shipping_postal_code, obj, QString("QString"));

    toJsonValue(QString("shipping_state_name"), shipping_state_name, obj, QString("QString"));

    obj->insert("sort", QJsonValue(sort));

    obj->insert("state_tax", QJsonValue(state_tax));

    obj->insert("subtotal", QJsonValue(subtotal));

    obj->insert("updated_date", QJsonValue(updated_date));

    toJsonValue(QString("user"), user, obj, QString("SWGSimpleUserResource"));

    obj->insert("vendor_id", QJsonValue(vendor_id));

    toJsonValue(QString("vendor_name"), vendor_name, obj, QString("QString"));

    return obj;
}

QString*
SWGInvoiceResource::getBillingAddress1() {
    return billing_address1;
}
void
SWGInvoiceResource::setBillingAddress1(QString* billing_address1) {
    this->billing_address1 = billing_address1;
}

QString*
SWGInvoiceResource::getBillingAddress2() {
    return billing_address2;
}
void
SWGInvoiceResource::setBillingAddress2(QString* billing_address2) {
    this->billing_address2 = billing_address2;
}

QString*
SWGInvoiceResource::getBillingCityName() {
    return billing_city_name;
}
void
SWGInvoiceResource::setBillingCityName(QString* billing_city_name) {
    this->billing_city_name = billing_city_name;
}

QString*
SWGInvoiceResource::getBillingCountryName() {
    return billing_country_name;
}
void
SWGInvoiceResource::setBillingCountryName(QString* billing_country_name) {
    this->billing_country_name = billing_country_name;
}

QString*
SWGInvoiceResource::getBillingFullName() {
    return billing_full_name;
}
void
SWGInvoiceResource::setBillingFullName(QString* billing_full_name) {
    this->billing_full_name = billing_full_name;
}

QString*
SWGInvoiceResource::getBillingPostalCode() {
    return billing_postal_code;
}
void
SWGInvoiceResource::setBillingPostalCode(QString* billing_postal_code) {
    this->billing_postal_code = billing_postal_code;
}

QString*
SWGInvoiceResource::getBillingStateName() {
    return billing_state_name;
}
void
SWGInvoiceResource::setBillingStateName(QString* billing_state_name) {
    this->billing_state_name = billing_state_name;
}

QString*
SWGInvoiceResource::getCartId() {
    return cart_id;
}
void
SWGInvoiceResource::setCartId(QString* cart_id) {
    this->cart_id = cart_id;
}

qint64
SWGInvoiceResource::getCreatedDate() {
    return created_date;
}
void
SWGInvoiceResource::setCreatedDate(qint64 created_date) {
    this->created_date = created_date;
}

QString*
SWGInvoiceResource::getCurrency() {
    return currency;
}
void
SWGInvoiceResource::setCurrency(QString* currency) {
    this->currency = currency;
}

QString*
SWGInvoiceResource::getCurrentFulfillmentStatus() {
    return current_fulfillment_status;
}
void
SWGInvoiceResource::setCurrentFulfillmentStatus(QString* current_fulfillment_status) {
    this->current_fulfillment_status = current_fulfillment_status;
}

QString*
SWGInvoiceResource::getCurrentPaymentStatus() {
    return current_payment_status;
}
void
SWGInvoiceResource::setCurrentPaymentStatus(QString* current_payment_status) {
    this->current_payment_status = current_payment_status;
}

double
SWGInvoiceResource::getDiscount() {
    return discount;
}
void
SWGInvoiceResource::setDiscount(double discount) {
    this->discount = discount;
}

QString*
SWGInvoiceResource::getEmail() {
    return email;
}
void
SWGInvoiceResource::setEmail(QString* email) {
    this->email = email;
}

QString*
SWGInvoiceResource::getExternalRef() {
    return external_ref;
}
void
SWGInvoiceResource::setExternalRef(QString* external_ref) {
    this->external_ref = external_ref;
}

double
SWGInvoiceResource::getFedTax() {
    return fed_tax;
}
void
SWGInvoiceResource::setFedTax(double fed_tax) {
    this->fed_tax = fed_tax;
}

double
SWGInvoiceResource::getGrandTotal() {
    return grand_total;
}
void
SWGInvoiceResource::setGrandTotal(double grand_total) {
    this->grand_total = grand_total;
}

qint32
SWGInvoiceResource::getId() {
    return id;
}
void
SWGInvoiceResource::setId(qint32 id) {
    this->id = id;
}

QString*
SWGInvoiceResource::getInvoiceNumber() {
    return invoice_number;
}
void
SWGInvoiceResource::setInvoiceNumber(QString* invoice_number) {
    this->invoice_number = invoice_number;
}

QList<SWGInvoiceItemResource*>*
SWGInvoiceResource::getItems() {
    return items;
}
void
SWGInvoiceResource::setItems(QList<SWGInvoiceItemResource*>* items) {
    this->items = items;
}

QString*
SWGInvoiceResource::getNamePrefix() {
    return name_prefix;
}
void
SWGInvoiceResource::setNamePrefix(QString* name_prefix) {
    this->name_prefix = name_prefix;
}

QString*
SWGInvoiceResource::getOrderNotes() {
    return order_notes;
}
void
SWGInvoiceResource::setOrderNotes(QString* order_notes) {
    this->order_notes = order_notes;
}

qint32
SWGInvoiceResource::getParentInvoiceId() {
    return parent_invoice_id;
}
void
SWGInvoiceResource::setParentInvoiceId(qint32 parent_invoice_id) {
    this->parent_invoice_id = parent_invoice_id;
}

qint32
SWGInvoiceResource::getPaymentMethodId() {
    return payment_method_id;
}
void
SWGInvoiceResource::setPaymentMethodId(qint32 payment_method_id) {
    this->payment_method_id = payment_method_id;
}

QString*
SWGInvoiceResource::getPhone() {
    return phone;
}
void
SWGInvoiceResource::setPhone(QString* phone) {
    this->phone = phone;
}

QString*
SWGInvoiceResource::getPhoneNumber() {
    return phone_number;
}
void
SWGInvoiceResource::setPhoneNumber(QString* phone_number) {
    this->phone_number = phone_number;
}

double
SWGInvoiceResource::getShipping() {
    return shipping;
}
void
SWGInvoiceResource::setShipping(double shipping) {
    this->shipping = shipping;
}

QString*
SWGInvoiceResource::getShippingAddress1() {
    return shipping_address1;
}
void
SWGInvoiceResource::setShippingAddress1(QString* shipping_address1) {
    this->shipping_address1 = shipping_address1;
}

QString*
SWGInvoiceResource::getShippingAddress2() {
    return shipping_address2;
}
void
SWGInvoiceResource::setShippingAddress2(QString* shipping_address2) {
    this->shipping_address2 = shipping_address2;
}

QString*
SWGInvoiceResource::getShippingCityName() {
    return shipping_city_name;
}
void
SWGInvoiceResource::setShippingCityName(QString* shipping_city_name) {
    this->shipping_city_name = shipping_city_name;
}

QString*
SWGInvoiceResource::getShippingCountryName() {
    return shipping_country_name;
}
void
SWGInvoiceResource::setShippingCountryName(QString* shipping_country_name) {
    this->shipping_country_name = shipping_country_name;
}

QString*
SWGInvoiceResource::getShippingFullName() {
    return shipping_full_name;
}
void
SWGInvoiceResource::setShippingFullName(QString* shipping_full_name) {
    this->shipping_full_name = shipping_full_name;
}

QString*
SWGInvoiceResource::getShippingPostalCode() {
    return shipping_postal_code;
}
void
SWGInvoiceResource::setShippingPostalCode(QString* shipping_postal_code) {
    this->shipping_postal_code = shipping_postal_code;
}

QString*
SWGInvoiceResource::getShippingStateName() {
    return shipping_state_name;
}
void
SWGInvoiceResource::setShippingStateName(QString* shipping_state_name) {
    this->shipping_state_name = shipping_state_name;
}

qint32
SWGInvoiceResource::getSort() {
    return sort;
}
void
SWGInvoiceResource::setSort(qint32 sort) {
    this->sort = sort;
}

double
SWGInvoiceResource::getStateTax() {
    return state_tax;
}
void
SWGInvoiceResource::setStateTax(double state_tax) {
    this->state_tax = state_tax;
}

double
SWGInvoiceResource::getSubtotal() {
    return subtotal;
}
void
SWGInvoiceResource::setSubtotal(double subtotal) {
    this->subtotal = subtotal;
}

qint64
SWGInvoiceResource::getUpdatedDate() {
    return updated_date;
}
void
SWGInvoiceResource::setUpdatedDate(qint64 updated_date) {
    this->updated_date = updated_date;
}

SWGSimpleUserResource*
SWGInvoiceResource::getUser() {
    return user;
}
void
SWGInvoiceResource::setUser(SWGSimpleUserResource* user) {
    this->user = user;
}

qint32
SWGInvoiceResource::getVendorId() {
    return vendor_id;
}
void
SWGInvoiceResource::setVendorId(qint32 vendor_id) {
    this->vendor_id = vendor_id;
}

QString*
SWGInvoiceResource::getVendorName() {
    return vendor_name;
}
void
SWGInvoiceResource::setVendorName(QString* vendor_name) {
    this->vendor_name = vendor_name;
}



} /* namespace Swagger */
