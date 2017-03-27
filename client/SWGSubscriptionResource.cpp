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


#include "SWGSubscriptionResource.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGSubscriptionResource::SWGSubscriptionResource(QString* json) {
    init();
    this->fromJson(*json);
}

SWGSubscriptionResource::SWGSubscriptionResource() {
    init();
}

SWGSubscriptionResource::~SWGSubscriptionResource() {
    this->cleanup();
}

void
SWGSubscriptionResource::init() {
    additional_properties = new QMap<QString, SWGProperty>();
    availability = new QString("");
    category = new QString("");
    consolidation_day_of_month = 0;
    created_date = 0L;
    geo_country_list = new QList<QString*>();
    geo_policy_type = new QString("");
    id = 0;
    long_description = new QString("");
    name = new QString("");
    plans = new QList<SWGSubscriptionPlanResource*>();
    short_description = new QString("");
    sort = 0;
    store_end = 0L;
    store_start = 0L;
    tags = new QList<QString*>();
    template = new QString("");
    unique_key = new QString("");
    updated_date = 0L;
    vendor_id = 0;
}

void
SWGSubscriptionResource::cleanup() {
    
    if(additional_properties != nullptr) {
        QList<SWGProperty*>* arr = additional_properties;
        foreach(SWGProperty* o, *arr) {
            delete o;
        }
        delete additional_properties;
    }

    if(availability != nullptr) {
        delete availability;
    }

    if(category != nullptr) {
        delete category;
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

    if(plans != nullptr) {
        QList<SWGSubscriptionPlanResource*>* arr = plans;
        foreach(SWGSubscriptionPlanResource* o, *arr) {
            delete o;
        }
        delete plans;
    }

    if(short_description != nullptr) {
        delete short_description;
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

    if(unique_key != nullptr) {
        delete unique_key;
    }


}

SWGSubscriptionResource*
SWGSubscriptionResource::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGSubscriptionResource::fromJsonObject(QJsonObject &pJson) {
    
    ::Swagger::setValue(&additional_properties, pJson["additional_properties"], "QMap", "SWGProperty");
    
    ::Swagger::setValue(&availability, pJson["availability"], "QString", "QString");
    ::Swagger::setValue(&category, pJson["category"], "QString", "QString");
    ::Swagger::setValue(&consolidation_day_of_month, pJson["consolidation_day_of_month"], "qint32", "");
    ::Swagger::setValue(&created_date, pJson["created_date"], "qint64", "");
    
    ::Swagger::setValue(&geo_country_list, pJson["geo_country_list"], "QList", "QString");
    
    ::Swagger::setValue(&geo_policy_type, pJson["geo_policy_type"], "QString", "QString");
    ::Swagger::setValue(&id, pJson["id"], "qint32", "");
    ::Swagger::setValue(&long_description, pJson["long_description"], "QString", "QString");
    ::Swagger::setValue(&name, pJson["name"], "QString", "QString");
    
    ::Swagger::setValue(&plans, pJson["plans"], "QList", "SWGSubscriptionPlanResource");
    
    ::Swagger::setValue(&short_description, pJson["short_description"], "QString", "QString");
    ::Swagger::setValue(&sort, pJson["sort"], "qint32", "");
    ::Swagger::setValue(&store_end, pJson["store_end"], "qint64", "");
    ::Swagger::setValue(&store_start, pJson["store_start"], "qint64", "");
    
    ::Swagger::setValue(&tags, pJson["tags"], "QList", "QString");
    
    ::Swagger::setValue(&template, pJson["template"], "QString", "QString");
    ::Swagger::setValue(&unique_key, pJson["unique_key"], "QString", "QString");
    ::Swagger::setValue(&updated_date, pJson["updated_date"], "qint64", "");
    ::Swagger::setValue(&vendor_id, pJson["vendor_id"], "qint32", "");
}

QString
SWGSubscriptionResource::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGSubscriptionResource::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    QJsonArray additional_propertiesJsonArray;
    toJsonArray((QList<void*>*)additional_properties, &additional_propertiesJsonArray, "additional_properties", "SWGProperty");
    obj->insert("additional_properties", additional_propertiesJsonArray);

    toJsonValue(QString("availability"), availability, obj, QString("QString"));

    toJsonValue(QString("category"), category, obj, QString("QString"));

    obj->insert("consolidation_day_of_month", QJsonValue(consolidation_day_of_month));

    obj->insert("created_date", QJsonValue(created_date));

    QJsonArray geo_country_listJsonArray;
    toJsonArray((QList<void*>*)geo_country_list, &geo_country_listJsonArray, "geo_country_list", "QString");
    obj->insert("geo_country_list", geo_country_listJsonArray);

    toJsonValue(QString("geo_policy_type"), geo_policy_type, obj, QString("QString"));

    obj->insert("id", QJsonValue(id));

    toJsonValue(QString("long_description"), long_description, obj, QString("QString"));

    toJsonValue(QString("name"), name, obj, QString("QString"));

    QJsonArray plansJsonArray;
    toJsonArray((QList<void*>*)plans, &plansJsonArray, "plans", "SWGSubscriptionPlanResource");
    obj->insert("plans", plansJsonArray);

    toJsonValue(QString("short_description"), short_description, obj, QString("QString"));

    obj->insert("sort", QJsonValue(sort));

    obj->insert("store_end", QJsonValue(store_end));

    obj->insert("store_start", QJsonValue(store_start));

    QJsonArray tagsJsonArray;
    toJsonArray((QList<void*>*)tags, &tagsJsonArray, "tags", "QString");
    obj->insert("tags", tagsJsonArray);

    toJsonValue(QString("template"), template, obj, QString("QString"));

    toJsonValue(QString("unique_key"), unique_key, obj, QString("QString"));

    obj->insert("updated_date", QJsonValue(updated_date));

    obj->insert("vendor_id", QJsonValue(vendor_id));

    return obj;
}

QMap<QString, SWGProperty*>*
SWGSubscriptionResource::getAdditionalProperties() {
    return additional_properties;
}
void
SWGSubscriptionResource::setAdditionalProperties(QMap<QString, SWGProperty*>* additional_properties) {
    this->additional_properties = additional_properties;
}

QString*
SWGSubscriptionResource::getAvailability() {
    return availability;
}
void
SWGSubscriptionResource::setAvailability(QString* availability) {
    this->availability = availability;
}

QString*
SWGSubscriptionResource::getCategory() {
    return category;
}
void
SWGSubscriptionResource::setCategory(QString* category) {
    this->category = category;
}

qint32
SWGSubscriptionResource::getConsolidationDayOfMonth() {
    return consolidation_day_of_month;
}
void
SWGSubscriptionResource::setConsolidationDayOfMonth(qint32 consolidation_day_of_month) {
    this->consolidation_day_of_month = consolidation_day_of_month;
}

qint64
SWGSubscriptionResource::getCreatedDate() {
    return created_date;
}
void
SWGSubscriptionResource::setCreatedDate(qint64 created_date) {
    this->created_date = created_date;
}

QList<QString*>*
SWGSubscriptionResource::getGeoCountryList() {
    return geo_country_list;
}
void
SWGSubscriptionResource::setGeoCountryList(QList<QString*>* geo_country_list) {
    this->geo_country_list = geo_country_list;
}

QString*
SWGSubscriptionResource::getGeoPolicyType() {
    return geo_policy_type;
}
void
SWGSubscriptionResource::setGeoPolicyType(QString* geo_policy_type) {
    this->geo_policy_type = geo_policy_type;
}

qint32
SWGSubscriptionResource::getId() {
    return id;
}
void
SWGSubscriptionResource::setId(qint32 id) {
    this->id = id;
}

QString*
SWGSubscriptionResource::getLongDescription() {
    return long_description;
}
void
SWGSubscriptionResource::setLongDescription(QString* long_description) {
    this->long_description = long_description;
}

QString*
SWGSubscriptionResource::getName() {
    return name;
}
void
SWGSubscriptionResource::setName(QString* name) {
    this->name = name;
}

QList<SWGSubscriptionPlanResource*>*
SWGSubscriptionResource::getPlans() {
    return plans;
}
void
SWGSubscriptionResource::setPlans(QList<SWGSubscriptionPlanResource*>* plans) {
    this->plans = plans;
}

QString*
SWGSubscriptionResource::getShortDescription() {
    return short_description;
}
void
SWGSubscriptionResource::setShortDescription(QString* short_description) {
    this->short_description = short_description;
}

qint32
SWGSubscriptionResource::getSort() {
    return sort;
}
void
SWGSubscriptionResource::setSort(qint32 sort) {
    this->sort = sort;
}

qint64
SWGSubscriptionResource::getStoreEnd() {
    return store_end;
}
void
SWGSubscriptionResource::setStoreEnd(qint64 store_end) {
    this->store_end = store_end;
}

qint64
SWGSubscriptionResource::getStoreStart() {
    return store_start;
}
void
SWGSubscriptionResource::setStoreStart(qint64 store_start) {
    this->store_start = store_start;
}

QList<QString*>*
SWGSubscriptionResource::getTags() {
    return tags;
}
void
SWGSubscriptionResource::setTags(QList<QString*>* tags) {
    this->tags = tags;
}

QString*
SWGSubscriptionResource::getTemplate() {
    return template;
}
void
SWGSubscriptionResource::setTemplate(QString* template) {
    this->template = template;
}

QString*
SWGSubscriptionResource::getUniqueKey() {
    return unique_key;
}
void
SWGSubscriptionResource::setUniqueKey(QString* unique_key) {
    this->unique_key = unique_key;
}

qint64
SWGSubscriptionResource::getUpdatedDate() {
    return updated_date;
}
void
SWGSubscriptionResource::setUpdatedDate(qint64 updated_date) {
    this->updated_date = updated_date;
}

qint32
SWGSubscriptionResource::getVendorId() {
    return vendor_id;
}
void
SWGSubscriptionResource::setVendorId(qint32 vendor_id) {
    this->vendor_id = vendor_id;
}



} /* namespace Swagger */
