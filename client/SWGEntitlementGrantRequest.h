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
 * SWGEntitlementGrantRequest.h
 * 
 * 
 */

#ifndef SWGEntitlementGrantRequest_H_
#define SWGEntitlementGrantRequest_H_

#include <QJsonObject>



#include "SWGObject.h"


namespace Swagger {

class SWGEntitlementGrantRequest: public SWGObject {
public:
    SWGEntitlementGrantRequest();
    SWGEntitlementGrantRequest(QString* json);
    virtual ~SWGEntitlementGrantRequest();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGEntitlementGrantRequest* fromJson(QString &jsonString);

    qint32 getEntitlementId();
    void setEntitlementId(qint32 entitlement_id);


private:
    qint32 entitlement_id;
};

} /* namespace Swagger */

#endif /* SWGEntitlementGrantRequest_H_ */
