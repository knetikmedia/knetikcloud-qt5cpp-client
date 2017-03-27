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
 * SWGCampaignResource.h
 * 
 * 
 */

#ifndef SWGCampaignResource_H_
#define SWGCampaignResource_H_

#include <QJsonObject>


#include "SWGProperty.h"
#include "SWGRewardSetResource.h"
#include <QList>
#include <QMap>
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGCampaignResource: public SWGObject {
public:
    SWGCampaignResource();
    SWGCampaignResource(QString* json);
    virtual ~SWGCampaignResource();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGCampaignResource* fromJson(QString &jsonString);

    bool getActive();
    void setActive(bool active);

    QMap<QString, SWGProperty*>* getAdditionalProperties();
    void setAdditionalProperties(QMap<QString, SWGProperty*>* additional_properties);

    qint64 getCreatedDate();
    void setCreatedDate(qint64 created_date);

    qint64 getId();
    void setId(qint64 id);

    QString* getLeaderboardStrategy();
    void setLeaderboardStrategy(QString* leaderboard_strategy);

    QString* getLongDescription();
    void setLongDescription(QString* long_description);

    QString* getName();
    void setName(QString* name);

    QString* getNextChallenge();
    void setNextChallenge(QString* next_challenge);

    qint64 getNextChallengeDate();
    void setNextChallengeDate(qint64 next_challenge_date);

    SWGRewardSetResource* getRewardSet();
    void setRewardSet(SWGRewardSetResource* reward_set);

    QString* getRewardStatus();
    void setRewardStatus(QString* reward_status);

    QString* getShortDescription();
    void setShortDescription(QString* short_description);

    QString* getTemplate();
    void setTemplate(QString* template);

    qint64 getUpdatedDate();
    void setUpdatedDate(qint64 updated_date);


private:
    bool active;
    QMap<QString, SWGProperty*>* additional_properties;
    qint64 created_date;
    qint64 id;
    QString* leaderboard_strategy;
    QString* long_description;
    QString* name;
    QString* next_challenge;
    qint64 next_challenge_date;
    SWGRewardSetResource* reward_set;
    QString* reward_status;
    QString* short_description;
    QString* template;
    qint64 updated_date;
};

} /* namespace Swagger */

#endif /* SWGCampaignResource_H_ */