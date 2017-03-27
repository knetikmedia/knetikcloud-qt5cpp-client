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
 * SWGActivityResource.h
 * 
 * 
 */

#ifndef SWGActivityResource_H_
#define SWGActivityResource_H_

#include <QJsonObject>


#include "SWGActivityEntitlementResource.h"
#include "SWGAvailableSettingResource.h"
#include "SWGRewardSetResource.h"
#include <QList>
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGActivityResource: public SWGObject {
public:
    SWGActivityResource();
    SWGActivityResource(QString* json);
    virtual ~SWGActivityResource();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGActivityResource* fromJson(QString &jsonString);

    qint64 getCreatedDate();
    void setCreatedDate(qint64 created_date);

    QList<SWGActivityEntitlementResource*>* getEntitlements();
    void setEntitlements(QList<SWGActivityEntitlementResource*>* entitlements);

    qint64 getId();
    void setId(qint64 id);

    QString* getLaunch();
    void setLaunch(QString* launch);

    QString* getLongDescription();
    void setLongDescription(QString* long_description);

    QString* getName();
    void setName(QString* name);

    SWGRewardSetResource* getRewardSet();
    void setRewardSet(SWGRewardSetResource* reward_set);

    QList<SWGAvailableSettingResource*>* getSettings();
    void setSettings(QList<SWGAvailableSettingResource*>* settings);

    QString* getShortDescription();
    void setShortDescription(QString* short_description);

    bool getTemplate();
    void setTemplate(bool template);

    QString* getType();
    void setType(QString* type);

    QString* getUniqueKey();
    void setUniqueKey(QString* unique_key);

    qint64 getUpdatedDate();
    void setUpdatedDate(qint64 updated_date);


private:
    qint64 created_date;
    QList<SWGActivityEntitlementResource*>* entitlements;
    qint64 id;
    QString* launch;
    QString* long_description;
    QString* name;
    SWGRewardSetResource* reward_set;
    QList<SWGAvailableSettingResource*>* settings;
    QString* short_description;
    bool template;
    QString* type;
    QString* unique_key;
    qint64 updated_date;
};

} /* namespace Swagger */

#endif /* SWGActivityResource_H_ */