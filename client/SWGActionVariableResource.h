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
 * SWGActionVariableResource.h
 * 
 * 
 */

#ifndef SWGActionVariableResource_H_
#define SWGActionVariableResource_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGActionVariableResource: public SWGObject {
public:
    SWGActionVariableResource();
    SWGActionVariableResource(QString* json);
    virtual ~SWGActionVariableResource();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGActionVariableResource* fromJson(QString &jsonString);

    QString* getName();
    void setName(QString* name);

    bool getOptional();
    void setOptional(bool optional);

    QString* getType();
    void setType(QString* type);


private:
    QString* name;
    bool optional;
    QString* type;
};

} /* namespace Swagger */

#endif /* SWGActionVariableResource_H_ */
