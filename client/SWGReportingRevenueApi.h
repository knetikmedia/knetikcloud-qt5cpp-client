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

#ifndef _SWG_SWGReportingRevenueApi_H_
#define _SWG_SWGReportingRevenueApi_H_

#include "SWGHttpRequest.h"

#include <QString>
#include "SWGPageResource«RevenueCountryReportResource».h"
#include "SWGPageResource«RevenueProductReportResource».h"
#include "SWGResult.h"
#include "SWGRevenueReportResource.h"

#include <QObject>

namespace Swagger {

class SWGReportingRevenueApi: public QObject {
    Q_OBJECT

public:
    SWGReportingRevenueApi();
    SWGReportingRevenueApi(QString host, QString basePath);
    ~SWGReportingRevenueApi();

    QString host;
    QString basePath;

    void getItemRevenue(QString* currency_code, qint64 start_date, qint64 end_date);
    void getRefundRevenue(QString* currency_code, qint64 start_date, qint64 end_date);
    void getRevenueByCountry(QString* currency_code, qint64 start_date, qint64 end_date, qint32 size, qint32 page);
    void getRevenueByItem(QString* currency_code, qint64 start_date, qint64 end_date, qint32 size, qint32 page);
    void getSubscriptionRevenue(QString* currency_code, qint64 start_date, qint64 end_date);
    
private:
    void getItemRevenueCallback (HttpRequestWorker * worker);
    void getRefundRevenueCallback (HttpRequestWorker * worker);
    void getRevenueByCountryCallback (HttpRequestWorker * worker);
    void getRevenueByItemCallback (HttpRequestWorker * worker);
    void getSubscriptionRevenueCallback (HttpRequestWorker * worker);
    
signals:
    void getItemRevenueSignal(SWGRevenueReportResource* summary);
    void getRefundRevenueSignal(SWGRevenueReportResource* summary);
    void getRevenueByCountrySignal(SWGPageResource«RevenueCountryReportResource»* summary);
    void getRevenueByItemSignal(SWGPageResource«RevenueProductReportResource»* summary);
    void getSubscriptionRevenueSignal(SWGRevenueReportResource* summary);
    
};
}
#endif
