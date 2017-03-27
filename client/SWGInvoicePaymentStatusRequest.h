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
 * SWGInvoicePaymentStatusRequest.h
 * 
 * 
 */

#ifndef SWGInvoicePaymentStatusRequest_H_
#define SWGInvoicePaymentStatusRequest_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGInvoicePaymentStatusRequest: public SWGObject {
public:
    SWGInvoicePaymentStatusRequest();
    SWGInvoicePaymentStatusRequest(QString* json);
    virtual ~SWGInvoicePaymentStatusRequest();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGInvoicePaymentStatusRequest* fromJson(QString &jsonString);

    qint32 getPaymentMethodId();
    void setPaymentMethodId(qint32 payment_method_id);

    QString* getStatus();
    void setStatus(QString* status);


private:
    qint32 payment_method_id;
    QString* status;
};

} /* namespace Swagger */

#endif /* SWGInvoicePaymentStatusRequest_H_ */