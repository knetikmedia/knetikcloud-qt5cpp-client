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

#ifndef _SWG_SWGUtilHealthApi_H_
#define _SWG_SWGUtilHealthApi_H_

#include "SWGHttpRequest.h"

#include "SWGObject.h"
#include "SWGResult.h"

#include <QObject>

namespace Swagger {

class SWGUtilHealthApi: public QObject {
    Q_OBJECT

public:
    SWGUtilHealthApi();
    SWGUtilHealthApi(QString host, QString basePath);
    ~SWGUtilHealthApi();

    QString host;
    QString basePath;

    void getHealth();
    
private:
    void getHealthCallback (HttpRequestWorker * worker);
    
signals:
    void getHealthSignal(SWGObject* summary);
    
};
}
#endif