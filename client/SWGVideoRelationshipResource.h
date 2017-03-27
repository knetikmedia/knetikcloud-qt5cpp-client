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
 * SWGVideoRelationshipResource.h
 * 
 * 
 */

#ifndef SWGVideoRelationshipResource_H_
#define SWGVideoRelationshipResource_H_

#include <QJsonObject>


#include "SWGSimpleReferenceResource«long».h"
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGVideoRelationshipResource: public SWGObject {
public:
    SWGVideoRelationshipResource();
    SWGVideoRelationshipResource(QString* json);
    virtual ~SWGVideoRelationshipResource();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGVideoRelationshipResource* fromJson(QString &jsonString);

    SWGSimpleReferenceResource«long»* getFrom();
    void setFrom(SWGSimpleReferenceResource«long»* from);

    qint64 getId();
    void setId(qint64 id);

    QString* getRelationshipDetails();
    void setRelationshipDetails(QString* relationship_details);

    SWGSimpleReferenceResource«long»* getTo();
    void setTo(SWGSimpleReferenceResource«long»* to);


private:
    SWGSimpleReferenceResource«long»* from;
    qint64 id;
    QString* relationship_details;
    SWGSimpleReferenceResource«long»* to;
};

} /* namespace Swagger */

#endif /* SWGVideoRelationshipResource_H_ */
