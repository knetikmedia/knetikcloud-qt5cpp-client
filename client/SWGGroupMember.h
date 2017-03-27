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
 * SWGGroupMember.h
 * 
 * 
 */

#ifndef SWGGroupMember_H_
#define SWGGroupMember_H_

#include <QJsonObject>


#include "SWGGroup.h"
#include "SWGUser.h"
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGGroupMember: public SWGObject {
public:
    SWGGroupMember();
    SWGGroupMember(QString* json);
    virtual ~SWGGroupMember();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGGroupMember* fromJson(QString &jsonString);

    SWGGroup* getGroup();
    void setGroup(SWGGroup* group);

    bool getSecondary();
    void setSecondary(bool secondary);

    QString* getStatus();
    void setStatus(QString* status);

    SWGUser* getUser();
    void setUser(SWGUser* user);


private:
    SWGGroup* group;
    bool secondary;
    QString* status;
    SWGUser* user;
};

} /* namespace Swagger */

#endif /* SWGGroupMember_H_ */