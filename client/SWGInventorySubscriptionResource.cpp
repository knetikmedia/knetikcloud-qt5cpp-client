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


#include "SWGInventorySubscriptionResource.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGInventorySubscriptionResource::SWGInventorySubscriptionResource(QString* json) {
    init();
    this->fromJson(*json);
}

SWGInventorySubscriptionResource::SWGInventorySubscriptionResource() {
    init();
}

SWGInventorySubscriptionResource::~SWGInventorySubscriptionResource() {
    this->cleanup();
}

void
SWGInventorySubscriptionResource::init() {
    bill_date = 0L;
    credit = 0.0;
    credit_log = new QList<SWGSubscriptionCreditResource*>();
    grace_end = 0L;
    inventory_id = 0;
    inventory_status = new QString("");
    item_id = 0;
    payment_method = new SWGPaymentMethodResource();
    recurring_price = 0.0;
    sku = new QString("");
    start_date = 0L;
    subscription_status = 0;
    user = new SWGSimpleUserResource();
}

void
SWGInventorySubscriptionResource::cleanup() {
    


    if(credit_log != nullptr) {
        QList<SWGSubscriptionCreditResource*>* arr = credit_log;
        foreach(SWGSubscriptionCreditResource* o, *arr) {
            delete o;
        }
        delete credit_log;
    }



    if(inventory_status != nullptr) {
        delete inventory_status;
    }


    if(payment_method != nullptr) {
        delete payment_method;
    }


    if(sku != nullptr) {
        delete sku;
    }



    if(user != nullptr) {
        delete user;
    }
}

SWGInventorySubscriptionResource*
SWGInventorySubscriptionResource::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGInventorySubscriptionResource::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&bill_date, pJson["bill_date"], "qint64", "");
    ::Swagger::setValue(&credit, pJson["credit"], "double", "");
    
    ::Swagger::setValue(&credit_log, pJson["credit_log"], "QList", "SWGSubscriptionCreditResource");
    
    ::Swagger::setValue(&grace_end, pJson["grace_end"], "qint64", "");
    ::Swagger::setValue(&inventory_id, pJson["inventory_id"], "qint32", "");
    ::Swagger::setValue(&inventory_status, pJson["inventory_status"], "QString", "QString");
    ::Swagger::setValue(&item_id, pJson["item_id"], "qint32", "");
    ::Swagger::setValue(&payment_method, pJson["payment_method"], "SWGPaymentMethodResource", "SWGPaymentMethodResource");
    ::Swagger::setValue(&recurring_price, pJson["recurring_price"], "double", "");
    ::Swagger::setValue(&sku, pJson["sku"], "QString", "QString");
    ::Swagger::setValue(&start_date, pJson["start_date"], "qint64", "");
    ::Swagger::setValue(&subscription_status, pJson["subscription_status"], "qint32", "");
    ::Swagger::setValue(&user, pJson["user"], "SWGSimpleUserResource", "SWGSimpleUserResource");
}

QString
SWGInventorySubscriptionResource::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGInventorySubscriptionResource::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    obj->insert("bill_date", QJsonValue(bill_date));

    obj->insert("credit", QJsonValue(credit));

    QJsonArray credit_logJsonArray;
    toJsonArray((QList<void*>*)credit_log, &credit_logJsonArray, "credit_log", "SWGSubscriptionCreditResource");
    obj->insert("credit_log", credit_logJsonArray);

    obj->insert("grace_end", QJsonValue(grace_end));

    obj->insert("inventory_id", QJsonValue(inventory_id));

    toJsonValue(QString("inventory_status"), inventory_status, obj, QString("QString"));

    obj->insert("item_id", QJsonValue(item_id));

    toJsonValue(QString("payment_method"), payment_method, obj, QString("SWGPaymentMethodResource"));

    obj->insert("recurring_price", QJsonValue(recurring_price));

    toJsonValue(QString("sku"), sku, obj, QString("QString"));

    obj->insert("start_date", QJsonValue(start_date));

    obj->insert("subscription_status", QJsonValue(subscription_status));

    toJsonValue(QString("user"), user, obj, QString("SWGSimpleUserResource"));

    return obj;
}

qint64
SWGInventorySubscriptionResource::getBillDate() {
    return bill_date;
}
void
SWGInventorySubscriptionResource::setBillDate(qint64 bill_date) {
    this->bill_date = bill_date;
}

double
SWGInventorySubscriptionResource::getCredit() {
    return credit;
}
void
SWGInventorySubscriptionResource::setCredit(double credit) {
    this->credit = credit;
}

QList<SWGSubscriptionCreditResource*>*
SWGInventorySubscriptionResource::getCreditLog() {
    return credit_log;
}
void
SWGInventorySubscriptionResource::setCreditLog(QList<SWGSubscriptionCreditResource*>* credit_log) {
    this->credit_log = credit_log;
}

qint64
SWGInventorySubscriptionResource::getGraceEnd() {
    return grace_end;
}
void
SWGInventorySubscriptionResource::setGraceEnd(qint64 grace_end) {
    this->grace_end = grace_end;
}

qint32
SWGInventorySubscriptionResource::getInventoryId() {
    return inventory_id;
}
void
SWGInventorySubscriptionResource::setInventoryId(qint32 inventory_id) {
    this->inventory_id = inventory_id;
}

QString*
SWGInventorySubscriptionResource::getInventoryStatus() {
    return inventory_status;
}
void
SWGInventorySubscriptionResource::setInventoryStatus(QString* inventory_status) {
    this->inventory_status = inventory_status;
}

qint32
SWGInventorySubscriptionResource::getItemId() {
    return item_id;
}
void
SWGInventorySubscriptionResource::setItemId(qint32 item_id) {
    this->item_id = item_id;
}

SWGPaymentMethodResource*
SWGInventorySubscriptionResource::getPaymentMethod() {
    return payment_method;
}
void
SWGInventorySubscriptionResource::setPaymentMethod(SWGPaymentMethodResource* payment_method) {
    this->payment_method = payment_method;
}

double
SWGInventorySubscriptionResource::getRecurringPrice() {
    return recurring_price;
}
void
SWGInventorySubscriptionResource::setRecurringPrice(double recurring_price) {
    this->recurring_price = recurring_price;
}

QString*
SWGInventorySubscriptionResource::getSku() {
    return sku;
}
void
SWGInventorySubscriptionResource::setSku(QString* sku) {
    this->sku = sku;
}

qint64
SWGInventorySubscriptionResource::getStartDate() {
    return start_date;
}
void
SWGInventorySubscriptionResource::setStartDate(qint64 start_date) {
    this->start_date = start_date;
}

qint32
SWGInventorySubscriptionResource::getSubscriptionStatus() {
    return subscription_status;
}
void
SWGInventorySubscriptionResource::setSubscriptionStatus(qint32 subscription_status) {
    this->subscription_status = subscription_status;
}

SWGSimpleUserResource*
SWGInventorySubscriptionResource::getUser() {
    return user;
}
void
SWGInventorySubscriptionResource::setUser(SWGSimpleUserResource* user) {
    this->user = user;
}



} /* namespace Swagger */

