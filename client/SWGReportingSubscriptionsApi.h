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

#ifndef _SWG_SWGReportingSubscriptionsApi_H_
#define _SWG_SWGReportingSubscriptionsApi_H_

#include "SWGHttpRequest.h"

#include "SWGPageResource«BillingReport».h"
#include "SWGResult.h"

#include <QObject>

namespace Swagger {

class SWGReportingSubscriptionsApi: public QObject {
    Q_OBJECT

public:
    SWGReportingSubscriptionsApi();
    SWGReportingSubscriptionsApi(QString host, QString basePath);
    ~SWGReportingSubscriptionsApi();

    QString host;
    QString basePath;

    void getSubscriptionReports(qint32 size, qint32 page);
    
private:
    void getSubscriptionReportsCallback (HttpRequestWorker * worker);
    
signals:
    void getSubscriptionReportsSignal(SWGPageResource«BillingReport»* summary);
    
};
}
#endif
