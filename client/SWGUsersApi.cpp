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

#include "SWGUsersApi.h"
#include "SWGHelpers.h"
#include "SWGModelFactory.h"

#include <QJsonArray>
#include <QJsonDocument>

namespace Swagger {
SWGUsersApi::SWGUsersApi() {}

SWGUsersApi::~SWGUsersApi() {}

SWGUsersApi::SWGUsersApi(QString host, QString basePath) {
    this->host = host;
    this->basePath = basePath;
}

void
SWGUsersApi::addUserTag(qint32 user_id, QString* tag) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/users/{user_id}/tags");

    QString user_idPathParam("{"); user_idPathParam.append("user_id").append("}");
    fullPath.replace(user_idPathParam, stringValue(user_id));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    
    QString output = tag.asJson();
    input.request_body.append(output);
    


    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGUsersApi::addUserTagCallback);

    worker->execute(&input);
}

void
SWGUsersApi::addUserTagCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    worker->deleteLater();

    
    emit addUserTagSignal();
}
void
SWGUsersApi::createUserTemplate(SWGTemplateResource user_template_resource) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/users/templates");



    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    
    QString output = user_template_resource.asJson();
    input.request_body.append(output);
    


    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGUsersApi::createUserTemplateCallback);

    worker->execute(&input);
}

void
SWGUsersApi::createUserTemplateCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    SWGTemplateResource* output = static_cast<SWGTemplateResource*>(create(json, QString("SWGTemplateResource")));
    

    worker->deleteLater();

    emit createUserTemplateSignal(output);
    
}
void
SWGUsersApi::deleteUserTemplate(QString* id, QString* cascade) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/users/templates/{id}");

    QString idPathParam("{"); idPathParam.append("id").append("}");
    fullPath.replace(idPathParam, stringValue(id));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("cascade"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(cascade)));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "DELETE");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGUsersApi::deleteUserTemplateCallback);

    worker->execute(&input);
}

void
SWGUsersApi::deleteUserTemplateCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    worker->deleteLater();

    
    emit deleteUserTemplateSignal();
}
void
SWGUsersApi::getUser(QString* id) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/users/{id}");

    QString idPathParam("{"); idPathParam.append("id").append("}");
    fullPath.replace(idPathParam, stringValue(id));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGUsersApi::getUserCallback);

    worker->execute(&input);
}

void
SWGUsersApi::getUserCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    SWGUserResource* output = static_cast<SWGUserResource*>(create(json, QString("SWGUserResource")));
    

    worker->deleteLater();

    emit getUserSignal(output);
    
}
void
SWGUsersApi::getUserTags(qint32 user_id) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/users/{user_id}/tags");

    QString user_idPathParam("{"); user_idPathParam.append("user_id").append("}");
    fullPath.replace(user_idPathParam, stringValue(user_id));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGUsersApi::getUserTagsCallback);

    worker->execute(&input);
}

void
SWGUsersApi::getUserTagsCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
    QList<QString*>* output = new QList<QString*>();
    QString json(worker->response);
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonArray jsonArray = doc.array();

    foreach(QJsonValue obj, jsonArray) {
        QString* o = new QString();
        QJsonObject jv = obj.toObject();
        QJsonObject * ptr = (QJsonObject*)&jv;
        o->fromJsonObject(*ptr);
        output->append(o);
    }

    

    worker->deleteLater();

    emit getUserTagsSignal(output);
    
}
void
SWGUsersApi::getUserTemplate(QString* id) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/users/templates/{id}");

    QString idPathParam("{"); idPathParam.append("id").append("}");
    fullPath.replace(idPathParam, stringValue(id));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGUsersApi::getUserTemplateCallback);

    worker->execute(&input);
}

void
SWGUsersApi::getUserTemplateCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    SWGTemplateResource* output = static_cast<SWGTemplateResource*>(create(json, QString("SWGTemplateResource")));
    

    worker->deleteLater();

    emit getUserTemplateSignal(output);
    
}
void
SWGUsersApi::getUserTemplates(qint32 size, qint32 page, QString* order) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/users/templates");


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
            &SWGUsersApi::getUserTemplatesCallback);

    worker->execute(&input);
}

void
SWGUsersApi::getUserTemplatesCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    SWGPageResource«TemplateResource»* output = static_cast<SWGPageResource«TemplateResource»*>(create(json, QString("SWGPageResource«TemplateResource»")));
    

    worker->deleteLater();

    emit getUserTemplatesSignal(output);
    
}
void
SWGUsersApi::getUsers(QString* filter_displayname, QString* filter_email, QString* filter_firstname, QString* filter_fullname, QString* filter_lastname, QString* filter_username, QString* filter_tag, QString* filter_group, QString* filter_role, QString* filter_search, qint32 size, qint32 page, QString* order) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/users");


    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("filter_displayname"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(filter_displayname)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("filter_email"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(filter_email)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("filter_firstname"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(filter_firstname)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("filter_fullname"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(filter_fullname)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("filter_lastname"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(filter_lastname)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("filter_username"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(filter_username)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("filter_tag"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(filter_tag)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("filter_group"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(filter_group)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("filter_role"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(filter_role)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("filter_search"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(filter_search)));

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
            &SWGUsersApi::getUsersCallback);

    worker->execute(&input);
}

void
SWGUsersApi::getUsersCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    SWGPageResource«UserBaseResource»* output = static_cast<SWGPageResource«UserBaseResource»*>(create(json, QString("SWGPageResource«UserBaseResource»")));
    

    worker->deleteLater();

    emit getUsersSignal(output);
    
}
void
SWGUsersApi::passwordReset(qint32 id, SWGNewPasswordRequest new_password_request) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/users/{id}/password-reset");

    QString idPathParam("{"); idPathParam.append("id").append("}");
    fullPath.replace(idPathParam, stringValue(id));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "PUT");

    
    QString output = new_password_request.asJson();
    input.request_body.append(output);
    


    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGUsersApi::passwordResetCallback);

    worker->execute(&input);
}

void
SWGUsersApi::passwordResetCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    worker->deleteLater();

    
    emit passwordResetSignal();
}
void
SWGUsersApi::registerUser(SWGUserResource user_resource) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/users");



    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    
    QString output = user_resource.asJson();
    input.request_body.append(output);
    


    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGUsersApi::registerUserCallback);

    worker->execute(&input);
}

void
SWGUsersApi::registerUserCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    SWGUserResource* output = static_cast<SWGUserResource*>(create(json, QString("SWGUserResource")));
    

    worker->deleteLater();

    emit registerUserSignal(output);
    
}
void
SWGUsersApi::removeUserTag(qint32 user_id, QString* tag) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/users/{user_id}/tags/{tag}");

    QString user_idPathParam("{"); user_idPathParam.append("user_id").append("}");
    fullPath.replace(user_idPathParam, stringValue(user_id));
    QString tagPathParam("{"); tagPathParam.append("tag").append("}");
    fullPath.replace(tagPathParam, stringValue(tag));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "DELETE");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGUsersApi::removeUserTagCallback);

    worker->execute(&input);
}

void
SWGUsersApi::removeUserTagCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    worker->deleteLater();

    
    emit removeUserTagSignal();
}
void
SWGUsersApi::setPassword(qint32 id, QString* password) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/users/{id}/password");

    QString idPathParam("{"); idPathParam.append("id").append("}");
    fullPath.replace(idPathParam, stringValue(id));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "PUT");

    
    QString output = password.asJson();
    input.request_body.append(output);
    


    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGUsersApi::setPasswordCallback);

    worker->execute(&input);
}

void
SWGUsersApi::setPasswordCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    worker->deleteLater();

    
    emit setPasswordSignal();
}
void
SWGUsersApi::startPasswordReset(qint32 id) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/users/{id}/password-reset");

    QString idPathParam("{"); idPathParam.append("id").append("}");
    fullPath.replace(idPathParam, stringValue(id));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGUsersApi::startPasswordResetCallback);

    worker->execute(&input);
}

void
SWGUsersApi::startPasswordResetCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    worker->deleteLater();

    
    emit startPasswordResetSignal();
}
void
SWGUsersApi::updateUser(QString* id, SWGUserResource user_resource) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/users/{id}");

    QString idPathParam("{"); idPathParam.append("id").append("}");
    fullPath.replace(idPathParam, stringValue(id));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "PUT");

    
    QString output = user_resource.asJson();
    input.request_body.append(output);
    


    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGUsersApi::updateUserCallback);

    worker->execute(&input);
}

void
SWGUsersApi::updateUserCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    worker->deleteLater();

    
    emit updateUserSignal();
}
void
SWGUsersApi::updateUserTemplate(QString* id, SWGTemplateResource user_template_resource) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/users/templates/{id}");

    QString idPathParam("{"); idPathParam.append("id").append("}");
    fullPath.replace(idPathParam, stringValue(id));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "PUT");

    
    QString output = user_template_resource.asJson();
    input.request_body.append(output);
    


    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGUsersApi::updateUserTemplateCallback);

    worker->execute(&input);
}

void
SWGUsersApi::updateUserTemplateCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    SWGTemplateResource* output = static_cast<SWGTemplateResource*>(create(json, QString("SWGTemplateResource")));
    

    worker->deleteLater();

    emit updateUserTemplateSignal(output);
    
}
} /* namespace Swagger */