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


#include "SWGPageResource«Map«string,object»».h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGPageResource«Map«string,object»»::SWGPageResource«Map«string,object»»(QString* json) {
    init();
    this->fromJson(*json);
}

SWGPageResource«Map«string,object»»::SWGPageResource«Map«string,object»»() {
    init();
}

SWGPageResource«Map«string,object»»::~SWGPageResource«Map«string,object»»() {
    this->cleanup();
}

void
SWGPageResource«Map«string,object»»::init() {
    content = new QList<SWGMap«string,object»*>();
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
SWGPageResource«Map«string,object»»::cleanup() {
    
    if(content != nullptr) {
        QList<SWGMap«string,object»*>* arr = content;
        foreach(SWGMap«string,object»* o, *arr) {
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

SWGPageResource«Map«string,object»»*
SWGPageResource«Map«string,object»»::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGPageResource«Map«string,object»»::fromJsonObject(QJsonObject &pJson) {
    
    ::Swagger::setValue(&content, pJson["content"], "QList", "SWGMap«string,object»");
    
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
SWGPageResource«Map«string,object»»::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGPageResource«Map«string,object»»::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    QJsonArray contentJsonArray;
    toJsonArray((QList<void*>*)content, &contentJsonArray, "content", "SWGMap«string,object»");
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

QList<SWGMap«string,object»*>*
SWGPageResource«Map«string,object»»::getContent() {
    return content;
}
void
SWGPageResource«Map«string,object»»::setContent(QList<SWGMap«string,object»*>* content) {
    this->content = content;
}

bool
SWGPageResource«Map«string,object»»::getFirst() {
    return first;
}
void
SWGPageResource«Map«string,object»»::setFirst(bool first) {
    this->first = first;
}

bool
SWGPageResource«Map«string,object»»::getLast() {
    return last;
}
void
SWGPageResource«Map«string,object»»::setLast(bool last) {
    this->last = last;
}

qint32
SWGPageResource«Map«string,object»»::getNumber() {
    return number;
}
void
SWGPageResource«Map«string,object»»::setNumber(qint32 number) {
    this->number = number;
}

qint32
SWGPageResource«Map«string,object»»::getNumberOfElements() {
    return number_of_elements;
}
void
SWGPageResource«Map«string,object»»::setNumberOfElements(qint32 number_of_elements) {
    this->number_of_elements = number_of_elements;
}

qint32
SWGPageResource«Map«string,object»»::getSize() {
    return size;
}
void
SWGPageResource«Map«string,object»»::setSize(qint32 size) {
    this->size = size;
}

QList<SWGOrder*>*
SWGPageResource«Map«string,object»»::getSort() {
    return sort;
}
void
SWGPageResource«Map«string,object»»::setSort(QList<SWGOrder*>* sort) {
    this->sort = sort;
}

qint64
SWGPageResource«Map«string,object»»::getTotalElements() {
    return total_elements;
}
void
SWGPageResource«Map«string,object»»::setTotalElements(qint64 total_elements) {
    this->total_elements = total_elements;
}

qint32
SWGPageResource«Map«string,object»»::getTotalPages() {
    return total_pages;
}
void
SWGPageResource«Map«string,object»»::setTotalPages(qint32 total_pages) {
    this->total_pages = total_pages;
}



} /* namespace Swagger */

