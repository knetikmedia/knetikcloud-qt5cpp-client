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
 * SWGFinalizeBillingAgreementRequest.h
 * 
 * 
 */

#ifndef SWGFinalizeBillingAgreementRequest_H_
#define SWGFinalizeBillingAgreementRequest_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGFinalizeBillingAgreementRequest: public SWGObject {
public:
    SWGFinalizeBillingAgreementRequest();
    SWGFinalizeBillingAgreementRequest(QString* json);
    virtual ~SWGFinalizeBillingAgreementRequest();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGFinalizeBillingAgreementRequest* fromJson(QString &jsonString);

    qint32 getInvoiceId();
    void setInvoiceId(qint32 invoice_id);

    bool getNewDefault();
    void setNewDefault(bool new_default);

    QString* getPayerId();
    void setPayerId(QString* payer_id);

    QString* getToken();
    void setToken(QString* token);

    qint32 getUserId();
    void setUserId(qint32 user_id);


private:
    qint32 invoice_id;
    bool new_default;
    QString* payer_id;
    QString* token;
    qint32 user_id;
};

} /* namespace Swagger */

#endif /* SWGFinalizeBillingAgreementRequest_H_ */
