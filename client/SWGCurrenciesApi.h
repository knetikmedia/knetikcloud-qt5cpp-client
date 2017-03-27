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

#ifndef _SWG_SWGCurrenciesApi_H_
#define _SWG_SWGCurrenciesApi_H_

#include "SWGHttpRequest.h"

#include <QString>
#include "SWGCurrencyResource.h"
#include "SWGPageResource«CurrencyResource».h"
#include "SWGResult.h"

#include <QObject>

namespace Swagger {

class SWGCurrenciesApi: public QObject {
    Q_OBJECT

public:
    SWGCurrenciesApi();
    SWGCurrenciesApi(QString host, QString basePath);
    ~SWGCurrenciesApi();

    QString host;
    QString basePath;

    void createCurrency(SWGCurrencyResource currency);
    void deleteCurrency(QString* code);
    void getCurrencies(bool filter_enabled_currencies, QString* filter_type, qint32 size, qint32 page, QString* order);
    void getCurrency(QString* code);
    void updateCurrency(QString* code, SWGCurrencyResource currency);
    
private:
    void createCurrencyCallback (HttpRequestWorker * worker);
    void deleteCurrencyCallback (HttpRequestWorker * worker);
    void getCurrenciesCallback (HttpRequestWorker * worker);
    void getCurrencyCallback (HttpRequestWorker * worker);
    void updateCurrencyCallback (HttpRequestWorker * worker);
    
signals:
    void createCurrencySignal(SWGCurrencyResource* summary);
    void deleteCurrencySignal();
    void getCurrenciesSignal(SWGPageResource«CurrencyResource»* summary);
    void getCurrencySignal(SWGCurrencyResource* summary);
    void updateCurrencySignal();
    
};
}
#endif