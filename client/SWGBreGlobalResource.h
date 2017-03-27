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
 * SWGBreGlobalResource.h
 * 
 * 
 */

#ifndef SWGBreGlobalResource_H_
#define SWGBreGlobalResource_H_

#include <QJsonObject>


#include "SWGBreGlobalScopeDefinition.h"
#include <QList>
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGBreGlobalResource: public SWGObject {
public:
    SWGBreGlobalResource();
    SWGBreGlobalResource(QString* json);
    virtual ~SWGBreGlobalResource();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGBreGlobalResource* fromJson(QString &jsonString);

    QString* getDescription();
    void setDescription(QString* description);

    QString* getId();
    void setId(QString* id);

    QString* getKey();
    void setKey(QString* key);

    QString* getName();
    void setName(QString* name);

    QList<SWGBreGlobalScopeDefinition*>* getScopes();
    void setScopes(QList<SWGBreGlobalScopeDefinition*>* scopes);

    bool getSystemGlobal();
    void setSystemGlobal(bool system_global);

    QString* getType();
    void setType(QString* type);


private:
    QString* description;
    QString* id;
    QString* key;
    QString* name;
    QList<SWGBreGlobalScopeDefinition*>* scopes;
    bool system_global;
    QString* type;
};

} /* namespace Swagger */

#endif /* SWGBreGlobalResource_H_ */