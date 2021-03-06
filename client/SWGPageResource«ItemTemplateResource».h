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
 * SWGPageResource«ItemTemplateResource».h
 * 
 * 
 */

#ifndef SWGPageResource«ItemTemplateResource»_H_
#define SWGPageResource«ItemTemplateResource»_H_

#include <QJsonObject>


#include "SWGItemTemplateResource.h"
#include "SWGOrder.h"
#include <QList>

#include "SWGObject.h"


namespace Swagger {

class SWGPageResource«ItemTemplateResource»: public SWGObject {
public:
    SWGPageResource«ItemTemplateResource»();
    SWGPageResource«ItemTemplateResource»(QString* json);
    virtual ~SWGPageResource«ItemTemplateResource»();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGPageResource«ItemTemplateResource»* fromJson(QString &jsonString);

    QList<SWGItemTemplateResource*>* getContent();
    void setContent(QList<SWGItemTemplateResource*>* content);

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
    QList<SWGItemTemplateResource*>* content;
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

#endif /* SWGPageResource«ItemTemplateResource»_H_ */
