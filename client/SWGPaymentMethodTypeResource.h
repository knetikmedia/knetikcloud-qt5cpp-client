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
 * SWGPaymentMethodTypeResource.h
 * 
 * 
 */

#ifndef SWGPaymentMethodTypeResource_H_
#define SWGPaymentMethodTypeResource_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGPaymentMethodTypeResource: public SWGObject {
public:
    SWGPaymentMethodTypeResource();
    SWGPaymentMethodTypeResource(QString* json);
    virtual ~SWGPaymentMethodTypeResource();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGPaymentMethodTypeResource* fromJson(QString &jsonString);

    qint32 getId();
    void setId(qint32 id);

    QString* getName();
    void setName(QString* name);


private:
    qint32 id;
    QString* name;
};

} /* namespace Swagger */

#endif /* SWGPaymentMethodTypeResource_H_ */
