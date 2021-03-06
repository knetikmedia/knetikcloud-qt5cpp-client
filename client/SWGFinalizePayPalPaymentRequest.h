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
 * SWGFinalizePayPalPaymentRequest.h
 * 
 * 
 */

#ifndef SWGFinalizePayPalPaymentRequest_H_
#define SWGFinalizePayPalPaymentRequest_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGFinalizePayPalPaymentRequest: public SWGObject {
public:
    SWGFinalizePayPalPaymentRequest();
    SWGFinalizePayPalPaymentRequest(QString* json);
    virtual ~SWGFinalizePayPalPaymentRequest();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGFinalizePayPalPaymentRequest* fromJson(QString &jsonString);

    qint32 getInvoiceId();
    void setInvoiceId(qint32 invoice_id);

    QString* getPayerId();
    void setPayerId(QString* payer_id);

    QString* getToken();
    void setToken(QString* token);


private:
    qint32 invoice_id;
    QString* payer_id;
    QString* token;
};

} /* namespace Swagger */

#endif /* SWGFinalizePayPalPaymentRequest_H_ */
