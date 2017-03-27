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
 * SWGAchievementDefinitionResource.h
 * 
 * 
 */

#ifndef SWGAchievementDefinitionResource_H_
#define SWGAchievementDefinitionResource_H_

#include <QJsonObject>


#include "SWGProperty.h"
#include <QList>
#include <QMap>
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGAchievementDefinitionResource: public SWGObject {
public:
    SWGAchievementDefinitionResource();
    SWGAchievementDefinitionResource(QString* json);
    virtual ~SWGAchievementDefinitionResource();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGAchievementDefinitionResource* fromJson(QString &jsonString);

    QMap<QString, SWGProperty*>* getAdditionalProperties();
    void setAdditionalProperties(QMap<QString, SWGProperty*>* additional_properties);

    qint64 getCreatedDate();
    void setCreatedDate(qint64 created_date);

    QString* getDescription();
    void setDescription(QString* description);

    bool getHidden();
    void setHidden(bool hidden);

    QString* getName();
    void setName(QString* name);

    qint32 getRequiredProgress();
    void setRequiredProgress(qint32 required_progress);

    QString* getRuleId();
    void setRuleId(QString* rule_id);

    QList<QString*>* getTags();
    void setTags(QList<QString*>* tags);

    QString* getTemplate();
    void setTemplate(QString* template);

    QString* getTriggerEventName();
    void setTriggerEventName(QString* trigger_event_name);

    qint64 getUpdatedDate();
    void setUpdatedDate(qint64 updated_date);


private:
    QMap<QString, SWGProperty*>* additional_properties;
    qint64 created_date;
    QString* description;
    bool hidden;
    QString* name;
    qint32 required_progress;
    QString* rule_id;
    QList<QString*>* tags;
    QString* template;
    QString* trigger_event_name;
    qint64 updated_date;
};

} /* namespace Swagger */

#endif /* SWGAchievementDefinitionResource_H_ */
