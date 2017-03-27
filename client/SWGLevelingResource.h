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
 * SWGLevelingResource.h
 * 
 * 
 */

#ifndef SWGLevelingResource_H_
#define SWGLevelingResource_H_

#include <QJsonObject>


#include "SWGProperty.h"
#include "SWGTierResource.h"
#include <QList>
#include <QMap>
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGLevelingResource: public SWGObject {
public:
    SWGLevelingResource();
    SWGLevelingResource(QString* json);
    virtual ~SWGLevelingResource();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGLevelingResource* fromJson(QString &jsonString);

    QMap<QString, SWGProperty*>* getAdditionalProperties();
    void setAdditionalProperties(QMap<QString, SWGProperty*>* additional_properties);

    qint64 getCreatedDate();
    void setCreatedDate(qint64 created_date);

    QString* getDescription();
    void setDescription(QString* description);

    QString* getName();
    void setName(QString* name);

    QList<SWGTierResource*>* getTiers();
    void setTiers(QList<SWGTierResource*>* tiers);

    qint64 getUpdatedDate();
    void setUpdatedDate(qint64 updated_date);


private:
    QMap<QString, SWGProperty*>* additional_properties;
    qint64 created_date;
    QString* description;
    QString* name;
    QList<SWGTierResource*>* tiers;
    qint64 updated_date;
};

} /* namespace Swagger */

#endif /* SWGLevelingResource_H_ */