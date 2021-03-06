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
 * SWGRefundRequest.h
 * 
 * 
 */

#ifndef SWGRefundRequest_H_
#define SWGRefundRequest_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGRefundRequest: public SWGObject {
public:
    SWGRefundRequest();
    SWGRefundRequest(QString* json);
    virtual ~SWGRefundRequest();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGRefundRequest* fromJson(QString &jsonString);

    double getAmount();
    void setAmount(double amount);

    QString* getNotes();
    void setNotes(QString* notes);

    QString* getSku();
    void setSku(QString* sku);


private:
    double amount;
    QString* notes;
    QString* sku;
};

} /* namespace Swagger */

#endif /* SWGRefundRequest_H_ */
