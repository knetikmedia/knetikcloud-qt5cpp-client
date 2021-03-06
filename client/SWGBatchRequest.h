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
 * SWGBatchRequest.h
 * 
 * 
 */

#ifndef SWGBatchRequest_H_
#define SWGBatchRequest_H_

#include <QJsonObject>


#include "SWGObject.h"
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGBatchRequest: public SWGObject {
public:
    SWGBatchRequest();
    SWGBatchRequest(QString* json);
    virtual ~SWGBatchRequest();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGBatchRequest* fromJson(QString &jsonString);

    SWGObject* getBody();
    void setBody(SWGObject* body);

    QString* getContentType();
    void setContentType(QString* content_type);

    QString* getMethod();
    void setMethod(QString* method);

    qint32 getTimeout();
    void setTimeout(qint32 timeout);

    QString* getToken();
    void setToken(QString* token);

    QString* getUri();
    void setUri(QString* uri);


private:
    SWGObject* body;
    QString* content_type;
    QString* method;
    qint32 timeout;
    QString* token;
    QString* uri;
};

} /* namespace Swagger */

#endif /* SWGBatchRequest_H_ */
