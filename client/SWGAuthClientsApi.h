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

#ifndef _SWG_SWGAuthClientsApi_H_
#define _SWG_SWGAuthClientsApi_H_

#include "SWGHttpRequest.h"

#include <QList>
#include <QString>
#include "SWGClientResource.h"
#include "SWGGrantTypeResource.h"
#include "SWGPageResource«ClientResource».h"
#include "SWGResult.h"

#include <QObject>

namespace Swagger {

class SWGAuthClientsApi: public QObject {
    Q_OBJECT

public:
    SWGAuthClientsApi();
    SWGAuthClientsApi(QString host, QString basePath);
    ~SWGAuthClientsApi();

    QString host;
    QString basePath;

    void createClient(SWGClientResource client_resource);
    void deleteClient(QString* client_key);
    void getClient(QString* client_key);
    void getClientGrantTypes();
    void getClients(qint32 size, qint32 page, QString* order);
    void setClientGrantTypes(QString* client_key, QList<QString*>* grant_list);
    void setClientRedirectUris(QString* client_key, QList<QString*>* redirect_list);
    void updateClient(QString* client_key, SWGClientResource client_resource);
    
private:
    void createClientCallback (HttpRequestWorker * worker);
    void deleteClientCallback (HttpRequestWorker * worker);
    void getClientCallback (HttpRequestWorker * worker);
    void getClientGrantTypesCallback (HttpRequestWorker * worker);
    void getClientsCallback (HttpRequestWorker * worker);
    void setClientGrantTypesCallback (HttpRequestWorker * worker);
    void setClientRedirectUrisCallback (HttpRequestWorker * worker);
    void updateClientCallback (HttpRequestWorker * worker);
    
signals:
    void createClientSignal(SWGClientResource* summary);
    void deleteClientSignal();
    void getClientSignal(SWGClientResource* summary);
    void getClientGrantTypesSignal(QList<SWGGrantTypeResource*>* summary);
    void getClientsSignal(SWGPageResource«ClientResource»* summary);
    void setClientGrantTypesSignal();
    void setClientRedirectUrisSignal();
    void updateClientSignal(SWGClientResource* summary);
    
};
}
#endif
