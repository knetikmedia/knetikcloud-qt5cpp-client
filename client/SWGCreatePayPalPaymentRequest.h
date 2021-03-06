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
 * SWGCreatePayPalPaymentRequest.h
 * 
 * 
 */

#ifndef SWGCreatePayPalPaymentRequest_H_
#define SWGCreatePayPalPaymentRequest_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGCreatePayPalPaymentRequest: public SWGObject {
public:
    SWGCreatePayPalPaymentRequest();
    SWGCreatePayPalPaymentRequest(QString* json);
    virtual ~SWGCreatePayPalPaymentRequest();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGCreatePayPalPaymentRequest* fromJson(QString &jsonString);

    QString* getCancelUrl();
    void setCancelUrl(QString* cancel_url);

    qint32 getInvoiceId();
    void setInvoiceId(qint32 invoice_id);

    QString* getReturnUrl();
    void setReturnUrl(QString* return_url);


private:
    QString* cancel_url;
    qint32 invoice_id;
    QString* return_url;
};

} /* namespace Swagger */

#endif /* SWGCreatePayPalPaymentRequest_H_ */
