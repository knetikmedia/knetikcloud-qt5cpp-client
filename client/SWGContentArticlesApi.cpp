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

#include "SWGContentArticlesApi.h"
#include "SWGHelpers.h"
#include "SWGModelFactory.h"

#include <QJsonArray>
#include <QJsonDocument>

namespace Swagger {
SWGContentArticlesApi::SWGContentArticlesApi() {}

SWGContentArticlesApi::~SWGContentArticlesApi() {}

SWGContentArticlesApi::SWGContentArticlesApi(QString host, QString basePath) {
    this->host = host;
    this->basePath = basePath;
}

void
SWGContentArticlesApi::createArticle(SWGArticleResource article_resource) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/content/articles");



    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    
    QString output = article_resource.asJson();
    input.request_body.append(output);
    


    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGContentArticlesApi::createArticleCallback);

    worker->execute(&input);
}

void
SWGContentArticlesApi::createArticleCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    SWGArticleResource* output = static_cast<SWGArticleResource*>(create(json, QString("SWGArticleResource")));
    

    worker->deleteLater();

    emit createArticleSignal(output);
    
}
void
SWGContentArticlesApi::createArticleTemplate(SWGTemplateResource article_template_resource) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/content/articles/templates");



    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    
    QString output = article_template_resource.asJson();
    input.request_body.append(output);
    


    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGContentArticlesApi::createArticleTemplateCallback);

    worker->execute(&input);
}

void
SWGContentArticlesApi::createArticleTemplateCallback(HttpRequestWorker * worker) {
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

    emit createArticleTemplateSignal(output);
    
}
void
SWGContentArticlesApi::deleteArticle(QString* id) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/content/articles/{id}");

    QString idPathParam("{"); idPathParam.append("id").append("}");
    fullPath.replace(idPathParam, stringValue(id));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "DELETE");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGContentArticlesApi::deleteArticleCallback);

    worker->execute(&input);
}

void
SWGContentArticlesApi::deleteArticleCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    worker->deleteLater();

    
    emit deleteArticleSignal();
}
void
SWGContentArticlesApi::deleteArticleTemplate(QString* id, QString* cascade) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/content/articles/templates/{id}");

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
            &SWGContentArticlesApi::deleteArticleTemplateCallback);

    worker->execute(&input);
}

void
SWGContentArticlesApi::deleteArticleTemplateCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    worker->deleteLater();

    
    emit deleteArticleTemplateSignal();
}
void
SWGContentArticlesApi::getArticle(QString* id) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/content/articles/{id}");

    QString idPathParam("{"); idPathParam.append("id").append("}");
    fullPath.replace(idPathParam, stringValue(id));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGContentArticlesApi::getArticleCallback);

    worker->execute(&input);
}

void
SWGContentArticlesApi::getArticleCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    SWGArticleResource* output = static_cast<SWGArticleResource*>(create(json, QString("SWGArticleResource")));
    

    worker->deleteLater();

    emit getArticleSignal(output);
    
}
void
SWGContentArticlesApi::getArticleTemplate(QString* id) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/content/articles/templates/{id}");

    QString idPathParam("{"); idPathParam.append("id").append("}");
    fullPath.replace(idPathParam, stringValue(id));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGContentArticlesApi::getArticleTemplateCallback);

    worker->execute(&input);
}

void
SWGContentArticlesApi::getArticleTemplateCallback(HttpRequestWorker * worker) {
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

    emit getArticleTemplateSignal(output);
    
}
void
SWGContentArticlesApi::getArticleTemplates(qint32 size, qint32 page, QString* order) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/content/articles/templates");


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
            &SWGContentArticlesApi::getArticleTemplatesCallback);

    worker->execute(&input);
}

void
SWGContentArticlesApi::getArticleTemplatesCallback(HttpRequestWorker * worker) {
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

    emit getArticleTemplatesSignal(output);
    
}
void
SWGContentArticlesApi::getArticles(QString* filter_category, QString* filter_tagset, QString* filter_title, qint32 size, qint32 page, QString* order) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/content/articles");


    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("filter_category"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(filter_category)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("filter_tagset"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(filter_tagset)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("filter_title"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(filter_title)));

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
            &SWGContentArticlesApi::getArticlesCallback);

    worker->execute(&input);
}

void
SWGContentArticlesApi::getArticlesCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    SWGPageResource«ArticleResource»* output = static_cast<SWGPageResource«ArticleResource»*>(create(json, QString("SWGPageResource«ArticleResource»")));
    

    worker->deleteLater();

    emit getArticlesSignal(output);
    
}
void
SWGContentArticlesApi::updateArticle(QString* id, SWGArticleResource article_resource) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/content/articles/{id}");

    QString idPathParam("{"); idPathParam.append("id").append("}");
    fullPath.replace(idPathParam, stringValue(id));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "PUT");

    
    QString output = article_resource.asJson();
    input.request_body.append(output);
    


    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGContentArticlesApi::updateArticleCallback);

    worker->execute(&input);
}

void
SWGContentArticlesApi::updateArticleCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    SWGArticleResource* output = static_cast<SWGArticleResource*>(create(json, QString("SWGArticleResource")));
    

    worker->deleteLater();

    emit updateArticleSignal(output);
    
}
void
SWGContentArticlesApi::updateArticleTemplate(QString* id, SWGTemplateResource article_template_resource) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/content/articles/templates/{id}");

    QString idPathParam("{"); idPathParam.append("id").append("}");
    fullPath.replace(idPathParam, stringValue(id));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "PUT");

    
    QString output = article_template_resource.asJson();
    input.request_body.append(output);
    


    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGContentArticlesApi::updateArticleTemplateCallback);

    worker->execute(&input);
}

void
SWGContentArticlesApi::updateArticleTemplateCallback(HttpRequestWorker * worker) {
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

    emit updateArticleTemplateSignal(output);
    
}
} /* namespace Swagger */