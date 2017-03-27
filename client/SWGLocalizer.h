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
 * SWGLocalizer.h
 * 
 * 
 */

#ifndef SWGLocalizer_H_
#define SWGLocalizer_H_

#include <QJsonObject>



#include "SWGObject.h"


namespace Swagger {

class SWGLocalizer: public SWGObject {
public:
    SWGLocalizer();
    SWGLocalizer(QString* json);
    virtual ~SWGLocalizer();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGLocalizer* fromJson(QString &jsonString);


private:
};

} /* namespace Swagger */

#endif /* SWGLocalizer_H_ */