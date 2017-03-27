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
 * SWGVersion.h
 * 
 * 
 */

#ifndef SWGVersion_H_
#define SWGVersion_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGVersion: public SWGObject {
public:
    SWGVersion();
    SWGVersion(QString* json);
    virtual ~SWGVersion();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGVersion* fromJson(QString &jsonString);

    QString* getVersion();
    void setVersion(QString* version);


private:
    QString* version;
};

} /* namespace Swagger */

#endif /* SWGVersion_H_ */