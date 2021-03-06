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


#include "SWGPageResource«SubscriptionTemplateResource».h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGPageResource«SubscriptionTemplateResource»::SWGPageResource«SubscriptionTemplateResource»(QString* json) {
    init();
    this->fromJson(*json);
}

SWGPageResource«SubscriptionTemplateResource»::SWGPageResource«SubscriptionTemplateResource»() {
    init();
}

SWGPageResource«SubscriptionTemplateResource»::~SWGPageResource«SubscriptionTemplateResource»() {
    this->cleanup();
}

void
SWGPageResource«SubscriptionTemplateResource»::init() {
    content = new QList<SWGSubscriptionTemplateResource*>();
    first = false;
    last = false;
    number = 0;
    number_of_elements = 0;
    size = 0;
    sort = new QList<SWGOrder*>();
    total_elements = 0L;
    total_pages = 0;
}

void
SWGPageResource«SubscriptionTemplateResource»::cleanup() {
    
    if(content != nullptr) {
        QList<SWGSubscriptionTemplateResource*>* arr = content;
        foreach(SWGSubscriptionTemplateResource* o, *arr) {
            delete o;
        }
        delete content;
    }






    if(sort != nullptr) {
        QList<SWGOrder*>* arr = sort;
        foreach(SWGOrder* o, *arr) {
            delete o;
        }
        delete sort;
    }


}

SWGPageResource«SubscriptionTemplateResource»*
SWGPageResource«SubscriptionTemplateResource»::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGPageResource«SubscriptionTemplateResource»::fromJsonObject(QJsonObject &pJson) {
    
    ::Swagger::setValue(&content, pJson["content"], "QList", "SWGSubscriptionTemplateResource");
    
    ::Swagger::setValue(&first, pJson["first"], "bool", "");
    ::Swagger::setValue(&last, pJson["last"], "bool", "");
    ::Swagger::setValue(&number, pJson["number"], "qint32", "");
    ::Swagger::setValue(&number_of_elements, pJson["number_of_elements"], "qint32", "");
    ::Swagger::setValue(&size, pJson["size"], "qint32", "");
    
    ::Swagger::setValue(&sort, pJson["sort"], "QList", "SWGOrder");
    
    ::Swagger::setValue(&total_elements, pJson["total_elements"], "qint64", "");
    ::Swagger::setValue(&total_pages, pJson["total_pages"], "qint32", "");
}

QString
SWGPageResource«SubscriptionTemplateResource»::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGPageResource«SubscriptionTemplateResource»::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    QJsonArray contentJsonArray;
    toJsonArray((QList<void*>*)content, &contentJsonArray, "content", "SWGSubscriptionTemplateResource");
    obj->insert("content", contentJsonArray);

    obj->insert("first", QJsonValue(first));

    obj->insert("last", QJsonValue(last));

    obj->insert("number", QJsonValue(number));

    obj->insert("number_of_elements", QJsonValue(number_of_elements));

    obj->insert("size", QJsonValue(size));

    QJsonArray sortJsonArray;
    toJsonArray((QList<void*>*)sort, &sortJsonArray, "sort", "SWGOrder");
    obj->insert("sort", sortJsonArray);

    obj->insert("total_elements", QJsonValue(total_elements));

    obj->insert("total_pages", QJsonValue(total_pages));

    return obj;
}

QList<SWGSubscriptionTemplateResource*>*
SWGPageResource«SubscriptionTemplateResource»::getContent() {
    return content;
}
void
SWGPageResource«SubscriptionTemplateResource»::setContent(QList<SWGSubscriptionTemplateResource*>* content) {
    this->content = content;
}

bool
SWGPageResource«SubscriptionTemplateResource»::getFirst() {
    return first;
}
void
SWGPageResource«SubscriptionTemplateResource»::setFirst(bool first) {
    this->first = first;
}

bool
SWGPageResource«SubscriptionTemplateResource»::getLast() {
    return last;
}
void
SWGPageResource«SubscriptionTemplateResource»::setLast(bool last) {
    this->last = last;
}

qint32
SWGPageResource«SubscriptionTemplateResource»::getNumber() {
    return number;
}
void
SWGPageResource«SubscriptionTemplateResource»::setNumber(qint32 number) {
    this->number = number;
}

qint32
SWGPageResource«SubscriptionTemplateResource»::getNumberOfElements() {
    return number_of_elements;
}
void
SWGPageResource«SubscriptionTemplateResource»::setNumberOfElements(qint32 number_of_elements) {
    this->number_of_elements = number_of_elements;
}

qint32
SWGPageResource«SubscriptionTemplateResource»::getSize() {
    return size;
}
void
SWGPageResource«SubscriptionTemplateResource»::setSize(qint32 size) {
    this->size = size;
}

QList<SWGOrder*>*
SWGPageResource«SubscriptionTemplateResource»::getSort() {
    return sort;
}
void
SWGPageResource«SubscriptionTemplateResource»::setSort(QList<SWGOrder*>* sort) {
    this->sort = sort;
}

qint64
SWGPageResource«SubscriptionTemplateResource»::getTotalElements() {
    return total_elements;
}
void
SWGPageResource«SubscriptionTemplateResource»::setTotalElements(qint64 total_elements) {
    this->total_elements = total_elements;
}

qint32
SWGPageResource«SubscriptionTemplateResource»::getTotalPages() {
    return total_pages;
}
void
SWGPageResource«SubscriptionTemplateResource»::setTotalPages(qint32 total_pages) {
    this->total_pages = total_pages;
}



} /* namespace Swagger */

