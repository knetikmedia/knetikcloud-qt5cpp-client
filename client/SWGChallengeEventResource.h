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
 * SWGChallengeEventResource.h
 * 
 * 
 */

#ifndef SWGChallengeEventResource_H_
#define SWGChallengeEventResource_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGChallengeEventResource: public SWGObject {
public:
    SWGChallengeEventResource();
    SWGChallengeEventResource(QString* json);
    virtual ~SWGChallengeEventResource();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGChallengeEventResource* fromJson(QString &jsonString);

    qint64 getChallengeId();
    void setChallengeId(qint64 challenge_id);

    qint64 getEndDate();
    void setEndDate(qint64 end_date);

    qint64 getId();
    void setId(qint64 id);

    QString* getRewardStatus();
    void setRewardStatus(QString* reward_status);

    qint64 getStartDate();
    void setStartDate(qint64 start_date);


private:
    qint64 challenge_id;
    qint64 end_date;
    qint64 id;
    QString* reward_status;
    qint64 start_date;
};

} /* namespace Swagger */

#endif /* SWGChallengeEventResource_H_ */
