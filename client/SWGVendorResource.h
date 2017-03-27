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
 * SWGVendorResource.h
 * 
 * 
 */

#ifndef SWGVendorResource_H_
#define SWGVendorResource_H_

#include <QJsonObject>


#include "SWGProperty.h"
#include <QList>
#include <QMap>
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGVendorResource: public SWGObject {
public:
    SWGVendorResource();
    SWGVendorResource(QString* json);
    virtual ~SWGVendorResource();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGVendorResource* fromJson(QString &jsonString);

    bool getActive();
    void setActive(bool active);

    QMap<QString, SWGProperty*>* getAdditionalProperties();
    void setAdditionalProperties(QMap<QString, SWGProperty*>* additional_properties);

    qint64 getCreateDate();
    void setCreateDate(qint64 create_date);

    QString* getDescription();
    void setDescription(QString* description);

    qint32 getId();
    void setId(qint32 id);

    QString* getImageUrl();
    void setImageUrl(QString* image_url);

    bool getManualApproval();
    void setManualApproval(bool manual_approval);

    QString* getName();
    void setName(QString* name);

    QString* getPrimaryContactEmail();
    void setPrimaryContactEmail(QString* primary_contact_email);

    QString* getPrimaryContactName();
    void setPrimaryContactName(QString* primary_contact_name);

    QString* getPrimaryContactPhone();
    void setPrimaryContactPhone(QString* primary_contact_phone);

    QString* getSalesEmail();
    void setSalesEmail(QString* sales_email);

    QString* getSupportEmail();
    void setSupportEmail(QString* support_email);

    QString* getTemplate();
    void setTemplate(QString* template);

    qint64 getUpdateDate();
    void setUpdateDate(qint64 update_date);

    QString* getUrl();
    void setUrl(QString* url);


private:
    bool active;
    QMap<QString, SWGProperty*>* additional_properties;
    qint64 create_date;
    QString* description;
    qint32 id;
    QString* image_url;
    bool manual_approval;
    QString* name;
    QString* primary_contact_email;
    QString* primary_contact_name;
    QString* primary_contact_phone;
    QString* sales_email;
    QString* support_email;
    QString* template;
    qint64 update_date;
    QString* url;
};

} /* namespace Swagger */

#endif /* SWGVendorResource_H_ */