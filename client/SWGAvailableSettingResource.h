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
 * SWGAvailableSettingResource.h
 * 
 * 
 */

#ifndef SWGAvailableSettingResource_H_
#define SWGAvailableSettingResource_H_

#include <QJsonObject>


#include "SWGSettingOption.h"
#include <QList>
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGAvailableSettingResource: public SWGObject {
public:
    SWGAvailableSettingResource();
    SWGAvailableSettingResource(QString* json);
    virtual ~SWGAvailableSettingResource();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGAvailableSettingResource* fromJson(QString &jsonString);

    bool getAdvancedOption();
    void setAdvancedOption(bool advanced_option);

    QString* getDefaultValue();
    void setDefaultValue(QString* default_value);

    QString* getDescription();
    void setDescription(QString* description);

    QString* getKey();
    void setKey(QString* key);

    QString* getName();
    void setName(QString* name);

    QList<SWGSettingOption*>* getOptions();
    void setOptions(QList<SWGSettingOption*>* options);


private:
    bool advanced_option;
    QString* default_value;
    QString* description;
    QString* key;
    QString* name;
    QList<SWGSettingOption*>* options;
};

} /* namespace Swagger */

#endif /* SWGAvailableSettingResource_H_ */