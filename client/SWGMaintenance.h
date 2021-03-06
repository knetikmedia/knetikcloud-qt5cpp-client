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
 * SWGMaintenance.h
 * 
 * 
 */

#ifndef SWGMaintenance_H_
#define SWGMaintenance_H_

#include <QJsonObject>


#include "SWGObject.h"
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGMaintenance: public SWGObject {
public:
    SWGMaintenance();
    SWGMaintenance(QString* json);
    virtual ~SWGMaintenance();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGMaintenance* fromJson(QString &jsonString);

    bool getAccessLocked();
    void setAccessLocked(bool access_locked);

    SWGObject* getDetails();
    void setDetails(SWGObject* details);

    QString* getMessage();
    void setMessage(QString* message);


private:
    bool access_locked;
    SWGObject* details;
    QString* message;
};

} /* namespace Swagger */

#endif /* SWGMaintenance_H_ */
