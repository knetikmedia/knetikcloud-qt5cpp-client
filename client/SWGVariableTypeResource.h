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
 * SWGVariableTypeResource.h
 * 
 * 
 */

#ifndef SWGVariableTypeResource_H_
#define SWGVariableTypeResource_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGVariableTypeResource: public SWGObject {
public:
    SWGVariableTypeResource();
    SWGVariableTypeResource(QString* json);
    virtual ~SWGVariableTypeResource();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGVariableTypeResource* fromJson(QString &jsonString);

    QString* getBase();
    void setBase(QString* base);

    QString* getName();
    void setName(QString* name);


private:
    QString* base;
    QString* name;
};

} /* namespace Swagger */

#endif /* SWGVariableTypeResource_H_ */
