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
 * SWGCountry.h
 * 
 * 
 */

#ifndef SWGCountry_H_
#define SWGCountry_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGCountry: public SWGObject {
public:
    SWGCountry();
    SWGCountry(QString* json);
    virtual ~SWGCountry();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGCountry* fromJson(QString &jsonString);

    qint32 getId();
    void setId(qint32 id);

    QString* getIso2();
    void setIso2(QString* iso2);

    QString* getIso3();
    void setIso3(QString* iso3);

    QString* getName();
    void setName(QString* name);


private:
    qint32 id;
    QString* iso2;
    QString* iso3;
    QString* name;
};

} /* namespace Swagger */

#endif /* SWGCountry_H_ */
