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
 * SWGUserAchievementGroupResource.h
 * 
 * 
 */

#ifndef SWGUserAchievementGroupResource_H_
#define SWGUserAchievementGroupResource_H_

#include <QJsonObject>


#include "SWGUserAchievementResource.h"
#include <QList>
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGUserAchievementGroupResource: public SWGObject {
public:
    SWGUserAchievementGroupResource();
    SWGUserAchievementGroupResource(QString* json);
    virtual ~SWGUserAchievementGroupResource();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGUserAchievementGroupResource* fromJson(QString &jsonString);

    QList<SWGUserAchievementResource*>* getAchievements();
    void setAchievements(QList<SWGUserAchievementResource*>* achievements);

    QString* getGroupName();
    void setGroupName(QString* group_name);

    QString* getId();
    void setId(QString* id);

    qint32 getProgress();
    void setProgress(qint32 progress);

    qint32 getUserId();
    void setUserId(qint32 user_id);


private:
    QList<SWGUserAchievementResource*>* achievements;
    QString* group_name;
    QString* id;
    qint32 progress;
    qint32 user_id;
};

} /* namespace Swagger */

#endif /* SWGUserAchievementGroupResource_H_ */
