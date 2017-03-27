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

#ifndef _SWG_SWGPaymentsWalletsApi_H_
#define _SWG_SWGPaymentsWalletsApi_H_

#include "SWGHttpRequest.h"

#include <QString>
#include "SWGPageResource«SimpleWallet».h"
#include "SWGPageResource«WalletTotalResponse».h"
#include "SWGPageResource«WalletTransactionResource».h"
#include "SWGResult.h"
#include "SWGSimpleWallet.h"
#include "SWGWalletAlterRequest.h"
#include "SWGWalletTransactionResource.h"

#include <QObject>

namespace Swagger {

class SWGPaymentsWalletsApi: public QObject {
    Q_OBJECT

public:
    SWGPaymentsWalletsApi();
    SWGPaymentsWalletsApi(QString host, QString basePath);
    ~SWGPaymentsWalletsApi();

    QString host;
    QString basePath;

    void getUserWallet(qint32 user_id, QString* currency_code);
    void getUserWalletTransactions(qint32 user_id, QString* currency_code, QString* filter_type, qint64 filter_max_date, qint64 filter_min_date, QString* filter_sign, qint32 size, qint32 page, QString* order);
    void getUserWallets(qint32 user_id);
    void getWalletBalances();
    void getWalletTransactions(qint32 filter_invoice, QString* filter_type, QString* filter_date, QString* filter_sign, qint32 filter_user_id, QString* filter_username, QString* filter_details, QString* filter_currency_code, qint32 size, qint32 page, QString* order);
    void getWallets(qint32 size, qint32 page, QString* order);
    void updateWalletBalance(qint32 user_id, QString* currency_code, SWGWalletAlterRequest request);
    
private:
    void getUserWalletCallback (HttpRequestWorker * worker);
    void getUserWalletTransactionsCallback (HttpRequestWorker * worker);
    void getUserWalletsCallback (HttpRequestWorker * worker);
    void getWalletBalancesCallback (HttpRequestWorker * worker);
    void getWalletTransactionsCallback (HttpRequestWorker * worker);
    void getWalletsCallback (HttpRequestWorker * worker);
    void updateWalletBalanceCallback (HttpRequestWorker * worker);
    
signals:
    void getUserWalletSignal(SWGSimpleWallet* summary);
    void getUserWalletTransactionsSignal(SWGPageResource«WalletTransactionResource»* summary);
    void getUserWalletsSignal(QList<SWGSimpleWallet*>* summary);
    void getWalletBalancesSignal(SWGPageResource«WalletTotalResponse»* summary);
    void getWalletTransactionsSignal(SWGPageResource«WalletTransactionResource»* summary);
    void getWalletsSignal(SWGPageResource«SimpleWallet»* summary);
    void updateWalletBalanceSignal(SWGWalletTransactionResource* summary);
    
};
}
#endif
