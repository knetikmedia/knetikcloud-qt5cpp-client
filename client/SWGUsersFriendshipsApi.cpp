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

#include "SWGUsersFriendshipsApi.h"
#include "SWGHelpers.h"
#include "SWGModelFactory.h"

#include <QJsonArray>
#include <QJsonDocument>

namespace Swagger {
SWGUsersFriendshipsApi::SWGUsersFriendshipsApi() {}

SWGUsersFriendshipsApi::~SWGUsersFriendshipsApi() {}

SWGUsersFriendshipsApi::SWGUsersFriendshipsApi(QString host, QString basePath) {
    this->host = host;
    this->basePath = basePath;
}

void
SWGUsersFriendshipsApi::addFriend(QString* user_id, qint32 id) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/users/{user_id}/friends/{id}");

    QString user_idPathParam("{"); user_idPathParam.append("user_id").append("}");
    fullPath.replace(user_idPathParam, stringValue(user_id));
    QString idPathParam("{"); idPathParam.append("id").append("}");
    fullPath.replace(idPathParam, stringValue(id));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGUsersFriendshipsApi::addFriendCallback);

    worker->execute(&input);
}

void
SWGUsersFriendshipsApi::addFriendCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    worker->deleteLater();

    
    emit addFriendSignal();
}
void
SWGUsersFriendshipsApi::getFriends(QString* user_id, qint32 size, qint32 page, QString* order) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/users/{user_id}/friends");

    QString user_idPathParam("{"); user_idPathParam.append("user_id").append("}");
    fullPath.replace(user_idPathParam, stringValue(user_id));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("size"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(size)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("page"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(page)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("order"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(order)));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGUsersFriendshipsApi::getFriendsCallback);

    worker->execute(&input);
}

void
SWGUsersFriendshipsApi::getFriendsCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    SWGPageResource«SimpleUserResource»* output = static_cast<SWGPageResource«SimpleUserResource»*>(create(json, QString("SWGPageResource«SimpleUserResource»")));
    

    worker->deleteLater();

    emit getFriendsSignal(output);
    
}
void
SWGUsersFriendshipsApi::getInviteToken(QString* user_id) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/users/{user_id}/invite-token");

    QString user_idPathParam("{"); user_idPathParam.append("user_id").append("}");
    fullPath.replace(user_idPathParam, stringValue(user_id));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGUsersFriendshipsApi::getInviteTokenCallback);

    worker->execute(&input);
}

void
SWGUsersFriendshipsApi::getInviteTokenCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    QString* output = static_cast<QString*>(create(json, QString("QString")));
    

    worker->deleteLater();

    emit getInviteTokenSignal(output);
    
}
void
SWGUsersFriendshipsApi::getInvites(QString* user_id, qint32 size, qint32 page, QString* order) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/users/{user_id}/invites");

    QString user_idPathParam("{"); user_idPathParam.append("user_id").append("}");
    fullPath.replace(user_idPathParam, stringValue(user_id));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("size"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(size)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("page"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(page)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("order"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(order)));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGUsersFriendshipsApi::getInvitesCallback);

    worker->execute(&input);
}

void
SWGUsersFriendshipsApi::getInvitesCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    SWGPageResource«SimpleUserResource»* output = static_cast<SWGPageResource«SimpleUserResource»*>(create(json, QString("SWGPageResource«SimpleUserResource»")));
    

    worker->deleteLater();

    emit getInvitesSignal(output);
    
}
void
SWGUsersFriendshipsApi::redeemFriendshipToken(QString* user_id, QString* token) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/users/{user_id}/friends/tokens");

    QString user_idPathParam("{"); user_idPathParam.append("user_id").append("}");
    fullPath.replace(user_idPathParam, stringValue(user_id));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    
    QString output = token.asJson();
    input.request_body.append(output);
    


    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGUsersFriendshipsApi::redeemFriendshipTokenCallback);

    worker->execute(&input);
}

void
SWGUsersFriendshipsApi::redeemFriendshipTokenCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    worker->deleteLater();

    
    emit redeemFriendshipTokenSignal();
}
void
SWGUsersFriendshipsApi::removeOrDeclineFriend(QString* user_id, qint32 id) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/users/{user_id}/friends/{id}");

    QString user_idPathParam("{"); user_idPathParam.append("user_id").append("}");
    fullPath.replace(user_idPathParam, stringValue(user_id));
    QString idPathParam("{"); idPathParam.append("id").append("}");
    fullPath.replace(idPathParam, stringValue(id));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "DELETE");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGUsersFriendshipsApi::removeOrDeclineFriendCallback);

    worker->execute(&input);
}

void
SWGUsersFriendshipsApi::removeOrDeclineFriendCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    worker->deleteLater();

    
    emit removeOrDeclineFriendSignal();
}
} /* namespace Swagger */
