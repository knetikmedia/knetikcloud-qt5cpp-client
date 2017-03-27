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
 * SWGStoreItemTemplateResource.h
 * 
 * 
 */

#ifndef SWGStoreItemTemplateResource_H_
#define SWGStoreItemTemplateResource_H_

#include <QJsonObject>


#include "SWGItemBehaviorDefinitionResource.h"
#include "SWGPropertyDefinitionResource.h"
#include "SWGTemplateResource.h"
#include <QList>
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGStoreItemTemplateResource: public SWGObject {
public:
    SWGStoreItemTemplateResource();
    SWGStoreItemTemplateResource(QString* json);
    virtual ~SWGStoreItemTemplateResource();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGStoreItemTemplateResource* fromJson(QString &jsonString);

    QList<SWGItemBehaviorDefinitionResource*>* getBehaviors();
    void setBehaviors(QList<SWGItemBehaviorDefinitionResource*>* behaviors);

    qint64 getCreatedDate();
    void setCreatedDate(qint64 created_date);

    QString* getId();
    void setId(QString* id);

    QString* getName();
    void setName(QString* name);

    QList<SWGPropertyDefinitionResource*>* getProperties();
    void setProperties(QList<SWGPropertyDefinitionResource*>* properties);

    SWGTemplateResource* getSkuTemplate();
    void setSkuTemplate(SWGTemplateResource* sku_template);

    qint64 getUpdatedDate();
    void setUpdatedDate(qint64 updated_date);


private:
    QList<SWGItemBehaviorDefinitionResource*>* behaviors;
    qint64 created_date;
    QString* id;
    QString* name;
    QList<SWGPropertyDefinitionResource*>* properties;
    SWGTemplateResource* sku_template;
    qint64 updated_date;
};

} /* namespace Swagger */

#endif /* SWGStoreItemTemplateResource_H_ */
