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

#ifndef _SWG_SWGCampaignsChallengesApi_H_
#define _SWG_SWGCampaignsChallengesApi_H_

#include "SWGHttpRequest.h"

#include <QString>
#include "SWGChallengeActivityResource.h"
#include "SWGChallengeEventResource.h"
#include "SWGChallengeResource.h"
#include "SWGPageResource«BareChallengeActivityResource».h"
#include "SWGPageResource«ChallengeEventResource».h"
#include "SWGPageResource«ChallengeResource».h"
#include "SWGPageResource«TemplateResource».h"
#include "SWGResult.h"
#include "SWGTemplateResource.h"

#include <QObject>

namespace Swagger {

class SWGCampaignsChallengesApi: public QObject {
    Q_OBJECT

public:
    SWGCampaignsChallengesApi();
    SWGCampaignsChallengesApi(QString host, QString basePath);
    ~SWGCampaignsChallengesApi();

    QString host;
    QString basePath;

    void createChallenge(SWGChallengeResource challenge_resource);
    void createChallengeActivity(qint64 challenge_id, SWGChallengeActivityResource challenge_activity_resource, bool validate_settings);
    void createChallengeTemplate(SWGTemplateResource challenge_template_resource);
    void deleteChallenge(qint64 id);
    void deleteChallengeActivity(qint64 activity_id, qint64 challenge_id);
    void deleteChallengeEvent(qint64 id);
    void deleteChallengeTemplate(QString* id, QString* cascade);
    void getChallenge(qint64 id);
    void getChallengeActivities(qint64 challenge_id, qint32 size, qint32 page, QString* order);
    void getChallengeActivity(qint64 activity_id);
    void getChallengeEvent(qint64 id);
    void getChallengeEvents(QString* filter_start_date, QString* filter_end_date, bool filter_campaigns, qint64 filter_challenge, qint32 size, qint32 page, QString* order);
    void getChallengeTemplate(QString* id);
    void getChallengeTemplates(qint32 size, qint32 page, QString* order);
    void getChallenges(bool filter_template, bool filter_active_campaign);
    void updateChallenge(qint64 id, SWGChallengeResource challenge_resource);
    void updateChallengeActivity(qint64 activity_id, qint64 challenge_id, SWGChallengeActivityResource challenge_activity_resource);
    void updateChallengeTemplate(QString* id, SWGTemplateResource challenge_template_resource);
    
private:
    void createChallengeCallback (HttpRequestWorker * worker);
    void createChallengeActivityCallback (HttpRequestWorker * worker);
    void createChallengeTemplateCallback (HttpRequestWorker * worker);
    void deleteChallengeCallback (HttpRequestWorker * worker);
    void deleteChallengeActivityCallback (HttpRequestWorker * worker);
    void deleteChallengeEventCallback (HttpRequestWorker * worker);
    void deleteChallengeTemplateCallback (HttpRequestWorker * worker);
    void getChallengeCallback (HttpRequestWorker * worker);
    void getChallengeActivitiesCallback (HttpRequestWorker * worker);
    void getChallengeActivityCallback (HttpRequestWorker * worker);
    void getChallengeEventCallback (HttpRequestWorker * worker);
    void getChallengeEventsCallback (HttpRequestWorker * worker);
    void getChallengeTemplateCallback (HttpRequestWorker * worker);
    void getChallengeTemplatesCallback (HttpRequestWorker * worker);
    void getChallengesCallback (HttpRequestWorker * worker);
    void updateChallengeCallback (HttpRequestWorker * worker);
    void updateChallengeActivityCallback (HttpRequestWorker * worker);
    void updateChallengeTemplateCallback (HttpRequestWorker * worker);
    
signals:
    void createChallengeSignal(SWGChallengeResource* summary);
    void createChallengeActivitySignal(SWGChallengeActivityResource* summary);
    void createChallengeTemplateSignal(SWGTemplateResource* summary);
    void deleteChallengeSignal();
    void deleteChallengeActivitySignal();
    void deleteChallengeEventSignal();
    void deleteChallengeTemplateSignal();
    void getChallengeSignal(SWGChallengeResource* summary);
    void getChallengeActivitiesSignal(SWGPageResource«BareChallengeActivityResource»* summary);
    void getChallengeActivitySignal(SWGChallengeActivityResource* summary);
    void getChallengeEventSignal(SWGChallengeEventResource* summary);
    void getChallengeEventsSignal(SWGPageResource«ChallengeEventResource»* summary);
    void getChallengeTemplateSignal(SWGTemplateResource* summary);
    void getChallengeTemplatesSignal(SWGPageResource«TemplateResource»* summary);
    void getChallengesSignal(SWGPageResource«ChallengeResource»* summary);
    void updateChallengeSignal(SWGChallengeResource* summary);
    void updateChallengeActivitySignal(SWGChallengeActivityResource* summary);
    void updateChallengeTemplateSignal(SWGTemplateResource* summary);
    
};
}
#endif
