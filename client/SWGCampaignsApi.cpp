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

#include "SWGCampaignsApi.h"
#include "SWGHelpers.h"
#include "SWGModelFactory.h"

#include <QJsonArray>
#include <QJsonDocument>

namespace Swagger {
SWGCampaignsApi::SWGCampaignsApi() {}

SWGCampaignsApi::~SWGCampaignsApi() {}

SWGCampaignsApi::SWGCampaignsApi(QString host, QString basePath) {
    this->host = host;
    this->basePath = basePath;
}

void
SWGCampaignsApi::addChallengeToCampaign(qint64 id, qint64 challenge_id) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/campaigns/{id}/challenges");

    QString idPathParam("{"); idPathParam.append("id").append("}");
    fullPath.replace(idPathParam, stringValue(id));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    
    QString output = challenge_id.asJson();
    input.request_body.append(output);
    


    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGCampaignsApi::addChallengeToCampaignCallback);

    worker->execute(&input);
}

void
SWGCampaignsApi::addChallengeToCampaignCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    worker->deleteLater();

    
    emit addChallengeToCampaignSignal();
}
void
SWGCampaignsApi::createCampaign(SWGCampaignResource campaign_resource) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/campaigns");



    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    
    QString output = campaign_resource.asJson();
    input.request_body.append(output);
    


    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGCampaignsApi::createCampaignCallback);

    worker->execute(&input);
}

void
SWGCampaignsApi::createCampaignCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    SWGCampaignResource* output = static_cast<SWGCampaignResource*>(create(json, QString("SWGCampaignResource")));
    

    worker->deleteLater();

    emit createCampaignSignal(output);
    
}
void
SWGCampaignsApi::createCampaignTemplate(SWGTemplateResource campaign_template_resource) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/campaigns/templates");



    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    
    QString output = campaign_template_resource.asJson();
    input.request_body.append(output);
    


    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGCampaignsApi::createCampaignTemplateCallback);

    worker->execute(&input);
}

void
SWGCampaignsApi::createCampaignTemplateCallback(HttpRequestWorker * worker) {
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

    emit createCampaignTemplateSignal(output);
    
}
void
SWGCampaignsApi::deleteCampaign(qint64 id) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/campaigns/{id}");

    QString idPathParam("{"); idPathParam.append("id").append("}");
    fullPath.replace(idPathParam, stringValue(id));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "DELETE");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGCampaignsApi::deleteCampaignCallback);

    worker->execute(&input);
}

void
SWGCampaignsApi::deleteCampaignCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    worker->deleteLater();

    
    emit deleteCampaignSignal();
}
void
SWGCampaignsApi::deleteCampaignTemplate(QString* id, QString* cascade) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/campaigns/templates/{id}");

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
            &SWGCampaignsApi::deleteCampaignTemplateCallback);

    worker->execute(&input);
}

void
SWGCampaignsApi::deleteCampaignTemplateCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    worker->deleteLater();

    
    emit deleteCampaignTemplateSignal();
}
void
SWGCampaignsApi::getCampaign(qint64 id) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/campaigns/{id}");

    QString idPathParam("{"); idPathParam.append("id").append("}");
    fullPath.replace(idPathParam, stringValue(id));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGCampaignsApi::getCampaignCallback);

    worker->execute(&input);
}

void
SWGCampaignsApi::getCampaignCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    SWGCampaignResource* output = static_cast<SWGCampaignResource*>(create(json, QString("SWGCampaignResource")));
    

    worker->deleteLater();

    emit getCampaignSignal(output);
    
}
void
SWGCampaignsApi::getCampaignChallenges(qint64 id) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/campaigns/{id}/challenges");

    QString idPathParam("{"); idPathParam.append("id").append("}");
    fullPath.replace(idPathParam, stringValue(id));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGCampaignsApi::getCampaignChallengesCallback);

    worker->execute(&input);
}

void
SWGCampaignsApi::getCampaignChallengesCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    SWGPageResource«ChallengeResource»* output = static_cast<SWGPageResource«ChallengeResource»*>(create(json, QString("SWGPageResource«ChallengeResource»")));
    

    worker->deleteLater();

    emit getCampaignChallengesSignal(output);
    
}
void
SWGCampaignsApi::getCampaignTemplate(QString* id) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/campaigns/templates/{id}");

    QString idPathParam("{"); idPathParam.append("id").append("}");
    fullPath.replace(idPathParam, stringValue(id));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGCampaignsApi::getCampaignTemplateCallback);

    worker->execute(&input);
}

void
SWGCampaignsApi::getCampaignTemplateCallback(HttpRequestWorker * worker) {
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

    emit getCampaignTemplateSignal(output);
    
}
void
SWGCampaignsApi::getCampaignTemplates(qint32 size, qint32 page, QString* order) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/campaigns/templates");


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
            &SWGCampaignsApi::getCampaignTemplatesCallback);

    worker->execute(&input);
}

void
SWGCampaignsApi::getCampaignTemplatesCallback(HttpRequestWorker * worker) {
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

    emit getCampaignTemplatesSignal(output);
    
}
void
SWGCampaignsApi::getCampaigns(bool filter_active, qint32 size, qint32 page, QString* order) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/campaigns");


    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("filter_active"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(filter_active)));

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
            &SWGCampaignsApi::getCampaignsCallback);

    worker->execute(&input);
}

void
SWGCampaignsApi::getCampaignsCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    SWGPageResource«CampaignResource»* output = static_cast<SWGPageResource«CampaignResource»*>(create(json, QString("SWGPageResource«CampaignResource»")));
    

    worker->deleteLater();

    emit getCampaignsSignal(output);
    
}
void
SWGCampaignsApi::removeChallengeFromCampaign(qint64 campaign_id, qint64 id) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/campaigns/{campaign_id}/challenges/{id}");

    QString campaign_idPathParam("{"); campaign_idPathParam.append("campaign_id").append("}");
    fullPath.replace(campaign_idPathParam, stringValue(campaign_id));
    QString idPathParam("{"); idPathParam.append("id").append("}");
    fullPath.replace(idPathParam, stringValue(id));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "DELETE");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGCampaignsApi::removeChallengeFromCampaignCallback);

    worker->execute(&input);
}

void
SWGCampaignsApi::removeChallengeFromCampaignCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    worker->deleteLater();

    
    emit removeChallengeFromCampaignSignal();
}
void
SWGCampaignsApi::updateCampaign(qint64 id, SWGCampaignResource campaign_resource) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/campaigns/{id}");

    QString idPathParam("{"); idPathParam.append("id").append("}");
    fullPath.replace(idPathParam, stringValue(id));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "PUT");

    
    QString output = campaign_resource.asJson();
    input.request_body.append(output);
    


    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGCampaignsApi::updateCampaignCallback);

    worker->execute(&input);
}

void
SWGCampaignsApi::updateCampaignCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    SWGCampaignResource* output = static_cast<SWGCampaignResource*>(create(json, QString("SWGCampaignResource")));
    

    worker->deleteLater();

    emit updateCampaignSignal(output);
    
}
void
SWGCampaignsApi::updateCampaignTemplate(QString* id, SWGTemplateResource campaign_template_resource) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/campaigns/templates/{id}");

    QString idPathParam("{"); idPathParam.append("id").append("}");
    fullPath.replace(idPathParam, stringValue(id));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "PUT");

    
    QString output = campaign_template_resource.asJson();
    input.request_body.append(output);
    


    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGCampaignsApi::updateCampaignTemplateCallback);

    worker->execute(&input);
}

void
SWGCampaignsApi::updateCampaignTemplateCallback(HttpRequestWorker * worker) {
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

    emit updateCampaignTemplateSignal(output);
    
}
} /* namespace Swagger */
