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


#include "SWGPageResource«RoleResource».h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGPageResource«RoleResource»::SWGPageResource«RoleResource»(QString* json) {
    init();
    this->fromJson(*json);
}

SWGPageResource«RoleResource»::SWGPageResource«RoleResource»() {
    init();
}

SWGPageResource«RoleResource»::~SWGPageResource«RoleResource»() {
    this->cleanup();
}

void
SWGPageResource«RoleResource»::init() {
    content = new QList<SWGRoleResource*>();
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
SWGPageResource«RoleResource»::cleanup() {
    
    if(content != nullptr) {
        QList<SWGRoleResource*>* arr = content;
        foreach(SWGRoleResource* o, *arr) {
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

SWGPageResource«RoleResource»*
SWGPageResource«RoleResource»::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGPageResource«RoleResource»::fromJsonObject(QJsonObject &pJson) {
    
    ::Swagger::setValue(&content, pJson["content"], "QList", "SWGRoleResource");
    
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
SWGPageResource«RoleResource»::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGPageResource«RoleResource»::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    QJsonArray contentJsonArray;
    toJsonArray((QList<void*>*)content, &contentJsonArray, "content", "SWGRoleResource");
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

QList<SWGRoleResource*>*
SWGPageResource«RoleResource»::getContent() {
    return content;
}
void
SWGPageResource«RoleResource»::setContent(QList<SWGRoleResource*>* content) {
    this->content = content;
}

bool
SWGPageResource«RoleResource»::getFirst() {
    return first;
}
void
SWGPageResource«RoleResource»::setFirst(bool first) {
    this->first = first;
}

bool
SWGPageResource«RoleResource»::getLast() {
    return last;
}
void
SWGPageResource«RoleResource»::setLast(bool last) {
    this->last = last;
}

qint32
SWGPageResource«RoleResource»::getNumber() {
    return number;
}
void
SWGPageResource«RoleResource»::setNumber(qint32 number) {
    this->number = number;
}

qint32
SWGPageResource«RoleResource»::getNumberOfElements() {
    return number_of_elements;
}
void
SWGPageResource«RoleResource»::setNumberOfElements(qint32 number_of_elements) {
    this->number_of_elements = number_of_elements;
}

qint32
SWGPageResource«RoleResource»::getSize() {
    return size;
}
void
SWGPageResource«RoleResource»::setSize(qint32 size) {
    this->size = size;
}

QList<SWGOrder*>*
SWGPageResource«RoleResource»::getSort() {
    return sort;
}
void
SWGPageResource«RoleResource»::setSort(QList<SWGOrder*>* sort) {
    this->sort = sort;
}

qint64
SWGPageResource«RoleResource»::getTotalElements() {
    return total_elements;
}
void
SWGPageResource«RoleResource»::setTotalElements(qint64 total_elements) {
    this->total_elements = total_elements;
}

qint32
SWGPageResource«RoleResource»::getTotalPages() {
    return total_pages;
}
void
SWGPageResource«RoleResource»::setTotalPages(qint32 total_pages) {
    this->total_pages = total_pages;
}



} /* namespace Swagger */

