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
 * SWGAnswerResource.h
 * 
 * 
 */

#ifndef SWGAnswerResource_H_
#define SWGAnswerResource_H_

#include <QJsonObject>


#include "SWGProperty.h"
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGAnswerResource: public SWGObject {
public:
    SWGAnswerResource();
    SWGAnswerResource(QString* json);
    virtual ~SWGAnswerResource();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGAnswerResource* fromJson(QString &jsonString);

    SWGProperty* getAnswer();
    void setAnswer(SWGProperty* answer);

    bool getCorrect();
    void setCorrect(bool correct);

    QString* getId();
    void setId(QString* id);


private:
    SWGProperty* answer;
    bool correct;
    QString* id;
};

} /* namespace Swagger */

#endif /* SWGAnswerResource_H_ */
