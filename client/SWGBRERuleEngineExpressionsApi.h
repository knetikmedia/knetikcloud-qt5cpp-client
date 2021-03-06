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

#ifndef _SWG_SWGBRERuleEngineExpressionsApi_H_
#define _SWG_SWGBRERuleEngineExpressionsApi_H_

#include "SWGHttpRequest.h"

#include "SWGLookupTypeResource.h"
#include "SWGResult.h"

#include <QObject>

namespace Swagger {

class SWGBRERuleEngineExpressionsApi: public QObject {
    Q_OBJECT

public:
    SWGBRERuleEngineExpressionsApi();
    SWGBRERuleEngineExpressionsApi(QString host, QString basePath);
    ~SWGBRERuleEngineExpressionsApi();

    QString host;
    QString basePath;

    void getBREExpressions();
    
private:
    void getBREExpressionsCallback (HttpRequestWorker * worker);
    
signals:
    void getBREExpressionsSignal(QList<SWGLookupTypeResource*>* summary);
    
};
}
#endif
