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
 * SWGErrorResource.h
 * 
 * 
 */

#ifndef SWGErrorResource_H_
#define SWGErrorResource_H_

#include <QJsonObject>


#include "SWGObject.h"
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGErrorResource: public SWGObject {
public:
    SWGErrorResource();
    SWGErrorResource(QString* json);
    virtual ~SWGErrorResource();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGErrorResource* fromJson(QString &jsonString);

    SWGObject* getDetails();
    void setDetails(SWGObject* details);

    SWGObject* getField();
    void setField(SWGObject* field);

    QString* getMessage();
    void setMessage(QString* message);


private:
    SWGObject* details;
    SWGObject* field;
    QString* message;
};

} /* namespace Swagger */

#endif /* SWGErrorResource_H_ */
