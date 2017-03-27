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
 * SWGLanguage.h
 * 
 * 
 */

#ifndef SWGLanguage_H_
#define SWGLanguage_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGLanguage: public SWGObject {
public:
    SWGLanguage();
    SWGLanguage(QString* json);
    virtual ~SWGLanguage();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGLanguage* fromJson(QString &jsonString);

    QString* getCode();
    void setCode(QString* code);

    qint64 getDateCreated();
    void setDateCreated(qint64 date_created);

    qint64 getDateUpdated();
    void setDateUpdated(qint64 date_updated);

    QString* getDescription();
    void setDescription(QString* description);

    QString* getDirection();
    void setDirection(QString* direction);

    qint32 getId();
    void setId(qint32 id);

    bool getIsPrimary();
    void setIsPrimary(bool is_primary);

    QString* getName();
    void setName(QString* name);


private:
    QString* code;
    qint64 date_created;
    qint64 date_updated;
    QString* description;
    QString* direction;
    qint32 id;
    bool is_primary;
    QString* name;
};

} /* namespace Swagger */

#endif /* SWGLanguage_H_ */
