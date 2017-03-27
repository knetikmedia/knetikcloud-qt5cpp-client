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
 * SWGDeltaResource.h
 * 
 * 
 */

#ifndef SWGDeltaResource_H_
#define SWGDeltaResource_H_

#include <QJsonObject>


#include <QList>
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGDeltaResource: public SWGObject {
public:
    SWGDeltaResource();
    SWGDeltaResource(QString* json);
    virtual ~SWGDeltaResource();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGDeltaResource* fromJson(QString &jsonString);

    QString* getCategoryId();
    void setCategoryId(QString* category_id);

    QString* getMediaType();
    void setMediaType(QString* media_type);

    QString* getQuestionId();
    void setQuestionId(QString* question_id);

    QString* getState();
    void setState(QString* state);

    QList<QString*>* getTags();
    void setTags(QList<QString*>* tags);

    qint64 getUpdatedDate();
    void setUpdatedDate(qint64 updated_date);


private:
    QString* category_id;
    QString* media_type;
    QString* question_id;
    QString* state;
    QList<QString*>* tags;
    qint64 updated_date;
};

} /* namespace Swagger */

#endif /* SWGDeltaResource_H_ */
