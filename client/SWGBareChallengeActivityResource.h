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
 * SWGBareChallengeActivityResource.h
 * 
 * 
 */

#ifndef SWGBareChallengeActivityResource_H_
#define SWGBareChallengeActivityResource_H_

#include <QJsonObject>



#include "SWGObject.h"


namespace Swagger {

class SWGBareChallengeActivityResource: public SWGObject {
public:
    SWGBareChallengeActivityResource();
    SWGBareChallengeActivityResource(QString* json);
    virtual ~SWGBareChallengeActivityResource();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGBareChallengeActivityResource* fromJson(QString &jsonString);

    qint64 getActivityId();
    void setActivityId(qint64 activity_id);

    qint64 getChallengeId();
    void setChallengeId(qint64 challenge_id);

    qint64 getId();
    void setId(qint64 id);


private:
    qint64 activity_id;
    qint64 challenge_id;
    qint64 id;
};

} /* namespace Swagger */

#endif /* SWGBareChallengeActivityResource_H_ */
