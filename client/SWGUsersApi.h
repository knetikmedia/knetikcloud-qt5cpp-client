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

#ifndef _SWG_SWGUsersApi_H_
#define _SWG_SWGUsersApi_H_

#include "SWGHttpRequest.h"

#include <QString>
#include "SWGNewPasswordRequest.h"
#include "SWGPageResource«TemplateResource».h"
#include "SWGPageResource«UserBaseResource».h"
#include "SWGResult.h"
#include "SWGTemplateResource.h"
#include "SWGUserResource.h"

#include <QObject>

namespace Swagger {

class SWGUsersApi: public QObject {
    Q_OBJECT

public:
    SWGUsersApi();
    SWGUsersApi(QString host, QString basePath);
    ~SWGUsersApi();

    QString host;
    QString basePath;

    void addUserTag(qint32 user_id, QString* tag);
    void createUserTemplate(SWGTemplateResource user_template_resource);
    void deleteUserTemplate(QString* id, QString* cascade);
    void getUser(QString* id);
    void getUserTags(qint32 user_id);
    void getUserTemplate(QString* id);
    void getUserTemplates(qint32 size, qint32 page, QString* order);
    void getUsers(QString* filter_displayname, QString* filter_email, QString* filter_firstname, QString* filter_fullname, QString* filter_lastname, QString* filter_username, QString* filter_tag, QString* filter_group, QString* filter_role, QString* filter_search, qint32 size, qint32 page, QString* order);
    void passwordReset(qint32 id, SWGNewPasswordRequest new_password_request);
    void registerUser(SWGUserResource user_resource);
    void removeUserTag(qint32 user_id, QString* tag);
    void setPassword(qint32 id, QString* password);
    void startPasswordReset(qint32 id);
    void updateUser(QString* id, SWGUserResource user_resource);
    void updateUserTemplate(QString* id, SWGTemplateResource user_template_resource);
    
private:
    void addUserTagCallback (HttpRequestWorker * worker);
    void createUserTemplateCallback (HttpRequestWorker * worker);
    void deleteUserTemplateCallback (HttpRequestWorker * worker);
    void getUserCallback (HttpRequestWorker * worker);
    void getUserTagsCallback (HttpRequestWorker * worker);
    void getUserTemplateCallback (HttpRequestWorker * worker);
    void getUserTemplatesCallback (HttpRequestWorker * worker);
    void getUsersCallback (HttpRequestWorker * worker);
    void passwordResetCallback (HttpRequestWorker * worker);
    void registerUserCallback (HttpRequestWorker * worker);
    void removeUserTagCallback (HttpRequestWorker * worker);
    void setPasswordCallback (HttpRequestWorker * worker);
    void startPasswordResetCallback (HttpRequestWorker * worker);
    void updateUserCallback (HttpRequestWorker * worker);
    void updateUserTemplateCallback (HttpRequestWorker * worker);
    
signals:
    void addUserTagSignal();
    void createUserTemplateSignal(SWGTemplateResource* summary);
    void deleteUserTemplateSignal();
    void getUserSignal(SWGUserResource* summary);
    void getUserTagsSignal(QList<QString*>* summary);
    void getUserTemplateSignal(SWGTemplateResource* summary);
    void getUserTemplatesSignal(SWGPageResource«TemplateResource»* summary);
    void getUsersSignal(SWGPageResource«UserBaseResource»* summary);
    void passwordResetSignal();
    void registerUserSignal(SWGUserResource* summary);
    void removeUserTagSignal();
    void setPasswordSignal();
    void startPasswordResetSignal();
    void updateUserSignal();
    void updateUserTemplateSignal(SWGTemplateResource* summary);
    
};
}
#endif
