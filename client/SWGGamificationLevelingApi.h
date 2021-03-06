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

#ifndef _SWG_SWGGamificationLevelingApi_H_
#define _SWG_SWGGamificationLevelingApi_H_

#include "SWGHttpRequest.h"

#include <QString>
#include "SWGBreTriggerResource.h"
#include "SWGLevelingResource.h"
#include "SWGPageResource«LevelingResource».h"
#include "SWGPageResource«UserLevelingResource».h"
#include "SWGResult.h"
#include "SWGUserLevelingResource.h"

#include <QObject>

namespace Swagger {

class SWGGamificationLevelingApi: public QObject {
    Q_OBJECT

public:
    SWGGamificationLevelingApi();
    SWGGamificationLevelingApi(QString host, QString basePath);
    ~SWGGamificationLevelingApi();

    QString host;
    QString basePath;

    void createLevel(SWGLevelingResource level);
    void deleteLevel(QString* name);
    void getLevel(QString* name);
    void getLevelTriggers();
    void getLevels(QString* filter_name, qint32 size, qint32 page, QString* order);
    void getUserLevel(qint32 user_id, QString* name);
    void getUserLevels(qint32 user_id);
    void updateLevel(QString* name, SWGLevelingResource new_level);
    void updateUserLevel(qint32 user_id, QString* name, qint32 progress);
    
private:
    void createLevelCallback (HttpRequestWorker * worker);
    void deleteLevelCallback (HttpRequestWorker * worker);
    void getLevelCallback (HttpRequestWorker * worker);
    void getLevelTriggersCallback (HttpRequestWorker * worker);
    void getLevelsCallback (HttpRequestWorker * worker);
    void getUserLevelCallback (HttpRequestWorker * worker);
    void getUserLevelsCallback (HttpRequestWorker * worker);
    void updateLevelCallback (HttpRequestWorker * worker);
    void updateUserLevelCallback (HttpRequestWorker * worker);
    
signals:
    void createLevelSignal(SWGLevelingResource* summary);
    void deleteLevelSignal();
    void getLevelSignal(SWGLevelingResource* summary);
    void getLevelTriggersSignal(QList<SWGBreTriggerResource*>* summary);
    void getLevelsSignal(SWGPageResource«LevelingResource»* summary);
    void getUserLevelSignal(SWGUserLevelingResource* summary);
    void getUserLevelsSignal(SWGPageResource«UserLevelingResource»* summary);
    void updateLevelSignal(SWGLevelingResource* summary);
    void updateUserLevelSignal();
    
};
}
#endif
