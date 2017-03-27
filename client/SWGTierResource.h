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
 * SWGTierResource.h
 * 
 * 
 */

#ifndef SWGTierResource_H_
#define SWGTierResource_H_

#include <QJsonObject>


#include "SWGProperty.h"
#include <QList>
#include <QMap>
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGTierResource: public SWGObject {
public:
    SWGTierResource();
    SWGTierResource(QString* json);
    virtual ~SWGTierResource();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGTierResource* fromJson(QString &jsonString);

    QMap<QString, SWGProperty*>* getAdditionalProperties();
    void setAdditionalProperties(QMap<QString, SWGProperty*>* additional_properties);

    QString* getName();
    void setName(QString* name);

    qint32 getRequiredProgress();
    void setRequiredProgress(qint32 required_progress);

    QString* getTriggerEventName();
    void setTriggerEventName(QString* trigger_event_name);


private:
    QMap<QString, SWGProperty*>* additional_properties;
    QString* name;
    qint32 required_progress;
    QString* trigger_event_name;
};

} /* namespace Swagger */

#endif /* SWGTierResource_H_ */