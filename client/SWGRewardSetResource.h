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
 * SWGRewardSetResource.h
 * 
 * 
 */

#ifndef SWGRewardSetResource_H_
#define SWGRewardSetResource_H_

#include <QJsonObject>


#include "SWGRewardCurrencyResource.h"
#include "SWGRewardItemResource.h"
#include <QList>
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGRewardSetResource: public SWGObject {
public:
    SWGRewardSetResource();
    SWGRewardSetResource(QString* json);
    virtual ~SWGRewardSetResource();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGRewardSetResource* fromJson(QString &jsonString);

    qint64 getCreatedDate();
    void setCreatedDate(qint64 created_date);

    QList<SWGRewardCurrencyResource*>* getCurrencyRewards();
    void setCurrencyRewards(QList<SWGRewardCurrencyResource*>* currency_rewards);

    qint32 getId();
    void setId(qint32 id);

    QList<SWGRewardItemResource*>* getItemRewards();
    void setItemRewards(QList<SWGRewardItemResource*>* item_rewards);

    QString* getLongDescription();
    void setLongDescription(QString* long_description);

    qint32 getMaxPlacing();
    void setMaxPlacing(qint32 max_placing);

    QString* getName();
    void setName(QString* name);

    QString* getShortDescription();
    void setShortDescription(QString* short_description);

    QString* getUniqueKey();
    void setUniqueKey(QString* unique_key);

    qint64 getUpdatedDate();
    void setUpdatedDate(qint64 updated_date);


private:
    qint64 created_date;
    QList<SWGRewardCurrencyResource*>* currency_rewards;
    qint32 id;
    QList<SWGRewardItemResource*>* item_rewards;
    QString* long_description;
    qint32 max_placing;
    QString* name;
    QString* short_description;
    QString* unique_key;
    qint64 updated_date;
};

} /* namespace Swagger */

#endif /* SWGRewardSetResource_H_ */
