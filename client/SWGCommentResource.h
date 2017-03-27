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
 * SWGCommentResource.h
 * 
 * 
 */

#ifndef SWGCommentResource_H_
#define SWGCommentResource_H_

#include <QJsonObject>


#include "SWGSimpleUserResource.h"
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGCommentResource: public SWGObject {
public:
    SWGCommentResource();
    SWGCommentResource(QString* json);
    virtual ~SWGCommentResource();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGCommentResource* fromJson(QString &jsonString);

    QString* getContent();
    void setContent(QString* content);

    QString* getContext();
    void setContext(QString* context);

    qint32 getContextId();
    void setContextId(qint32 context_id);

    qint64 getCreatedDate();
    void setCreatedDate(qint64 created_date);

    qint64 getId();
    void setId(qint64 id);

    QString* getSummary();
    void setSummary(QString* summary);

    qint64 getUpdatedDate();
    void setUpdatedDate(qint64 updated_date);

    SWGSimpleUserResource* getUser();
    void setUser(SWGSimpleUserResource* user);


private:
    QString* content;
    QString* context;
    qint32 context_id;
    qint64 created_date;
    qint64 id;
    QString* summary;
    qint64 updated_date;
    SWGSimpleUserResource* user;
};

} /* namespace Swagger */

#endif /* SWGCommentResource_H_ */
