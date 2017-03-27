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

#ifndef _SWG_SWGContentCommentsApi_H_
#define _SWG_SWGContentCommentsApi_H_

#include "SWGHttpRequest.h"

#include <QString>
#include "SWGCommentResource.h"
#include "SWGCommentSearch.h"
#include "SWGPageResource«CommentResource».h"
#include "SWGResult.h"

#include <QObject>

namespace Swagger {

class SWGContentCommentsApi: public QObject {
    Q_OBJECT

public:
    SWGContentCommentsApi();
    SWGContentCommentsApi(QString host, QString basePath);
    ~SWGContentCommentsApi();

    QString host;
    QString basePath;

    void addComment(SWGCommentResource comment_resource);
    void deleteComment(qint64 id);
    void getComment(qint64 id);
    void getComments(QString* context, qint32 context_id, qint32 size, qint32 page);
    void searchComments(SWGObject* query, qint32 size, qint32 page);
    void updateComment(qint64 id, QString* content);
    
private:
    void addCommentCallback (HttpRequestWorker * worker);
    void deleteCommentCallback (HttpRequestWorker * worker);
    void getCommentCallback (HttpRequestWorker * worker);
    void getCommentsCallback (HttpRequestWorker * worker);
    void searchCommentsCallback (HttpRequestWorker * worker);
    void updateCommentCallback (HttpRequestWorker * worker);
    
signals:
    void addCommentSignal(SWGCommentResource* summary);
    void deleteCommentSignal();
    void getCommentSignal(SWGCommentResource* summary);
    void getCommentsSignal(SWGPageResource«CommentResource»* summary);
    void searchCommentsSignal(SWGCommentSearch* summary);
    void updateCommentSignal();
    
};
}
#endif
