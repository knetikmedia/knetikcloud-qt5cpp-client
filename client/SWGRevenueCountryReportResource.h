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
 * SWGRevenueCountryReportResource.h
 * 
 * 
 */

#ifndef SWGRevenueCountryReportResource_H_
#define SWGRevenueCountryReportResource_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGRevenueCountryReportResource: public SWGObject {
public:
    SWGRevenueCountryReportResource();
    SWGRevenueCountryReportResource(QString* json);
    virtual ~SWGRevenueCountryReportResource();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGRevenueCountryReportResource* fromJson(QString &jsonString);

    QString* getCountry();
    void setCountry(QString* country);

    double getRevenue();
    void setRevenue(double revenue);

    qint64 getVolume();
    void setVolume(qint64 volume);


private:
    QString* country;
    double revenue;
    qint64 volume;
};

} /* namespace Swagger */

#endif /* SWGRevenueCountryReportResource_H_ */
