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
 * SWGOptimalPaymentRequest.h
 * 
 * 
 */

#ifndef SWGOptimalPaymentRequest_H_
#define SWGOptimalPaymentRequest_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGOptimalPaymentRequest: public SWGObject {
public:
    SWGOptimalPaymentRequest();
    SWGOptimalPaymentRequest(QString* json);
    virtual ~SWGOptimalPaymentRequest();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGOptimalPaymentRequest* fromJson(QString &jsonString);

    QString* getEmail();
    void setEmail(QString* email);

    QString* getFirstName();
    void setFirstName(QString* first_name);

    qint32 getInvoiceId();
    void setInvoiceId(qint32 invoice_id);

    QString* getLastName();
    void setLastName(QString* last_name);

    QString* getOnDecline();
    void setOnDecline(QString* on_decline);

    QString* getOnError();
    void setOnError(QString* on_error);

    QString* getOnSuccess();
    void setOnSuccess(QString* on_success);


private:
    QString* email;
    QString* first_name;
    qint32 invoice_id;
    QString* last_name;
    QString* on_decline;
    QString* on_error;
    QString* on_success;
};

} /* namespace Swagger */

#endif /* SWGOptimalPaymentRequest_H_ */
