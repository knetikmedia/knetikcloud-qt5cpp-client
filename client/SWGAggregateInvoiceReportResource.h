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
 * SWGAggregateInvoiceReportResource.h
 * 
 * 
 */

#ifndef SWGAggregateInvoiceReportResource_H_
#define SWGAggregateInvoiceReportResource_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGAggregateInvoiceReportResource: public SWGObject {
public:
    SWGAggregateInvoiceReportResource();
    SWGAggregateInvoiceReportResource(QString* json);
    virtual ~SWGAggregateInvoiceReportResource();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGAggregateInvoiceReportResource* fromJson(QString &jsonString);

    qint64 getCount();
    void setCount(qint64 count);

    QString* getDate();
    void setDate(QString* date);

    double getRevenue();
    void setRevenue(double revenue);

    qint64 getUserCount();
    void setUserCount(qint64 user_count);


private:
    qint64 count;
    QString* date;
    double revenue;
    qint64 user_count;
};

} /* namespace Swagger */

#endif /* SWGAggregateInvoiceReportResource_H_ */