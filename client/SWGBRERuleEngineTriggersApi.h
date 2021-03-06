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

#ifndef _SWG_SWGBRERuleEngineTriggersApi_H_
#define _SWG_SWGBRERuleEngineTriggersApi_H_

#include "SWGHttpRequest.h"

#include <QString>
#include "SWGBreTriggerResource.h"
#include "SWGPageResource«BreTriggerResource».h"
#include "SWGResult.h"

#include <QObject>

namespace Swagger {

class SWGBRERuleEngineTriggersApi: public QObject {
    Q_OBJECT

public:
    SWGBRERuleEngineTriggersApi();
    SWGBRERuleEngineTriggersApi(QString host, QString basePath);
    ~SWGBRERuleEngineTriggersApi();

    QString host;
    QString basePath;

    void createBRETrigger(SWGBreTriggerResource bre_trigger_resource);
    void deleteBRETrigger(QString* event_name);
    void getBRETrigger(QString* event_name);
    void getBRETriggers(bool filter_system, QString* filter_category, QString* filter_name, qint32 size, qint32 page);
    void updateBRETrigger(QString* event_name, SWGBreTriggerResource bre_trigger_resource);
    
private:
    void createBRETriggerCallback (HttpRequestWorker * worker);
    void deleteBRETriggerCallback (HttpRequestWorker * worker);
    void getBRETriggerCallback (HttpRequestWorker * worker);
    void getBRETriggersCallback (HttpRequestWorker * worker);
    void updateBRETriggerCallback (HttpRequestWorker * worker);
    
signals:
    void createBRETriggerSignal(SWGBreTriggerResource* summary);
    void deleteBRETriggerSignal();
    void getBRETriggerSignal(SWGBreTriggerResource* summary);
    void getBRETriggersSignal(SWGPageResource«BreTriggerResource»* summary);
    void updateBRETriggerSignal(SWGBreTriggerResource* summary);
    
};
}
#endif
