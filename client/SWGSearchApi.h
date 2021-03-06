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

#ifndef _SWG_SWGSearchApi_H_
#define _SWG_SWGSearchApi_H_

#include "SWGHttpRequest.h"

#include <QList>
#include <QString>
#include "SWGPageResource«Map«string,object»».h"
#include "SWGResult.h"
#include "SWGSearchReferenceMapping.h"

#include <QObject>

namespace Swagger {

class SWGSearchApi: public QObject {
    Q_OBJECT

public:
    SWGSearchApi();
    SWGSearchApi(QString host, QString basePath);
    ~SWGSearchApi();

    QString host;
    QString basePath;

    void addSearchIndex(QString* type, QString* id, SWGObject* object);
    void addSearchMappings(QList<SWGSearchReferenceMapping*>* mappings);
    void deleteSearchIndex(QString* type, QString* id);
    void deleteSearchIndexes(QString* type);
    void searchIndex(QString* type, SWGObject* query, qint32 size, qint32 page);
    
private:
    void addSearchIndexCallback (HttpRequestWorker * worker);
    void addSearchMappingsCallback (HttpRequestWorker * worker);
    void deleteSearchIndexCallback (HttpRequestWorker * worker);
    void deleteSearchIndexesCallback (HttpRequestWorker * worker);
    void searchIndexCallback (HttpRequestWorker * worker);
    
signals:
    void addSearchIndexSignal();
    void addSearchMappingsSignal();
    void deleteSearchIndexSignal();
    void deleteSearchIndexesSignal();
    void searchIndexSignal(SWGPageResource«Map«string,object»»* summary);
    
};
}
#endif
