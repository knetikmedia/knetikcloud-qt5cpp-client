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
 * SWGDispositionResource.h
 * 
 * 
 */

#ifndef SWGDispositionResource_H_
#define SWGDispositionResource_H_

#include <QJsonObject>


#include "SWGSimpleUserResource.h"
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGDispositionResource: public SWGObject {
public:
    SWGDispositionResource();
    SWGDispositionResource(QString* json);
    virtual ~SWGDispositionResource();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGDispositionResource* fromJson(QString &jsonString);

    QString* getContext();
    void setContext(QString* context);

    QString* getContextId();
    void setContextId(QString* context_id);

    qint64 getCreatedDate();
    void setCreatedDate(qint64 created_date);

    qint64 getId();
    void setId(qint64 id);

    QString* getName();
    void setName(QString* name);

    SWGSimpleUserResource* getUser();
    void setUser(SWGSimpleUserResource* user);


private:
    QString* context;
    QString* context_id;
    qint64 created_date;
    qint64 id;
    QString* name;
    SWGSimpleUserResource* user;
};

} /* namespace Swagger */

#endif /* SWGDispositionResource_H_ */