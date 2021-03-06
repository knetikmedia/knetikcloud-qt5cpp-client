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


#include "SWGPageResource«LocationLogResource».h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGPageResource«LocationLogResource»::SWGPageResource«LocationLogResource»(QString* json) {
    init();
    this->fromJson(*json);
}

SWGPageResource«LocationLogResource»::SWGPageResource«LocationLogResource»() {
    init();
}

SWGPageResource«LocationLogResource»::~SWGPageResource«LocationLogResource»() {
    this->cleanup();
}

void
SWGPageResource«LocationLogResource»::init() {
    content = new QList<SWGLocationLogResource*>();
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
SWGPageResource«LocationLogResource»::cleanup() {
    
    if(content != nullptr) {
        QList<SWGLocationLogResource*>* arr = content;
        foreach(SWGLocationLogResource* o, *arr) {
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

SWGPageResource«LocationLogResource»*
SWGPageResource«LocationLogResource»::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGPageResource«LocationLogResource»::fromJsonObject(QJsonObject &pJson) {
    
    ::Swagger::setValue(&content, pJson["content"], "QList", "SWGLocationLogResource");
    
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
SWGPageResource«LocationLogResource»::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGPageResource«LocationLogResource»::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    QJsonArray contentJsonArray;
    toJsonArray((QList<void*>*)content, &contentJsonArray, "content", "SWGLocationLogResource");
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

QList<SWGLocationLogResource*>*
SWGPageResource«LocationLogResource»::getContent() {
    return content;
}
void
SWGPageResource«LocationLogResource»::setContent(QList<SWGLocationLogResource*>* content) {
    this->content = content;
}

bool
SWGPageResource«LocationLogResource»::getFirst() {
    return first;
}
void
SWGPageResource«LocationLogResource»::setFirst(bool first) {
    this->first = first;
}

bool
SWGPageResource«LocationLogResource»::getLast() {
    return last;
}
void
SWGPageResource«LocationLogResource»::setLast(bool last) {
    this->last = last;
}

qint32
SWGPageResource«LocationLogResource»::getNumber() {
    return number;
}
void
SWGPageResource«LocationLogResource»::setNumber(qint32 number) {
    this->number = number;
}

qint32
SWGPageResource«LocationLogResource»::getNumberOfElements() {
    return number_of_elements;
}
void
SWGPageResource«LocationLogResource»::setNumberOfElements(qint32 number_of_elements) {
    this->number_of_elements = number_of_elements;
}

qint32
SWGPageResource«LocationLogResource»::getSize() {
    return size;
}
void
SWGPageResource«LocationLogResource»::setSize(qint32 size) {
    this->size = size;
}

QList<SWGOrder*>*
SWGPageResource«LocationLogResource»::getSort() {
    return sort;
}
void
SWGPageResource«LocationLogResource»::setSort(QList<SWGOrder*>* sort) {
    this->sort = sort;
}

qint64
SWGPageResource«LocationLogResource»::getTotalElements() {
    return total_elements;
}
void
SWGPageResource«LocationLogResource»::setTotalElements(qint64 total_elements) {
    this->total_elements = total_elements;
}

qint32
SWGPageResource«LocationLogResource»::getTotalPages() {
    return total_pages;
}
void
SWGPageResource«LocationLogResource»::setTotalPages(qint32 total_pages) {
    this->total_pages = total_pages;
}



} /* namespace Swagger */

