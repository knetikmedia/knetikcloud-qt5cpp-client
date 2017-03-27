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
 * SWGUserTag.h
 * 
 * 
 */

#ifndef SWGUserTag_H_
#define SWGUserTag_H_

#include <QJsonObject>


#include "SWGUser.h"
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGUserTag: public SWGObject {
public:
    SWGUserTag();
    SWGUserTag(QString* json);
    virtual ~SWGUserTag();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGUserTag* fromJson(QString &jsonString);

    qint32 getId();
    void setId(qint32 id);

    QString* getTag();
    void setTag(QString* tag);

    SWGUser* getUser();
    void setUser(SWGUser* user);


private:
    qint32 id;
    QString* tag;
    SWGUser* user;
};

} /* namespace Swagger */

#endif /* SWGUserTag_H_ */