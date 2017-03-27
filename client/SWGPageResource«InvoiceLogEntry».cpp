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


#include "SWGPageResource«InvoiceLogEntry».h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGPageResource«InvoiceLogEntry»::SWGPageResource«InvoiceLogEntry»(QString* json) {
    init();
    this->fromJson(*json);
}

SWGPageResource«InvoiceLogEntry»::SWGPageResource«InvoiceLogEntry»() {
    init();
}

SWGPageResource«InvoiceLogEntry»::~SWGPageResource«InvoiceLogEntry»() {
    this->cleanup();
}

void
SWGPageResource«InvoiceLogEntry»::init() {
    content = new QList<SWGInvoiceLogEntry*>();
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
SWGPageResource«InvoiceLogEntry»::cleanup() {
    
    if(content != nullptr) {
        QList<SWGInvoiceLogEntry*>* arr = content;
        foreach(SWGInvoiceLogEntry* o, *arr) {
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

SWGPageResource«InvoiceLogEntry»*
SWGPageResource«InvoiceLogEntry»::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGPageResource«InvoiceLogEntry»::fromJsonObject(QJsonObject &pJson) {
    
    ::Swagger::setValue(&content, pJson["content"], "QList", "SWGInvoiceLogEntry");
    
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
SWGPageResource«InvoiceLogEntry»::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGPageResource«InvoiceLogEntry»::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    QJsonArray contentJsonArray;
    toJsonArray((QList<void*>*)content, &contentJsonArray, "content", "SWGInvoiceLogEntry");
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

QList<SWGInvoiceLogEntry*>*
SWGPageResource«InvoiceLogEntry»::getContent() {
    return content;
}
void
SWGPageResource«InvoiceLogEntry»::setContent(QList<SWGInvoiceLogEntry*>* content) {
    this->content = content;
}

bool
SWGPageResource«InvoiceLogEntry»::getFirst() {
    return first;
}
void
SWGPageResource«InvoiceLogEntry»::setFirst(bool first) {
    this->first = first;
}

bool
SWGPageResource«InvoiceLogEntry»::getLast() {
    return last;
}
void
SWGPageResource«InvoiceLogEntry»::setLast(bool last) {
    this->last = last;
}

qint32
SWGPageResource«InvoiceLogEntry»::getNumber() {
    return number;
}
void
SWGPageResource«InvoiceLogEntry»::setNumber(qint32 number) {
    this->number = number;
}

qint32
SWGPageResource«InvoiceLogEntry»::getNumberOfElements() {
    return number_of_elements;
}
void
SWGPageResource«InvoiceLogEntry»::setNumberOfElements(qint32 number_of_elements) {
    this->number_of_elements = number_of_elements;
}

qint32
SWGPageResource«InvoiceLogEntry»::getSize() {
    return size;
}
void
SWGPageResource«InvoiceLogEntry»::setSize(qint32 size) {
    this->size = size;
}

QList<SWGOrder*>*
SWGPageResource«InvoiceLogEntry»::getSort() {
    return sort;
}
void
SWGPageResource«InvoiceLogEntry»::setSort(QList<SWGOrder*>* sort) {
    this->sort = sort;
}

qint64
SWGPageResource«InvoiceLogEntry»::getTotalElements() {
    return total_elements;
}
void
SWGPageResource«InvoiceLogEntry»::setTotalElements(qint64 total_elements) {
    this->total_elements = total_elements;
}

qint32
SWGPageResource«InvoiceLogEntry»::getTotalPages() {
    return total_pages;
}
void
SWGPageResource«InvoiceLogEntry»::setTotalPages(qint32 total_pages) {
    this->total_pages = total_pages;
}



} /* namespace Swagger */

