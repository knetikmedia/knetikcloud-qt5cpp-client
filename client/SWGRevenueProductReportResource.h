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
 * SWGRevenueProductReportResource.h
 * 
 * 
 */

#ifndef SWGRevenueProductReportResource_H_
#define SWGRevenueProductReportResource_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGRevenueProductReportResource: public SWGObject {
public:
    SWGRevenueProductReportResource();
    SWGRevenueProductReportResource(QString* json);
    virtual ~SWGRevenueProductReportResource();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGRevenueProductReportResource* fromJson(QString &jsonString);

    qint32 getItemId();
    void setItemId(qint32 item_id);

    QString* getItemName();
    void setItemName(QString* item_name);

    double getRevenue();
    void setRevenue(double revenue);

    qint64 getVolume();
    void setVolume(qint64 volume);


private:
    qint32 item_id;
    QString* item_name;
    double revenue;
    qint64 volume;
};

} /* namespace Swagger */

#endif /* SWGRevenueProductReportResource_H_ */
