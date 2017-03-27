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
 * SWGImportJobResource.h
 * 
 * 
 */

#ifndef SWGImportJobResource_H_
#define SWGImportJobResource_H_

#include <QJsonObject>


#include "SWGImportJobOutputResource.h"
#include <QList>
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGImportJobResource: public SWGObject {
public:
    SWGImportJobResource();
    SWGImportJobResource(QString* json);
    virtual ~SWGImportJobResource();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGImportJobResource* fromJson(QString &jsonString);

    QString* getCategoryId();
    void setCategoryId(QString* category_id);

    qint64 getCreatedDate();
    void setCreatedDate(qint64 created_date);

    qint64 getId();
    void setId(qint64 id);

    QString* getName();
    void setName(QString* name);

    QList<SWGImportJobOutputResource*>* getOutput();
    void setOutput(QList<SWGImportJobOutputResource*>* output);

    qint64 getRecordCount();
    void setRecordCount(qint64 record_count);

    QString* getStatus();
    void setStatus(QString* status);

    qint64 getUpdatedDate();
    void setUpdatedDate(qint64 updated_date);

    QString* getUrl();
    void setUrl(QString* url);

    QString* getVendor();
    void setVendor(QString* vendor);


private:
    QString* category_id;
    qint64 created_date;
    qint64 id;
    QString* name;
    QList<SWGImportJobOutputResource*>* output;
    qint64 record_count;
    QString* status;
    qint64 updated_date;
    QString* url;
    QString* vendor;
};

} /* namespace Swagger */

#endif /* SWGImportJobResource_H_ */