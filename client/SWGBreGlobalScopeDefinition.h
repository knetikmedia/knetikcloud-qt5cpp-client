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
 * SWGBreGlobalScopeDefinition.h
 * 
 * 
 */

#ifndef SWGBreGlobalScopeDefinition_H_
#define SWGBreGlobalScopeDefinition_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGBreGlobalScopeDefinition: public SWGObject {
public:
    SWGBreGlobalScopeDefinition();
    SWGBreGlobalScopeDefinition(QString* json);
    virtual ~SWGBreGlobalScopeDefinition();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGBreGlobalScopeDefinition* fromJson(QString &jsonString);

    QString* getName();
    void setName(QString* name);

    QString* getType();
    void setType(QString* type);


private:
    QString* name;
    QString* type;
};

} /* namespace Swagger */

#endif /* SWGBreGlobalScopeDefinition_H_ */
