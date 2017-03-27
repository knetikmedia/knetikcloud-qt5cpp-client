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
 * SWGForwardLog.h
 * 
 * 
 */

#ifndef SWGForwardLog_H_
#define SWGForwardLog_H_

#include <QJsonObject>


#include "SWGObject.h"
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGForwardLog: public SWGObject {
public:
    SWGForwardLog();
    SWGForwardLog(QString* json);
    virtual ~SWGForwardLog();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGForwardLog* fromJson(QString &jsonString);

    qint64 getEndDate();
    void setEndDate(qint64 end_date);

    QString* getErrorMsg();
    void setErrorMsg(QString* error_msg);

    qint32 getHttpStatusCode();
    void setHttpStatusCode(qint32 http_status_code);

    QString* getId();
    void setId(QString* id);

    SWGObject* getPayload();
    void setPayload(SWGObject* payload);

    QString* getResponse();
    void setResponse(QString* response);

    qint32 getRetryCount();
    void setRetryCount(qint32 retry_count);

    qint64 getStartDate();
    void setStartDate(qint64 start_date);

    QString* getUrl();
    void setUrl(QString* url);


private:
    qint64 end_date;
    QString* error_msg;
    qint32 http_status_code;
    QString* id;
    SWGObject* payload;
    QString* response;
    qint32 retry_count;
    qint64 start_date;
    QString* url;
};

} /* namespace Swagger */

#endif /* SWGForwardLog_H_ */
