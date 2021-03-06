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

#include "SWGMediaModerationApi.h"
#include "SWGHelpers.h"
#include "SWGModelFactory.h"

#include <QJsonArray>
#include <QJsonDocument>

namespace Swagger {
SWGMediaModerationApi::SWGMediaModerationApi() {}

SWGMediaModerationApi::~SWGMediaModerationApi() {}

SWGMediaModerationApi::SWGMediaModerationApi(QString host, QString basePath) {
    this->host = host;
    this->basePath = basePath;
}

void
SWGMediaModerationApi::getModerationReport(qint64 id) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/moderation/reports/{id}");

    QString idPathParam("{"); idPathParam.append("id").append("}");
    fullPath.replace(idPathParam, stringValue(id));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGMediaModerationApi::getModerationReportCallback);

    worker->execute(&input);
}

void
SWGMediaModerationApi::getModerationReportCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    SWGFlagReportResource* output = static_cast<SWGFlagReportResource*>(create(json, QString("SWGFlagReportResource")));
    

    worker->deleteLater();

    emit getModerationReportSignal(output);
    
}
void
SWGMediaModerationApi::getModerationReports(bool exclude_resolved, QString* filter_context, qint32 size, qint32 page) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/moderation/reports");


    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("exclude_resolved"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(exclude_resolved)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("filter_context"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(filter_context)));

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


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGMediaModerationApi::getModerationReportsCallback);

    worker->execute(&input);
}

void
SWGMediaModerationApi::getModerationReportsCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    SWGPageResource«FlagReportResource»* output = static_cast<SWGPageResource«FlagReportResource»*>(create(json, QString("SWGPageResource«FlagReportResource»")));
    

    worker->deleteLater();

    emit getModerationReportsSignal(output);
    
}
void
SWGMediaModerationApi::updateModerationReport(qint64 id, SWGFlagReportResource flag_report_resource) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/moderation/reports/{id}");

    QString idPathParam("{"); idPathParam.append("id").append("}");
    fullPath.replace(idPathParam, stringValue(id));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "PUT");

    
    QString output = flag_report_resource.asJson();
    input.request_body.append(output);
    


    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGMediaModerationApi::updateModerationReportCallback);

    worker->execute(&input);
}

void
SWGMediaModerationApi::updateModerationReportCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    worker->deleteLater();

    
    emit updateModerationReportSignal();
}
} /* namespace Swagger */
