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


#include "SWGAmazonS3Activity.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGAmazonS3Activity::SWGAmazonS3Activity(QString* json) {
    init();
    this->fromJson(*json);
}

SWGAmazonS3Activity::SWGAmazonS3Activity() {
    init();
}

SWGAmazonS3Activity::~SWGAmazonS3Activity() {
    this->cleanup();
}

void
SWGAmazonS3Activity::init() {
    action = new QString("");
    created_date = 0L;
    filename = new QString("");
    id = 0L;
    object_key = new QString("");
    url = new QString("");
    user_id = 0;
}

void
SWGAmazonS3Activity::cleanup() {
    
    if(action != nullptr) {
        delete action;
    }


    if(filename != nullptr) {
        delete filename;
    }


    if(object_key != nullptr) {
        delete object_key;
    }

    if(url != nullptr) {
        delete url;
    }

}

SWGAmazonS3Activity*
SWGAmazonS3Activity::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGAmazonS3Activity::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&action, pJson["action"], "QString", "QString");
    ::Swagger::setValue(&created_date, pJson["created_date"], "qint64", "");
    ::Swagger::setValue(&filename, pJson["filename"], "QString", "QString");
    ::Swagger::setValue(&id, pJson["id"], "qint64", "");
    ::Swagger::setValue(&object_key, pJson["object_key"], "QString", "QString");
    ::Swagger::setValue(&url, pJson["url"], "QString", "QString");
    ::Swagger::setValue(&user_id, pJson["user_id"], "qint32", "");
}

QString
SWGAmazonS3Activity::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGAmazonS3Activity::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    toJsonValue(QString("action"), action, obj, QString("QString"));

    obj->insert("created_date", QJsonValue(created_date));

    toJsonValue(QString("filename"), filename, obj, QString("QString"));

    obj->insert("id", QJsonValue(id));

    toJsonValue(QString("object_key"), object_key, obj, QString("QString"));

    toJsonValue(QString("url"), url, obj, QString("QString"));

    obj->insert("user_id", QJsonValue(user_id));

    return obj;
}

QString*
SWGAmazonS3Activity::getAction() {
    return action;
}
void
SWGAmazonS3Activity::setAction(QString* action) {
    this->action = action;
}

qint64
SWGAmazonS3Activity::getCreatedDate() {
    return created_date;
}
void
SWGAmazonS3Activity::setCreatedDate(qint64 created_date) {
    this->created_date = created_date;
}

QString*
SWGAmazonS3Activity::getFilename() {
    return filename;
}
void
SWGAmazonS3Activity::setFilename(QString* filename) {
    this->filename = filename;
}

qint64
SWGAmazonS3Activity::getId() {
    return id;
}
void
SWGAmazonS3Activity::setId(qint64 id) {
    this->id = id;
}

QString*
SWGAmazonS3Activity::getObjectKey() {
    return object_key;
}
void
SWGAmazonS3Activity::setObjectKey(QString* object_key) {
    this->object_key = object_key;
}

QString*
SWGAmazonS3Activity::getUrl() {
    return url;
}
void
SWGAmazonS3Activity::setUrl(QString* url) {
    this->url = url;
}

qint32
SWGAmazonS3Activity::getUserId() {
    return user_id;
}
void
SWGAmazonS3Activity::setUserId(qint32 user_id) {
    this->user_id = user_id;
}



} /* namespace Swagger */

