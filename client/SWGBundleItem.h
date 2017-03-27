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
 * SWGBundleItem.h
 * 
 * 
 */

#ifndef SWGBundleItem_H_
#define SWGBundleItem_H_

#include <QJsonObject>


#include "SWGBehavior.h"
#include "SWGBundledSku.h"
#include "SWGProperty.h"
#include "SWGSku.h"
#include <QList>
#include <QMap>
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGBundleItem: public SWGObject {
public:
    SWGBundleItem();
    SWGBundleItem(QString* json);
    virtual ~SWGBundleItem();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGBundleItem* fromJson(QString &jsonString);

    QMap<QString, SWGProperty*>* getAdditionalProperties();
    void setAdditionalProperties(QMap<QString, SWGProperty*>* additional_properties);

    QList<SWGBehavior*>* getBehaviors();
    void setBehaviors(QList<SWGBehavior*>* behaviors);

    QList<SWGBundledSku*>* getBundledSkus();
    void setBundledSkus(QList<SWGBundledSku*>* bundled_skus);

    QString* getCategory();
    void setCategory(QString* category);

    qint64 getCreatedDate();
    void setCreatedDate(qint64 created_date);

    bool getDisplayable();
    void setDisplayable(bool displayable);

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

    qint32 getShippingTier();
    void setShippingTier(qint32 shipping_tier);

    QString* getShortDescription();
    void setShortDescription(QString* short_description);

    QList<SWGSku*>* getSkus();
    void setSkus(QList<SWGSku*>* skus);

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

    QString* getTypeHint();
    void setTypeHint(QString* type_hint);

    QString* getUniqueKey();
    void setUniqueKey(QString* unique_key);

    qint64 getUpdatedDate();
    void setUpdatedDate(qint64 updated_date);

    qint32 getVendorId();
    void setVendorId(qint32 vendor_id);


private:
    QMap<QString, SWGProperty*>* additional_properties;
    QList<SWGBehavior*>* behaviors;
    QList<SWGBundledSku*>* bundled_skus;
    QString* category;
    qint64 created_date;
    bool displayable;
    QList<QString*>* geo_country_list;
    QString* geo_policy_type;
    qint32 id;
    QString* long_description;
    QString* name;
    qint32 shipping_tier;
    QString* short_description;
    QList<SWGSku*>* skus;
    qint32 sort;
    qint64 store_end;
    qint64 store_start;
    QList<QString*>* tags;
    QString* template;
    QString* type_hint;
    QString* unique_key;
    qint64 updated_date;
    qint32 vendor_id;
};

} /* namespace Swagger */

#endif /* SWGBundleItem_H_ */
