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
 * SWGActivityOccurrenceResource.h
 * 
 * 
 */

#ifndef SWGActivityOccurrenceResource_H_
#define SWGActivityOccurrenceResource_H_

#include <QJsonObject>


#include "SWGActivityEntitlementResource.h"
#include "SWGActivityUserResource.h"
#include "SWGSelectedSettingResource.h"
#include <QList>
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGActivityOccurrenceResource: public SWGObject {
public:
    SWGActivityOccurrenceResource();
    SWGActivityOccurrenceResource(QString* json);
    virtual ~SWGActivityOccurrenceResource();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGActivityOccurrenceResource* fromJson(QString &jsonString);

    qint64 getActivityId();
    void setActivityId(qint64 activity_id);

    qint64 getChallengeActivityId();
    void setChallengeActivityId(qint64 challenge_activity_id);

    qint64 getCreatedDate();
    void setCreatedDate(qint64 created_date);

    SWGActivityEntitlementResource* getEntitlement();
    void setEntitlement(SWGActivityEntitlementResource* entitlement);

    qint64 getEventId();
    void setEventId(qint64 event_id);

    qint64 getId();
    void setId(qint64 id);

    QString* getRewardStatus();
    void setRewardStatus(QString* reward_status);

    QList<SWGSelectedSettingResource*>* getSettings();
    void setSettings(QList<SWGSelectedSettingResource*>* settings);

    bool getSimulated();
    void setSimulated(bool simulated);

    qint64 getStartDate();
    void setStartDate(qint64 start_date);

    QString* getStatus();
    void setStatus(QString* status);

    qint64 getUpdatedDate();
    void setUpdatedDate(qint64 updated_date);

    QList<SWGActivityUserResource*>* getUsers();
    void setUsers(QList<SWGActivityUserResource*>* users);


private:
    qint64 activity_id;
    qint64 challenge_activity_id;
    qint64 created_date;
    SWGActivityEntitlementResource* entitlement;
    qint64 event_id;
    qint64 id;
    QString* reward_status;
    QList<SWGSelectedSettingResource*>* settings;
    bool simulated;
    qint64 start_date;
    QString* status;
    qint64 updated_date;
    QList<SWGActivityUserResource*>* users;
};

} /* namespace Swagger */

#endif /* SWGActivityOccurrenceResource_H_ */