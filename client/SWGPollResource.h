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
 * SWGPollResource.h
 * 
 * 
 */

#ifndef SWGPollResource_H_
#define SWGPollResource_H_

#include <QJsonObject>


#include "SWGNestedCategory.h"
#include "SWGPollAnswerResource.h"
#include "SWGProperty.h"
#include <QList>
#include <QMap>
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGPollResource: public SWGObject {
public:
    SWGPollResource();
    SWGPollResource(QString* json);
    virtual ~SWGPollResource();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGPollResource* fromJson(QString &jsonString);

    bool getActive();
    void setActive(bool active);

    QMap<QString, SWGProperty*>* getAdditionalProperties();
    void setAdditionalProperties(QMap<QString, SWGProperty*>* additional_properties);

    QList<SWGPollAnswerResource*>* getAnswers();
    void setAnswers(QList<SWGPollAnswerResource*>* answers);

    SWGNestedCategory* getCategory();
    void setCategory(SWGNestedCategory* category);

    qint64 getCreatedDate();
    void setCreatedDate(qint64 created_date);

    QString* getId();
    void setId(QString* id);

    QList<QString*>* getTags();
    void setTags(QList<QString*>* tags);

    QString* getTemplate();
    void setTemplate(QString* template);

    QString* getText();
    void setText(QString* text);

    QString* getType();
    void setType(QString* type);

    qint64 getUpdatedDate();
    void setUpdatedDate(qint64 updated_date);


private:
    bool active;
    QMap<QString, SWGProperty*>* additional_properties;
    QList<SWGPollAnswerResource*>* answers;
    SWGNestedCategory* category;
    qint64 created_date;
    QString* id;
    QList<QString*>* tags;
    QString* template;
    QString* text;
    QString* type;
    qint64 updated_date;
};

} /* namespace Swagger */

#endif /* SWGPollResource_H_ */