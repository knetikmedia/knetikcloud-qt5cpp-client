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


#include "SWGAchievementProgressUpdateRequest.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGAchievementProgressUpdateRequest::SWGAchievementProgressUpdateRequest(QString* json) {
    init();
    this->fromJson(*json);
}

SWGAchievementProgressUpdateRequest::SWGAchievementProgressUpdateRequest() {
    init();
}

SWGAchievementProgressUpdateRequest::~SWGAchievementProgressUpdateRequest() {
    this->cleanup();
}

void
SWGAchievementProgressUpdateRequest::init() {
    increment_value = false;
    progress_value = 0;
}

void
SWGAchievementProgressUpdateRequest::cleanup() {
    

}

SWGAchievementProgressUpdateRequest*
SWGAchievementProgressUpdateRequest::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGAchievementProgressUpdateRequest::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&increment_value, pJson["increment_value"], "bool", "");
    ::Swagger::setValue(&progress_value, pJson["progress_value"], "qint32", "");
}

QString
SWGAchievementProgressUpdateRequest::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGAchievementProgressUpdateRequest::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    obj->insert("increment_value", QJsonValue(increment_value));

    obj->insert("progress_value", QJsonValue(progress_value));

    return obj;
}

bool
SWGAchievementProgressUpdateRequest::getIncrementValue() {
    return increment_value;
}
void
SWGAchievementProgressUpdateRequest::setIncrementValue(bool increment_value) {
    this->increment_value = increment_value;
}

qint32
SWGAchievementProgressUpdateRequest::getProgressValue() {
    return progress_value;
}
void
SWGAchievementProgressUpdateRequest::setProgressValue(qint32 progress_value) {
    this->progress_value = progress_value;
}



} /* namespace Swagger */

