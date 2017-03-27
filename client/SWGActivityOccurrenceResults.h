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
 * SWGActivityOccurrenceResults.h
 * 
 * 
 */

#ifndef SWGActivityOccurrenceResults_H_
#define SWGActivityOccurrenceResults_H_

#include <QJsonObject>


#include "SWGUserActivityResultsResource.h"
#include <QList>

#include "SWGObject.h"


namespace Swagger {

class SWGActivityOccurrenceResults: public SWGObject {
public:
    SWGActivityOccurrenceResults();
    SWGActivityOccurrenceResults(QString* json);
    virtual ~SWGActivityOccurrenceResults();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGActivityOccurrenceResults* fromJson(QString &jsonString);

    QList<SWGUserActivityResultsResource*>* getUsers();
    void setUsers(QList<SWGUserActivityResultsResource*>* users);


private:
    QList<SWGUserActivityResultsResource*>* users;
};

} /* namespace Swagger */

#endif /* SWGActivityOccurrenceResults_H_ */
