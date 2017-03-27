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
 * SWGActivityEntitlementResource.h
 * 
 * 
 */

#ifndef SWGActivityEntitlementResource_H_
#define SWGActivityEntitlementResource_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGActivityEntitlementResource: public SWGObject {
public:
    SWGActivityEntitlementResource();
    SWGActivityEntitlementResource(QString* json);
    virtual ~SWGActivityEntitlementResource();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGActivityEntitlementResource* fromJson(QString &jsonString);

    QString* getCurrencyCode();
    void setCurrencyCode(QString* currency_code);

    qint32 getItemId();
    void setItemId(qint32 item_id);

    QString* getName();
    void setName(QString* name);

    double getPrice();
    void setPrice(double price);

    QString* getSku();
    void setSku(QString* sku);


private:
    QString* currency_code;
    qint32 item_id;
    QString* name;
    double price;
    QString* sku;
};

} /* namespace Swagger */

#endif /* SWGActivityEntitlementResource_H_ */
