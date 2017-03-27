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
 * SWGUserInventoryAddRequest.h
 * 
 * 
 */

#ifndef SWGUserInventoryAddRequest_H_
#define SWGUserInventoryAddRequest_H_

#include <QJsonObject>


#include <QList>
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGUserInventoryAddRequest: public SWGObject {
public:
    SWGUserInventoryAddRequest();
    SWGUserInventoryAddRequest(QString* json);
    virtual ~SWGUserInventoryAddRequest();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGUserInventoryAddRequest* fromJson(QString &jsonString);

    QString* getNote();
    void setNote(QString* note);

    QList<QString*>* getOverrides();
    void setOverrides(QList<QString*>* overrides);

    bool getSkipInvoice();
    void setSkipInvoice(bool skip_invoice);

    QString* getSku();
    void setSku(QString* sku);


private:
    QString* note;
    QList<QString*>* overrides;
    bool skip_invoice;
    QString* sku;
};

} /* namespace Swagger */

#endif /* SWGUserInventoryAddRequest_H_ */
