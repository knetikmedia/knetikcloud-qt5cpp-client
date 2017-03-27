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
 * SWGBehaviorDefinitionResource.h
 * 
 * 
 */

#ifndef SWGBehaviorDefinitionResource_H_
#define SWGBehaviorDefinitionResource_H_

#include <QJsonObject>


#include "SWGBehavior.h"
#include "SWGPropertyDefinitionResource.h"
#include <QList>
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGBehaviorDefinitionResource: public SWGObject {
public:
    SWGBehaviorDefinitionResource();
    SWGBehaviorDefinitionResource(QString* json);
    virtual ~SWGBehaviorDefinitionResource();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGBehaviorDefinitionResource* fromJson(QString &jsonString);

    QString* getDescription();
    void setDescription(QString* description);

    QList<SWGBehavior*>* getPrerequisiteBehaviors();
    void setPrerequisiteBehaviors(QList<SWGBehavior*>* prerequisite_behaviors);

    QList<SWGPropertyDefinitionResource*>* getProperties();
    void setProperties(QList<SWGPropertyDefinitionResource*>* properties);

    QString* getTypeHint();
    void setTypeHint(QString* type_hint);


private:
    QString* description;
    QList<SWGBehavior*>* prerequisite_behaviors;
    QList<SWGPropertyDefinitionResource*>* properties;
    QString* type_hint;
};

} /* namespace Swagger */

#endif /* SWGBehaviorDefinitionResource_H_ */
