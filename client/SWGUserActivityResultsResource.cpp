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


#include "SWGUserActivityResultsResource.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGUserActivityResultsResource::SWGUserActivityResultsResource(QString* json) {
    init();
    this->fromJson(*json);
}

SWGUserActivityResultsResource::SWGUserActivityResultsResource() {
    init();
}

SWGUserActivityResultsResource::~SWGUserActivityResultsResource() {
    this->cleanup();
}

void
SWGUserActivityResultsResource::init() {
    currency_rewards = new QList<SWGRewardCurrencyResource*>();
    item_rewards = new QList<SWGRewardItemResource*>();
    rank = 0L;
    score = 0L;
    tags = new QList<QString*>();
    ties = 0;
    user = new SWGSimpleUserResource();
}

void
SWGUserActivityResultsResource::cleanup() {
    
    if(currency_rewards != nullptr) {
        QList<SWGRewardCurrencyResource*>* arr = currency_rewards;
        foreach(SWGRewardCurrencyResource* o, *arr) {
            delete o;
        }
        delete currency_rewards;
    }

    if(item_rewards != nullptr) {
        QList<SWGRewardItemResource*>* arr = item_rewards;
        foreach(SWGRewardItemResource* o, *arr) {
            delete o;
        }
        delete item_rewards;
    }



    if(tags != nullptr) {
        QList<QString*>* arr = tags;
        foreach(QString* o, *arr) {
            delete o;
        }
        delete tags;
    }


    if(user != nullptr) {
        delete user;
    }
}

SWGUserActivityResultsResource*
SWGUserActivityResultsResource::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGUserActivityResultsResource::fromJsonObject(QJsonObject &pJson) {
    
    ::Swagger::setValue(&currency_rewards, pJson["currency_rewards"], "QList", "SWGRewardCurrencyResource");
    
    
    ::Swagger::setValue(&item_rewards, pJson["item_rewards"], "QList", "SWGRewardItemResource");
    
    ::Swagger::setValue(&rank, pJson["rank"], "qint64", "");
    ::Swagger::setValue(&score, pJson["score"], "qint64", "");
    
    ::Swagger::setValue(&tags, pJson["tags"], "QList", "QString");
    
    ::Swagger::setValue(&ties, pJson["ties"], "qint32", "");
    ::Swagger::setValue(&user, pJson["user"], "SWGSimpleUserResource", "SWGSimpleUserResource");
}

QString
SWGUserActivityResultsResource::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGUserActivityResultsResource::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    QJsonArray currency_rewardsJsonArray;
    toJsonArray((QList<void*>*)currency_rewards, &currency_rewardsJsonArray, "currency_rewards", "SWGRewardCurrencyResource");
    obj->insert("currency_rewards", currency_rewardsJsonArray);

    QJsonArray item_rewardsJsonArray;
    toJsonArray((QList<void*>*)item_rewards, &item_rewardsJsonArray, "item_rewards", "SWGRewardItemResource");
    obj->insert("item_rewards", item_rewardsJsonArray);

    obj->insert("rank", QJsonValue(rank));

    obj->insert("score", QJsonValue(score));

    QJsonArray tagsJsonArray;
    toJsonArray((QList<void*>*)tags, &tagsJsonArray, "tags", "QString");
    obj->insert("tags", tagsJsonArray);

    obj->insert("ties", QJsonValue(ties));

    toJsonValue(QString("user"), user, obj, QString("SWGSimpleUserResource"));

    return obj;
}

QList<SWGRewardCurrencyResource*>*
SWGUserActivityResultsResource::getCurrencyRewards() {
    return currency_rewards;
}
void
SWGUserActivityResultsResource::setCurrencyRewards(QList<SWGRewardCurrencyResource*>* currency_rewards) {
    this->currency_rewards = currency_rewards;
}

QList<SWGRewardItemResource*>*
SWGUserActivityResultsResource::getItemRewards() {
    return item_rewards;
}
void
SWGUserActivityResultsResource::setItemRewards(QList<SWGRewardItemResource*>* item_rewards) {
    this->item_rewards = item_rewards;
}

qint64
SWGUserActivityResultsResource::getRank() {
    return rank;
}
void
SWGUserActivityResultsResource::setRank(qint64 rank) {
    this->rank = rank;
}

qint64
SWGUserActivityResultsResource::getScore() {
    return score;
}
void
SWGUserActivityResultsResource::setScore(qint64 score) {
    this->score = score;
}

QList<QString*>*
SWGUserActivityResultsResource::getTags() {
    return tags;
}
void
SWGUserActivityResultsResource::setTags(QList<QString*>* tags) {
    this->tags = tags;
}

qint32
SWGUserActivityResultsResource::getTies() {
    return ties;
}
void
SWGUserActivityResultsResource::setTies(qint32 ties) {
    this->ties = ties;
}

SWGSimpleUserResource*
SWGUserActivityResultsResource::getUser() {
    return user;
}
void
SWGUserActivityResultsResource::setUser(SWGSimpleUserResource* user) {
    this->user = user;
}



} /* namespace Swagger */

