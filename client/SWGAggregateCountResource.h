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
 * SWGAggregateCountResource.h
 * 
 * 
 */

#ifndef SWGAggregateCountResource_H_
#define SWGAggregateCountResource_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGAggregateCountResource: public SWGObject {
public:
    SWGAggregateCountResource();
    SWGAggregateCountResource(QString* json);
    virtual ~SWGAggregateCountResource();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGAggregateCountResource* fromJson(QString &jsonString);

    qint64 getCount();
    void setCount(qint64 count);

    QString* getDate();
    void setDate(QString* date);


private:
    qint64 count;
    QString* date;
};

} /* namespace Swagger */

#endif /* SWGAggregateCountResource_H_ */
