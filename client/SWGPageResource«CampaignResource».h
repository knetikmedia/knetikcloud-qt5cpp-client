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
 * SWGPageResource«CampaignResource».h
 * 
 * 
 */

#ifndef SWGPageResource«CampaignResource»_H_
#define SWGPageResource«CampaignResource»_H_

#include <QJsonObject>


#include "SWGCampaignResource.h"
#include "SWGOrder.h"
#include <QList>

#include "SWGObject.h"


namespace Swagger {

class SWGPageResource«CampaignResource»: public SWGObject {
public:
    SWGPageResource«CampaignResource»();
    SWGPageResource«CampaignResource»(QString* json);
    virtual ~SWGPageResource«CampaignResource»();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGPageResource«CampaignResource»* fromJson(QString &jsonString);

    QList<SWGCampaignResource*>* getContent();
    void setContent(QList<SWGCampaignResource*>* content);

    bool getFirst();
    void setFirst(bool first);

    bool getLast();
    void setLast(bool last);

    qint32 getNumber();
    void setNumber(qint32 number);

    qint32 getNumberOfElements();
    void setNumberOfElements(qint32 number_of_elements);

    qint32 getSize();
    void setSize(qint32 size);

    QList<SWGOrder*>* getSort();
    void setSort(QList<SWGOrder*>* sort);

    qint64 getTotalElements();
    void setTotalElements(qint64 total_elements);

    qint32 getTotalPages();
    void setTotalPages(qint32 total_pages);


private:
    QList<SWGCampaignResource*>* content;
    bool first;
    bool last;
    qint32 number;
    qint32 number_of_elements;
    qint32 size;
    QList<SWGOrder*>* sort;
    qint64 total_elements;
    qint32 total_pages;
};

} /* namespace Swagger */

#endif /* SWGPageResource«CampaignResource»_H_ */
