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
 * SWGItemBehaviorDefinitionResource.h
 * 
 * 
 */

#ifndef SWGItemBehaviorDefinitionResource_H_
#define SWGItemBehaviorDefinitionResource_H_

#include <QJsonObject>


#include "SWGBehavior.h"

#include "SWGObject.h"


namespace Swagger {

class SWGItemBehaviorDefinitionResource: public SWGObject {
public:
    SWGItemBehaviorDefinitionResource();
    SWGItemBehaviorDefinitionResource(QString* json);
    virtual ~SWGItemBehaviorDefinitionResource();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGItemBehaviorDefinitionResource* fromJson(QString &jsonString);

    SWGBehavior* getBehavior();
    void setBehavior(SWGBehavior* behavior);

    bool getModifiable();
    void setModifiable(bool modifiable);

    bool getRequired();
    void setRequired(bool required);


private:
    SWGBehavior* behavior;
    bool modifiable;
    bool required;
};

} /* namespace Swagger */

#endif /* SWGItemBehaviorDefinitionResource_H_ */