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
 * SWGPageResource«PollResource».h
 * 
 * 
 */

#ifndef SWGPageResource«PollResource»_H_
#define SWGPageResource«PollResource»_H_

#include <QJsonObject>


#include "SWGOrder.h"
#include "SWGPollResource.h"
#include <QList>

#include "SWGObject.h"


namespace Swagger {

class SWGPageResource«PollResource»: public SWGObject {
public:
    SWGPageResource«PollResource»();
    SWGPageResource«PollResource»(QString* json);
    virtual ~SWGPageResource«PollResource»();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGPageResource«PollResource»* fromJson(QString &jsonString);

    QList<SWGPollResource*>* getContent();
    void setContent(QList<SWGPollResource*>* content);

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
    QList<SWGPollResource*>* content;
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

#endif /* SWGPageResource«PollResource»_H_ */
