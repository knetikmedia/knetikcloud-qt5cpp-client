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

/*
 * SWGSubscriptionResource.h
 * 
 * 
 */

#ifndef SWGSubscriptionResource_H_
#define SWGSubscriptionResource_H_

#include <QJsonObject>


#include "SWGProperty.h"
#include "SWGSubscriptionPlanResource.h"
#include <QList>
#include <QMap>
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGSubscriptionResource: public SWGObject {
public:
    SWGSubscriptionResource();
    SWGSubscriptionResource(QString* json);
    virtual ~SWGSubscriptionResource();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGSubscriptionResource* fromJson(QString &jsonString);

    QMap<QString, SWGProperty*>* getAdditionalProperties();
    void setAdditionalProperties(QMap<QString, SWGProperty*>* additional_properties);

    QString* getAvailability();
    void setAvailability(QString* availability);

    QString* getCategory();
    void setCategory(QString* category);

    qint32 getConsolidationDayOfMonth();
    void setConsolidationDayOfMonth(qint32 consolidation_day_of_month);

    qint64 getCreatedDate();
    void setCreatedDate(qint64 created_date);

    QList<QString*>* getGeoCountryList();
    void setGeoCountryList(QList<QString*>* geo_country_list);

    QString* getGeoPolicyType();
    void setGeoPolicyType(QString* geo_policy_type);

    qint32 getId();
    void setId(qint32 id);

    QString* getLongDescription();
    void setLongDescription(QString* long_description);

    QString* getName();
    void setName(QString* name);

    QList<SWGSubscriptionPlanResource*>* getPlans();
    void setPlans(QList<SWGSubscriptionPlanResource*>* plans);

    QString* getShortDescription();
    void setShortDescription(QString* short_description);

    qint32 getSort();
    void setSort(qint32 sort);

    qint64 getStoreEnd();
    void setStoreEnd(qint64 store_end);

    qint64 getStoreStart();
    void setStoreStart(qint64 store_start);

    QList<QString*>* getTags();
    void setTags(QList<QString*>* tags);

    QString* getTemplate();
    void setTemplate(QString* template);

    QString* getUniqueKey();
    void setUniqueKey(QString* unique_key);

    qint64 getUpdatedDate();
    void setUpdatedDate(qint64 updated_date);

    qint32 getVendorId();
    void setVendorId(qint32 vendor_id);


private:
    QMap<QString, SWGProperty*>* additional_properties;
    QString* availability;
    QString* category;
    qint32 consolidation_day_of_month;
    qint64 created_date;
    QList<QString*>* geo_country_list;
    QString* geo_policy_type;
    qint32 id;
    QString* long_description;
    QString* name;
    QList<SWGSubscriptionPlanResource*>* plans;
    QString* short_description;
    qint32 sort;
    qint64 store_end;
    qint64 store_start;
    QList<QString*>* tags;
    QString* template;
    QString* unique_key;
    qint64 updated_date;
    qint32 vendor_id;
};

} /* namespace Swagger */

#endif /* SWGSubscriptionResource_H_ */
