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
 * SWGBooleanResource.h
 * 
 * 
 */

#ifndef SWGBooleanResource_H_
#define SWGBooleanResource_H_

#include <QJsonObject>



#include "SWGObject.h"


namespace Swagger {

class SWGBooleanResource: public SWGObject {
public:
    SWGBooleanResource();
    SWGBooleanResource(QString* json);
    virtual ~SWGBooleanResource();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGBooleanResource* fromJson(QString &jsonString);

    bool getValue();
    void setValue(bool value);


private:
    bool value;
};

} /* namespace Swagger */

#endif /* SWGBooleanResource_H_ */
