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

#ifndef _SWG_SWGUtilBatchApi_H_
#define _SWG_SWGUtilBatchApi_H_

#include "SWGHttpRequest.h"

#include "SWGBatch.h"
#include "SWGBatchReturn.h"
#include "SWGResult.h"

#include <QObject>

namespace Swagger {

class SWGUtilBatchApi: public QObject {
    Q_OBJECT

public:
    SWGUtilBatchApi();
    SWGUtilBatchApi(QString host, QString basePath);
    ~SWGUtilBatchApi();

    QString host;
    QString basePath;

    void sendBatch(SWGBatch batch);
    
private:
    void sendBatchCallback (HttpRequestWorker * worker);
    
signals:
    void sendBatchSignal(QList<SWGBatchReturn*>* summary);
    
};
}
#endif