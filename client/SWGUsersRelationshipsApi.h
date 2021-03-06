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

#ifndef _SWG_SWGUsersRelationshipsApi_H_
#define _SWG_SWGUsersRelationshipsApi_H_

#include "SWGHttpRequest.h"

#include "SWGPageResource«UserRelationshipResource».h"
#include "SWGResult.h"
#include "SWGUserRelationshipResource.h"

#include <QObject>

namespace Swagger {

class SWGUsersRelationshipsApi: public QObject {
    Q_OBJECT

public:
    SWGUsersRelationshipsApi();
    SWGUsersRelationshipsApi(QString host, QString basePath);
    ~SWGUsersRelationshipsApi();

    QString host;
    QString basePath;

    void createUserRelationship(SWGUserRelationshipResource relationship);
    void deleteUserRelationship(qint64 id);
    void getUserRelationship(qint64 id);
    void getUserRelationships();
    void updateUserRelationship(qint64 id, SWGUserRelationshipResource relationship);
    
private:
    void createUserRelationshipCallback (HttpRequestWorker * worker);
    void deleteUserRelationshipCallback (HttpRequestWorker * worker);
    void getUserRelationshipCallback (HttpRequestWorker * worker);
    void getUserRelationshipsCallback (HttpRequestWorker * worker);
    void updateUserRelationshipCallback (HttpRequestWorker * worker);
    
signals:
    void createUserRelationshipSignal(SWGUserRelationshipResource* summary);
    void deleteUserRelationshipSignal();
    void getUserRelationshipSignal(SWGUserRelationshipResource* summary);
    void getUserRelationshipsSignal(SWGPageResource«UserRelationshipResource»* summary);
    void updateUserRelationshipSignal(SWGUserRelationshipResource* summary);
    
};
}
#endif
