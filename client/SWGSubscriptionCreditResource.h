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
 * SWGSubscriptionCreditResource.h
 * 
 * 
 */

#ifndef SWGSubscriptionCreditResource_H_
#define SWGSubscriptionCreditResource_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGSubscriptionCreditResource: public SWGObject {
public:
    SWGSubscriptionCreditResource();
    SWGSubscriptionCreditResource(QString* json);
    virtual ~SWGSubscriptionCreditResource();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGSubscriptionCreditResource* fromJson(QString &jsonString);

    double getAmount();
    void setAmount(double amount);

    qint64 getCreatedDate();
    void setCreatedDate(qint64 created_date);

    qint32 getId();
    void setId(qint32 id);

    qint32 getInventoryId();
    void setInventoryId(qint32 inventory_id);

    QString* getReason();
    void setReason(QString* reason);


private:
    double amount;
    qint64 created_date;
    qint32 id;
    qint32 inventory_id;
    QString* reason;
};

} /* namespace Swagger */

#endif /* SWGSubscriptionCreditResource_H_ */