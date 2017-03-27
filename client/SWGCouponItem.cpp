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


#include "SWGCouponItem.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGCouponItem::SWGCouponItem(QString* json) {
    init();
    this->fromJson(*json);
}

SWGCouponItem::SWGCouponItem() {
    init();
}

SWGCouponItem::~SWGCouponItem() {
    this->cleanup();
}

void
SWGCouponItem::init() {
    additional_properties = new QMap<QString, SWGProperty>();
    behaviors = new QList<SWGBehavior*>();
    category = new QString("");
    coupon_type_hint = new QString("");
    created_date = 0L;
    discount_max = 0.0;
    discount_min_cart_value = 0.0;
    discount_type = new QString("");
    discount_value = 0.0;
    displayable = false;
    exclusive = false;
    geo_country_list = new QList<QString*>();
    geo_policy_type = new QString("");
    id = 0;
    item_id = 0;
    long_description = new QString("");
    max_quantity = 0;
    name = new QString("");
    self_exclusive = false;
    shipping_tier = 0;
    short_description = new QString("");
    skus = new QList<SWGSku*>();
    sort = 0;
    store_end = 0L;
    store_start = 0L;
    tags = new QList<QString*>();
    template = new QString("");
    type_hint = new QString("");
    unique_key = new QString("");
    updated_date = 0L;
    valid_for_tags = new QList<QString*>();
    vendor_id = 0;
}

void
SWGCouponItem::cleanup() {
    
    if(additional_properties != nullptr) {
        QList<SWGProperty*>* arr = additional_properties;
        foreach(SWGProperty* o, *arr) {
            delete o;
        }
        delete additional_properties;
    }

    if(behaviors != nullptr) {
        QList<SWGBehavior*>* arr = behaviors;
        foreach(SWGBehavior* o, *arr) {
            delete o;
        }
        delete behaviors;
    }

    if(category != nullptr) {
        delete category;
    }

    if(coupon_type_hint != nullptr) {
        delete coupon_type_hint;
    }




    if(discount_type != nullptr) {
        delete discount_type;
    }




    if(geo_country_list != nullptr) {
        QList<QString*>* arr = geo_country_list;
        foreach(QString* o, *arr) {
            delete o;
        }
        delete geo_country_list;
    }

    if(geo_policy_type != nullptr) {
        delete geo_policy_type;
    }



    if(long_description != nullptr) {
        delete long_description;
    }


    if(name != nullptr) {
        delete name;
    }



    if(short_description != nullptr) {
        delete short_description;
    }

    if(skus != nullptr) {
        QList<SWGSku*>* arr = skus;
        foreach(SWGSku* o, *arr) {
            delete o;
        }
        delete skus;
    }




    if(tags != nullptr) {
        QList<QString*>* arr = tags;
        foreach(QString* o, *arr) {
            delete o;
        }
        delete tags;
    }

    if(template != nullptr) {
        delete template;
    }

    if(type_hint != nullptr) {
        delete type_hint;
    }

    if(unique_key != nullptr) {
        delete unique_key;
    }


    if(valid_for_tags != nullptr) {
        QList<QString*>* arr = valid_for_tags;
        foreach(QString* o, *arr) {
            delete o;
        }
        delete valid_for_tags;
    }

}

SWGCouponItem*
SWGCouponItem::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGCouponItem::fromJsonObject(QJsonObject &pJson) {
    
    ::Swagger::setValue(&additional_properties, pJson["additional_properties"], "QMap", "SWGProperty");
    
    
    ::Swagger::setValue(&behaviors, pJson["behaviors"], "QList", "SWGBehavior");
    
    ::Swagger::setValue(&category, pJson["category"], "QString", "QString");
    ::Swagger::setValue(&coupon_type_hint, pJson["coupon_type_hint"], "QString", "QString");
    ::Swagger::setValue(&created_date, pJson["created_date"], "qint64", "");
    ::Swagger::setValue(&discount_max, pJson["discount_max"], "double", "");
    ::Swagger::setValue(&discount_min_cart_value, pJson["discount_min_cart_value"], "double", "");
    ::Swagger::setValue(&discount_type, pJson["discount_type"], "QString", "QString");
    ::Swagger::setValue(&discount_value, pJson["discount_value"], "double", "");
    ::Swagger::setValue(&displayable, pJson["displayable"], "bool", "");
    ::Swagger::setValue(&exclusive, pJson["exclusive"], "bool", "");
    
    ::Swagger::setValue(&geo_country_list, pJson["geo_country_list"], "QList", "QString");
    
    ::Swagger::setValue(&geo_policy_type, pJson["geo_policy_type"], "QString", "QString");
    ::Swagger::setValue(&id, pJson["id"], "qint32", "");
    ::Swagger::setValue(&item_id, pJson["item_id"], "qint32", "");
    ::Swagger::setValue(&long_description, pJson["long_description"], "QString", "QString");
    ::Swagger::setValue(&max_quantity, pJson["max_quantity"], "qint32", "");
    ::Swagger::setValue(&name, pJson["name"], "QString", "QString");
    ::Swagger::setValue(&self_exclusive, pJson["self_exclusive"], "bool", "");
    ::Swagger::setValue(&shipping_tier, pJson["shipping_tier"], "qint32", "");
    ::Swagger::setValue(&short_description, pJson["short_description"], "QString", "QString");
    
    ::Swagger::setValue(&skus, pJson["skus"], "QList", "SWGSku");
    
    ::Swagger::setValue(&sort, pJson["sort"], "qint32", "");
    ::Swagger::setValue(&store_end, pJson["store_end"], "qint64", "");
    ::Swagger::setValue(&store_start, pJson["store_start"], "qint64", "");
    
    ::Swagger::setValue(&tags, pJson["tags"], "QList", "QString");
    
    ::Swagger::setValue(&template, pJson["template"], "QString", "QString");
    ::Swagger::setValue(&type_hint, pJson["type_hint"], "QString", "QString");
    ::Swagger::setValue(&unique_key, pJson["unique_key"], "QString", "QString");
    ::Swagger::setValue(&updated_date, pJson["updated_date"], "qint64", "");
    
    ::Swagger::setValue(&valid_for_tags, pJson["valid_for_tags"], "QList", "QString");
    
    ::Swagger::setValue(&vendor_id, pJson["vendor_id"], "qint32", "");
}

QString
SWGCouponItem::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGCouponItem::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    QJsonArray additional_propertiesJsonArray;
    toJsonArray((QList<void*>*)additional_properties, &additional_propertiesJsonArray, "additional_properties", "SWGProperty");
    obj->insert("additional_properties", additional_propertiesJsonArray);

    QJsonArray behaviorsJsonArray;
    toJsonArray((QList<void*>*)behaviors, &behaviorsJsonArray, "behaviors", "SWGBehavior");
    obj->insert("behaviors", behaviorsJsonArray);

    toJsonValue(QString("category"), category, obj, QString("QString"));

    toJsonValue(QString("coupon_type_hint"), coupon_type_hint, obj, QString("QString"));

    obj->insert("created_date", QJsonValue(created_date));

    obj->insert("discount_max", QJsonValue(discount_max));

    obj->insert("discount_min_cart_value", QJsonValue(discount_min_cart_value));

    toJsonValue(QString("discount_type"), discount_type, obj, QString("QString"));

    obj->insert("discount_value", QJsonValue(discount_value));

    obj->insert("displayable", QJsonValue(displayable));

    obj->insert("exclusive", QJsonValue(exclusive));

    QJsonArray geo_country_listJsonArray;
    toJsonArray((QList<void*>*)geo_country_list, &geo_country_listJsonArray, "geo_country_list", "QString");
    obj->insert("geo_country_list", geo_country_listJsonArray);

    toJsonValue(QString("geo_policy_type"), geo_policy_type, obj, QString("QString"));

    obj->insert("id", QJsonValue(id));

    obj->insert("item_id", QJsonValue(item_id));

    toJsonValue(QString("long_description"), long_description, obj, QString("QString"));

    obj->insert("max_quantity", QJsonValue(max_quantity));

    toJsonValue(QString("name"), name, obj, QString("QString"));

    obj->insert("self_exclusive", QJsonValue(self_exclusive));

    obj->insert("shipping_tier", QJsonValue(shipping_tier));

    toJsonValue(QString("short_description"), short_description, obj, QString("QString"));

    QJsonArray skusJsonArray;
    toJsonArray((QList<void*>*)skus, &skusJsonArray, "skus", "SWGSku");
    obj->insert("skus", skusJsonArray);

    obj->insert("sort", QJsonValue(sort));

    obj->insert("store_end", QJsonValue(store_end));

    obj->insert("store_start", QJsonValue(store_start));

    QJsonArray tagsJsonArray;
    toJsonArray((QList<void*>*)tags, &tagsJsonArray, "tags", "QString");
    obj->insert("tags", tagsJsonArray);

    toJsonValue(QString("template"), template, obj, QString("QString"));

    toJsonValue(QString("type_hint"), type_hint, obj, QString("QString"));

    toJsonValue(QString("unique_key"), unique_key, obj, QString("QString"));

    obj->insert("updated_date", QJsonValue(updated_date));

    QJsonArray valid_for_tagsJsonArray;
    toJsonArray((QList<void*>*)valid_for_tags, &valid_for_tagsJsonArray, "valid_for_tags", "QString");
    obj->insert("valid_for_tags", valid_for_tagsJsonArray);

    obj->insert("vendor_id", QJsonValue(vendor_id));

    return obj;
}

QMap<QString, SWGProperty*>*
SWGCouponItem::getAdditionalProperties() {
    return additional_properties;
}
void
SWGCouponItem::setAdditionalProperties(QMap<QString, SWGProperty*>* additional_properties) {
    this->additional_properties = additional_properties;
}

QList<SWGBehavior*>*
SWGCouponItem::getBehaviors() {
    return behaviors;
}
void
SWGCouponItem::setBehaviors(QList<SWGBehavior*>* behaviors) {
    this->behaviors = behaviors;
}

QString*
SWGCouponItem::getCategory() {
    return category;
}
void
SWGCouponItem::setCategory(QString* category) {
    this->category = category;
}

QString*
SWGCouponItem::getCouponTypeHint() {
    return coupon_type_hint;
}
void
SWGCouponItem::setCouponTypeHint(QString* coupon_type_hint) {
    this->coupon_type_hint = coupon_type_hint;
}

qint64
SWGCouponItem::getCreatedDate() {
    return created_date;
}
void
SWGCouponItem::setCreatedDate(qint64 created_date) {
    this->created_date = created_date;
}

double
SWGCouponItem::getDiscountMax() {
    return discount_max;
}
void
SWGCouponItem::setDiscountMax(double discount_max) {
    this->discount_max = discount_max;
}

double
SWGCouponItem::getDiscountMinCartValue() {
    return discount_min_cart_value;
}
void
SWGCouponItem::setDiscountMinCartValue(double discount_min_cart_value) {
    this->discount_min_cart_value = discount_min_cart_value;
}

QString*
SWGCouponItem::getDiscountType() {
    return discount_type;
}
void
SWGCouponItem::setDiscountType(QString* discount_type) {
    this->discount_type = discount_type;
}

double
SWGCouponItem::getDiscountValue() {
    return discount_value;
}
void
SWGCouponItem::setDiscountValue(double discount_value) {
    this->discount_value = discount_value;
}

bool
SWGCouponItem::getDisplayable() {
    return displayable;
}
void
SWGCouponItem::setDisplayable(bool displayable) {
    this->displayable = displayable;
}

bool
SWGCouponItem::getExclusive() {
    return exclusive;
}
void
SWGCouponItem::setExclusive(bool exclusive) {
    this->exclusive = exclusive;
}

QList<QString*>*
SWGCouponItem::getGeoCountryList() {
    return geo_country_list;
}
void
SWGCouponItem::setGeoCountryList(QList<QString*>* geo_country_list) {
    this->geo_country_list = geo_country_list;
}

QString*
SWGCouponItem::getGeoPolicyType() {
    return geo_policy_type;
}
void
SWGCouponItem::setGeoPolicyType(QString* geo_policy_type) {
    this->geo_policy_type = geo_policy_type;
}

qint32
SWGCouponItem::getId() {
    return id;
}
void
SWGCouponItem::setId(qint32 id) {
    this->id = id;
}

qint32
SWGCouponItem::getItemId() {
    return item_id;
}
void
SWGCouponItem::setItemId(qint32 item_id) {
    this->item_id = item_id;
}

QString*
SWGCouponItem::getLongDescription() {
    return long_description;
}
void
SWGCouponItem::setLongDescription(QString* long_description) {
    this->long_description = long_description;
}

qint32
SWGCouponItem::getMaxQuantity() {
    return max_quantity;
}
void
SWGCouponItem::setMaxQuantity(qint32 max_quantity) {
    this->max_quantity = max_quantity;
}

QString*
SWGCouponItem::getName() {
    return name;
}
void
SWGCouponItem::setName(QString* name) {
    this->name = name;
}

bool
SWGCouponItem::getSelfExclusive() {
    return self_exclusive;
}
void
SWGCouponItem::setSelfExclusive(bool self_exclusive) {
    this->self_exclusive = self_exclusive;
}

qint32
SWGCouponItem::getShippingTier() {
    return shipping_tier;
}
void
SWGCouponItem::setShippingTier(qint32 shipping_tier) {
    this->shipping_tier = shipping_tier;
}

QString*
SWGCouponItem::getShortDescription() {
    return short_description;
}
void
SWGCouponItem::setShortDescription(QString* short_description) {
    this->short_description = short_description;
}

QList<SWGSku*>*
SWGCouponItem::getSkus() {
    return skus;
}
void
SWGCouponItem::setSkus(QList<SWGSku*>* skus) {
    this->skus = skus;
}

qint32
SWGCouponItem::getSort() {
    return sort;
}
void
SWGCouponItem::setSort(qint32 sort) {
    this->sort = sort;
}

qint64
SWGCouponItem::getStoreEnd() {
    return store_end;
}
void
SWGCouponItem::setStoreEnd(qint64 store_end) {
    this->store_end = store_end;
}

qint64
SWGCouponItem::getStoreStart() {
    return store_start;
}
void
SWGCouponItem::setStoreStart(qint64 store_start) {
    this->store_start = store_start;
}

QList<QString*>*
SWGCouponItem::getTags() {
    return tags;
}
void
SWGCouponItem::setTags(QList<QString*>* tags) {
    this->tags = tags;
}

QString*
SWGCouponItem::getTemplate() {
    return template;
}
void
SWGCouponItem::setTemplate(QString* template) {
    this->template = template;
}

QString*
SWGCouponItem::getTypeHint() {
    return type_hint;
}
void
SWGCouponItem::setTypeHint(QString* type_hint) {
    this->type_hint = type_hint;
}

QString*
SWGCouponItem::getUniqueKey() {
    return unique_key;
}
void
SWGCouponItem::setUniqueKey(QString* unique_key) {
    this->unique_key = unique_key;
}

qint64
SWGCouponItem::getUpdatedDate() {
    return updated_date;
}
void
SWGCouponItem::setUpdatedDate(qint64 updated_date) {
    this->updated_date = updated_date;
}

QList<QString*>*
SWGCouponItem::getValidForTags() {
    return valid_for_tags;
}
void
SWGCouponItem::setValidForTags(QList<QString*>* valid_for_tags) {
    this->valid_for_tags = valid_for_tags;
}

qint32
SWGCouponItem::getVendorId() {
    return vendor_id;
}
void
SWGCouponItem::setVendorId(qint32 vendor_id) {
    this->vendor_id = vendor_id;
}



} /* namespace Swagger */

