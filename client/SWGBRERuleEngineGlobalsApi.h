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

#ifndef _SWG_SWGBRERuleEngineGlobalsApi_H_
#define _SWG_SWGBRERuleEngineGlobalsApi_H_

#include "SWGHttpRequest.h"

#include <QString>
#include "SWGBreGlobalResource.h"
#include "SWGPageResource«BreGlobalResource».h"
#include "SWGResult.h"

#include <QObject>

namespace Swagger {

class SWGBRERuleEngineGlobalsApi: public QObject {
    Q_OBJECT

public:
    SWGBRERuleEngineGlobalsApi();
    SWGBRERuleEngineGlobalsApi(QString host, QString basePath);
    ~SWGBRERuleEngineGlobalsApi();

    QString host;
    QString basePath;

    void createBREGlobal(SWGBreGlobalResource bre_global_resource);
    void deleteBREGlobal(QString* id);
    void getBREGlobal(QString* id);
    void getBREGlobals(bool filter_system, qint32 size, qint32 page);
    void updateBREGlobal(QString* id, SWGBreGlobalResource bre_global_resource);
    
private:
    void createBREGlobalCallback (HttpRequestWorker * worker);
    void deleteBREGlobalCallback (HttpRequestWorker * worker);
    void getBREGlobalCallback (HttpRequestWorker * worker);
    void getBREGlobalsCallback (HttpRequestWorker * worker);
    void updateBREGlobalCallback (HttpRequestWorker * worker);
    
signals:
    void createBREGlobalSignal(SWGBreGlobalResource* summary);
    void deleteBREGlobalSignal();
    void getBREGlobalSignal(SWGBreGlobalResource* summary);
    void getBREGlobalsSignal(SWGPageResource«BreGlobalResource»* summary);
    void updateBREGlobalSignal(SWGBreGlobalResource* summary);
    
};
}
#endif