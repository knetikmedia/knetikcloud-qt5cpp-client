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
 * SWGPollResponseResource.h
 * 
 * 
 */

#ifndef SWGPollResponseResource_H_
#define SWGPollResponseResource_H_

#include <QJsonObject>


#include "SWGSimpleUserResource.h"
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGPollResponseResource: public SWGObject {
public:
    SWGPollResponseResource();
    SWGPollResponseResource(QString* json);
    virtual ~SWGPollResponseResource();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGPollResponseResource* fromJson(QString &jsonString);

    QString* getAnswer();
    void setAnswer(QString* answer);

    qint64 getAnsweredDate();
    void setAnsweredDate(qint64 answered_date);

    QString* getId();
    void setId(QString* id);

    QString* getPollId();
    void setPollId(QString* poll_id);

    SWGSimpleUserResource* getUser();
    void setUser(SWGSimpleUserResource* user);


private:
    QString* answer;
    qint64 answered_date;
    QString* id;
    QString* poll_id;
    SWGSimpleUserResource* user;
};

} /* namespace Swagger */

#endif /* SWGPollResponseResource_H_ */