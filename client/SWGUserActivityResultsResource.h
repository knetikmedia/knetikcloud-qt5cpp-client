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
 * SWGUserActivityResultsResource.h
 * 
 * 
 */

#ifndef SWGUserActivityResultsResource_H_
#define SWGUserActivityResultsResource_H_

#include <QJsonObject>


#include "SWGRewardCurrencyResource.h"
#include "SWGRewardItemResource.h"
#include "SWGSimpleUserResource.h"
#include <QList>
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGUserActivityResultsResource: public SWGObject {
public:
    SWGUserActivityResultsResource();
    SWGUserActivityResultsResource(QString* json);
    virtual ~SWGUserActivityResultsResource();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGUserActivityResultsResource* fromJson(QString &jsonString);

    QList<SWGRewardCurrencyResource*>* getCurrencyRewards();
    void setCurrencyRewards(QList<SWGRewardCurrencyResource*>* currency_rewards);

    QList<SWGRewardItemResource*>* getItemRewards();
    void setItemRewards(QList<SWGRewardItemResource*>* item_rewards);

    qint64 getRank();
    void setRank(qint64 rank);

    qint64 getScore();
    void setScore(qint64 score);

    QList<QString*>* getTags();
    void setTags(QList<QString*>* tags);

    qint32 getTies();
    void setTies(qint32 ties);

    SWGSimpleUserResource* getUser();
    void setUser(SWGSimpleUserResource* user);


private:
    QList<SWGRewardCurrencyResource*>* currency_rewards;
    QList<SWGRewardItemResource*>* item_rewards;
    qint64 rank;
    qint64 score;
    QList<QString*>* tags;
    qint32 ties;
    SWGSimpleUserResource* user;
};

} /* namespace Swagger */

#endif /* SWGUserActivityResultsResource_H_ */