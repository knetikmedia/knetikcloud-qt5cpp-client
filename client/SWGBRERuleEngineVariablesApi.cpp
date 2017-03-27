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

#include "SWGBRERuleEngineVariablesApi.h"
#include "SWGHelpers.h"
#include "SWGModelFactory.h"

#include <QJsonArray>
#include <QJsonDocument>

namespace Swagger {
SWGBRERuleEngineVariablesApi::SWGBRERuleEngineVariablesApi() {}

SWGBRERuleEngineVariablesApi::~SWGBRERuleEngineVariablesApi() {}

SWGBRERuleEngineVariablesApi::SWGBRERuleEngineVariablesApi(QString host, QString basePath) {
    this->host = host;
    this->basePath = basePath;
}

void
SWGBRERuleEngineVariablesApi::getBREVariableTypes() {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/bre/variable-types");



    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGBRERuleEngineVariablesApi::getBREVariableTypesCallback);

    worker->execute(&input);
}

void
SWGBRERuleEngineVariablesApi::getBREVariableTypesCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
    QList<SWGVariableTypeResource*>* output = new QList<SWGVariableTypeResource*>();
    QString json(worker->response);
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonArray jsonArray = doc.array();

    foreach(QJsonValue obj, jsonArray) {
        SWGVariableTypeResource* o = new SWGVariableTypeResource();
        QJsonObject jv = obj.toObject();
        QJsonObject * ptr = (QJsonObject*)&jv;
        o->fromJsonObject(*ptr);
        output->append(o);
    }

    

    worker->deleteLater();

    emit getBREVariableTypesSignal(output);
    
}
} /* namespace Swagger */
