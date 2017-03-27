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
 * SWGOperator.h
 * 
 * 
 */

#ifndef SWGOperator_H_
#define SWGOperator_H_

#include <QJsonObject>



#include "SWGObject.h"


namespace Swagger {

class SWGOperator: public SWGObject {
public:
    SWGOperator();
    SWGOperator(QString* json);
    virtual ~SWGOperator();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGOperator* fromJson(QString &jsonString);


private:
};

} /* namespace Swagger */

#endif /* SWGOperator_H_ */
