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
 * SWGPermissionResource.h
 * 
 * 
 */

#ifndef SWGPermissionResource_H_
#define SWGPermissionResource_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGPermissionResource: public SWGObject {
public:
    SWGPermissionResource();
    SWGPermissionResource(QString* json);
    virtual ~SWGPermissionResource();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGPermissionResource* fromJson(QString &jsonString);

    qint64 getCreatedDate();
    void setCreatedDate(qint64 created_date);

    QString* getDescription();
    void setDescription(QString* description);

    bool getLocked();
    void setLocked(bool locked);

    QString* getName();
    void setName(QString* name);

    QString* getParent();
    void setParent(QString* parent);

    QString* getPermission();
    void setPermission(QString* permission);

    qint64 getUpdatedDate();
    void setUpdatedDate(qint64 updated_date);


private:
    qint64 created_date;
    QString* description;
    bool locked;
    QString* name;
    QString* parent;
    QString* permission;
    qint64 updated_date;
};

} /* namespace Swagger */

#endif /* SWGPermissionResource_H_ */
