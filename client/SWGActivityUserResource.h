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
 * SWGActivityUserResource.h
 * 
 * 
 */

#ifndef SWGActivityUserResource_H_
#define SWGActivityUserResource_H_

#include <QJsonObject>


#include "SWGMetricResource.h"
#include "SWGSimpleUserResource.h"
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGActivityUserResource: public SWGObject {
public:
    SWGActivityUserResource();
    SWGActivityUserResource(QString* json);
    virtual ~SWGActivityUserResource();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGActivityUserResource* fromJson(QString &jsonString);

    bool getHost();
    void setHost(bool host);

    qint64 getId();
    void setId(qint64 id);

    qint64 getJoinedDate();
    void setJoinedDate(qint64 joined_date);

    qint64 getLeftDate();
    void setLeftDate(qint64 left_date);

    SWGMetricResource* getMetric();
    void setMetric(SWGMetricResource* metric);

    QString* getStatus();
    void setStatus(QString* status);

    SWGSimpleUserResource* getUser();
    void setUser(SWGSimpleUserResource* user);


private:
    bool host;
    qint64 id;
    qint64 joined_date;
    qint64 left_date;
    SWGMetricResource* metric;
    QString* status;
    SWGSimpleUserResource* user;
};

} /* namespace Swagger */

#endif /* SWGActivityUserResource_H_ */
