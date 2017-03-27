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
 * SWGGroupResource.h
 * 
 * 
 */

#ifndef SWGGroupResource_H_
#define SWGGroupResource_H_

#include <QJsonObject>


#include "SWGProperty.h"
#include <QList>
#include <QMap>
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGGroupResource: public SWGObject {
public:
    SWGGroupResource();
    SWGGroupResource(QString* json);
    virtual ~SWGGroupResource();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGGroupResource* fromJson(QString &jsonString);

    QMap<QString, SWGProperty*>* getAdditionalProperties();
    void setAdditionalProperties(QMap<QString, SWGProperty*>* additional_properties);

    QString* getDescription();
    void setDescription(QString* description);

    qint32 getMemberCount();
    void setMemberCount(qint32 member_count);

    QString* getMessageOfTheDay();
    void setMessageOfTheDay(QString* message_of_the_day);

    QString* getName();
    void setName(QString* name);

    QString* getParent();
    void setParent(QString* parent);

    QString* getStatus();
    void setStatus(QString* status);

    qint32 getSubMemberCount();
    void setSubMemberCount(qint32 sub_member_count);

    QString* getTemplate();
    void setTemplate(QString* template);

    QString* getUniqueName();
    void setUniqueName(QString* unique_name);


private:
    QMap<QString, SWGProperty*>* additional_properties;
    QString* description;
    qint32 member_count;
    QString* message_of_the_day;
    QString* name;
    QString* parent;
    QString* status;
    qint32 sub_member_count;
    QString* template;
    QString* unique_name;
};

} /* namespace Swagger */

#endif /* SWGGroupResource_H_ */
