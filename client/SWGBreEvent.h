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
 * SWGBreEvent.h
 * 
 * 
 */

#ifndef SWGBreEvent_H_
#define SWGBreEvent_H_

#include <QJsonObject>


#include "SWGObject.h"
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGBreEvent: public SWGObject {
public:
    SWGBreEvent();
    SWGBreEvent(QString* json);
    virtual ~SWGBreEvent();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGBreEvent* fromJson(QString &jsonString);

    QString* getEventName();
    void setEventName(QString* event_name);

    SWGObject* getParams();
    void setParams(SWGObject* params);


private:
    QString* event_name;
    SWGObject* params;
};

} /* namespace Swagger */

#endif /* SWGBreEvent_H_ */
