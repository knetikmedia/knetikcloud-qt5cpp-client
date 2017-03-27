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
 * SWGAchievementProgressUpdateRequest.h
 * 
 * 
 */

#ifndef SWGAchievementProgressUpdateRequest_H_
#define SWGAchievementProgressUpdateRequest_H_

#include <QJsonObject>



#include "SWGObject.h"


namespace Swagger {

class SWGAchievementProgressUpdateRequest: public SWGObject {
public:
    SWGAchievementProgressUpdateRequest();
    SWGAchievementProgressUpdateRequest(QString* json);
    virtual ~SWGAchievementProgressUpdateRequest();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGAchievementProgressUpdateRequest* fromJson(QString &jsonString);

    bool getIncrementValue();
    void setIncrementValue(bool increment_value);

    qint32 getProgressValue();
    void setProgressValue(qint32 progress_value);


private:
    bool increment_value;
    qint32 progress_value;
};

} /* namespace Swagger */

#endif /* SWGAchievementProgressUpdateRequest_H_ */