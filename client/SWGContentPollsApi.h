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

#ifndef _SWG_SWGContentPollsApi_H_
#define _SWG_SWGContentPollsApi_H_

#include "SWGHttpRequest.h"

#include <QString>
#include "SWGPageResource«PollResource».h"
#include "SWGPageResource«TemplateResource».h"
#include "SWGPollResource.h"
#include "SWGPollResponseResource.h"
#include "SWGResult.h"
#include "SWGTemplateResource.h"

#include <QObject>

namespace Swagger {

class SWGContentPollsApi: public QObject {
    Q_OBJECT

public:
    SWGContentPollsApi();
    SWGContentPollsApi(QString host, QString basePath);
    ~SWGContentPollsApi();

    QString host;
    QString basePath;

    void answerPoll(QString* id, QString* answer_key);
    void createPoll(SWGPollResource poll_resource);
    void createPollTemplate(SWGTemplateResource poll_template_resource);
    void deletePoll(QString* id);
    void deletePollTemplate(QString* id, QString* cascade);
    void getPoll(QString* id);
    void getPollAnswer(QString* id);
    void getPollTemplate(QString* id);
    void getPollTemplates(qint32 size, qint32 page, QString* order);
    void getPolls(QString* filter_category, QString* filter_tagset, QString* filter_text, qint32 size, qint32 page, QString* order);
    void updatePoll(QString* id, SWGPollResource poll_resource);
    void updatePollTemplate(QString* id, SWGTemplateResource poll_template_resource);
    
private:
    void answerPollCallback (HttpRequestWorker * worker);
    void createPollCallback (HttpRequestWorker * worker);
    void createPollTemplateCallback (HttpRequestWorker * worker);
    void deletePollCallback (HttpRequestWorker * worker);
    void deletePollTemplateCallback (HttpRequestWorker * worker);
    void getPollCallback (HttpRequestWorker * worker);
    void getPollAnswerCallback (HttpRequestWorker * worker);
    void getPollTemplateCallback (HttpRequestWorker * worker);
    void getPollTemplatesCallback (HttpRequestWorker * worker);
    void getPollsCallback (HttpRequestWorker * worker);
    void updatePollCallback (HttpRequestWorker * worker);
    void updatePollTemplateCallback (HttpRequestWorker * worker);
    
signals:
    void answerPollSignal(SWGPollResponseResource* summary);
    void createPollSignal(SWGPollResource* summary);
    void createPollTemplateSignal(SWGTemplateResource* summary);
    void deletePollSignal();
    void deletePollTemplateSignal();
    void getPollSignal(SWGPollResource* summary);
    void getPollAnswerSignal(SWGPollResponseResource* summary);
    void getPollTemplateSignal(SWGTemplateResource* summary);
    void getPollTemplatesSignal(SWGPageResource«TemplateResource»* summary);
    void getPollsSignal(SWGPageResource«PollResource»* summary);
    void updatePollSignal(SWGPollResource* summary);
    void updatePollTemplateSignal(SWGTemplateResource* summary);
    
};
}
#endif