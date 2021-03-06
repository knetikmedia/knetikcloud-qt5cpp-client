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

#include "SWGUsersInventoryApi.h"
#include "SWGHelpers.h"
#include "SWGModelFactory.h"

#include <QJsonArray>
#include <QJsonDocument>

namespace Swagger {
SWGUsersInventoryApi::SWGUsersInventoryApi() {}

SWGUsersInventoryApi::~SWGUsersInventoryApi() {}

SWGUsersInventoryApi::SWGUsersInventoryApi(QString host, QString basePath) {
    this->host = host;
    this->basePath = basePath;
}

void
SWGUsersInventoryApi::addItemToUserInventory(qint32 id, SWGUserInventoryAddRequest user_inventory_add_request) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/users/{id}/inventory");

    QString idPathParam("{"); idPathParam.append("id").append("}");
    fullPath.replace(idPathParam, stringValue(id));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    
    QString output = user_inventory_add_request.asJson();
    input.request_body.append(output);
    


    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGUsersInventoryApi::addItemToUserInventoryCallback);

    worker->execute(&input);
}

void
SWGUsersInventoryApi::addItemToUserInventoryCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    SWGInvoiceResource* output = static_cast<SWGInvoiceResource*>(create(json, QString("SWGInvoiceResource")));
    

    worker->deleteLater();

    emit addItemToUserInventorySignal(output);
    
}
void
SWGUsersInventoryApi::checkUserEntitlementItem(QString* user_id, qint32 item_id, QString* sku) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/users/{user_id}/entitlements/{item_id}/check");

    QString user_idPathParam("{"); user_idPathParam.append("user_id").append("}");
    fullPath.replace(user_idPathParam, stringValue(user_id));
    QString item_idPathParam("{"); item_idPathParam.append("item_id").append("}");
    fullPath.replace(item_idPathParam, stringValue(item_id));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("sku"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(sku)));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGUsersInventoryApi::checkUserEntitlementItemCallback);

    worker->execute(&input);
}

void
SWGUsersInventoryApi::checkUserEntitlementItemCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    worker->deleteLater();

    
    emit checkUserEntitlementItemSignal();
}
void
SWGUsersInventoryApi::createEntitlementItem(bool cascade, SWGEntitlementItem entitlement_item) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/entitlements");


    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("cascade"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(cascade)));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    
    QString output = entitlement_item.asJson();
    input.request_body.append(output);
    


    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGUsersInventoryApi::createEntitlementItemCallback);

    worker->execute(&input);
}

void
SWGUsersInventoryApi::createEntitlementItemCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    SWGEntitlementItem* output = static_cast<SWGEntitlementItem*>(create(json, QString("SWGEntitlementItem")));
    

    worker->deleteLater();

    emit createEntitlementItemSignal(output);
    
}
void
SWGUsersInventoryApi::createEntitlementTemplate(SWGItemTemplateResource template) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/entitlements/templates");



    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    
    QString output = template.asJson();
    input.request_body.append(output);
    


    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGUsersInventoryApi::createEntitlementTemplateCallback);

    worker->execute(&input);
}

void
SWGUsersInventoryApi::createEntitlementTemplateCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    SWGItemTemplateResource* output = static_cast<SWGItemTemplateResource*>(create(json, QString("SWGItemTemplateResource")));
    

    worker->deleteLater();

    emit createEntitlementTemplateSignal(output);
    
}
void
SWGUsersInventoryApi::deleteEntitlementItem(qint32 entitlement_id) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/entitlements/{entitlement_id}");

    QString entitlement_idPathParam("{"); entitlement_idPathParam.append("entitlement_id").append("}");
    fullPath.replace(entitlement_idPathParam, stringValue(entitlement_id));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "DELETE");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGUsersInventoryApi::deleteEntitlementItemCallback);

    worker->execute(&input);
}

void
SWGUsersInventoryApi::deleteEntitlementItemCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    worker->deleteLater();

    
    emit deleteEntitlementItemSignal();
}
void
SWGUsersInventoryApi::deleteEntitlementTemplate(QString* id, QString* cascade) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/entitlements/templates/{id}");

    QString idPathParam("{"); idPathParam.append("id").append("}");
    fullPath.replace(idPathParam, stringValue(id));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("cascade"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(cascade)));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "DELETE");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGUsersInventoryApi::deleteEntitlementTemplateCallback);

    worker->execute(&input);
}

void
SWGUsersInventoryApi::deleteEntitlementTemplateCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    worker->deleteLater();

    
    emit deleteEntitlementTemplateSignal();
}
void
SWGUsersInventoryApi::getEntitlementItem(qint32 entitlement_id) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/entitlements/{entitlement_id}");

    QString entitlement_idPathParam("{"); entitlement_idPathParam.append("entitlement_id").append("}");
    fullPath.replace(entitlement_idPathParam, stringValue(entitlement_id));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGUsersInventoryApi::getEntitlementItemCallback);

    worker->execute(&input);
}

void
SWGUsersInventoryApi::getEntitlementItemCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    SWGEntitlementItem* output = static_cast<SWGEntitlementItem*>(create(json, QString("SWGEntitlementItem")));
    

    worker->deleteLater();

    emit getEntitlementItemSignal(output);
    
}
void
SWGUsersInventoryApi::getEntitlementItems(qint32 size, qint32 page, QString* order) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/entitlements");


    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("size"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(size)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("page"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(page)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("order"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(order)));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGUsersInventoryApi::getEntitlementItemsCallback);

    worker->execute(&input);
}

void
SWGUsersInventoryApi::getEntitlementItemsCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    SWGPageResource«EntitlementItem»* output = static_cast<SWGPageResource«EntitlementItem»*>(create(json, QString("SWGPageResource«EntitlementItem»")));
    

    worker->deleteLater();

    emit getEntitlementItemsSignal(output);
    
}
void
SWGUsersInventoryApi::getEntitlementTemplate(QString* id) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/entitlements/templates/{id}");

    QString idPathParam("{"); idPathParam.append("id").append("}");
    fullPath.replace(idPathParam, stringValue(id));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGUsersInventoryApi::getEntitlementTemplateCallback);

    worker->execute(&input);
}

void
SWGUsersInventoryApi::getEntitlementTemplateCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    SWGItemTemplateResource* output = static_cast<SWGItemTemplateResource*>(create(json, QString("SWGItemTemplateResource")));
    

    worker->deleteLater();

    emit getEntitlementTemplateSignal(output);
    
}
void
SWGUsersInventoryApi::getEntitlementTemplates(qint32 size, qint32 page, QString* order) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/entitlements/templates");


    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("size"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(size)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("page"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(page)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("order"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(order)));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGUsersInventoryApi::getEntitlementTemplatesCallback);

    worker->execute(&input);
}

void
SWGUsersInventoryApi::getEntitlementTemplatesCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    SWGPageResource«ItemTemplateResource»* output = static_cast<SWGPageResource«ItemTemplateResource»*>(create(json, QString("SWGPageResource«ItemTemplateResource»")));
    

    worker->deleteLater();

    emit getEntitlementTemplatesSignal(output);
    
}
void
SWGUsersInventoryApi::getUserInventories(qint32 id, bool inactive, qint32 size, qint32 page, QString* filter_item_name, qint32 filter_item_id, QString* filter_username, QString* filter_group, QString* filter_date) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/users/{id}/inventory");

    QString idPathParam("{"); idPathParam.append("id").append("}");
    fullPath.replace(idPathParam, stringValue(id));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("inactive"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(inactive)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("size"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(size)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("page"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(page)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("filter_item_name"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(filter_item_name)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("filter_item_id"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(filter_item_id)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("filter_username"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(filter_username)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("filter_group"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(filter_group)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("filter_date"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(filter_date)));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGUsersInventoryApi::getUserInventoriesCallback);

    worker->execute(&input);
}

void
SWGUsersInventoryApi::getUserInventoriesCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    SWGPageResource«UserInventoryResource»* output = static_cast<SWGPageResource«UserInventoryResource»*>(create(json, QString("SWGPageResource«UserInventoryResource»")));
    

    worker->deleteLater();

    emit getUserInventoriesSignal(output);
    
}
void
SWGUsersInventoryApi::getUserInventory(qint32 user_id, qint32 id) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/users/{user_id}/inventory/{id}");

    QString user_idPathParam("{"); user_idPathParam.append("user_id").append("}");
    fullPath.replace(user_idPathParam, stringValue(user_id));
    QString idPathParam("{"); idPathParam.append("id").append("}");
    fullPath.replace(idPathParam, stringValue(id));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGUsersInventoryApi::getUserInventoryCallback);

    worker->execute(&input);
}

void
SWGUsersInventoryApi::getUserInventoryCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    SWGUserInventoryResource* output = static_cast<SWGUserInventoryResource*>(create(json, QString("SWGUserInventoryResource")));
    

    worker->deleteLater();

    emit getUserInventorySignal(output);
    
}
void
SWGUsersInventoryApi::getUserInventoryLog(QString* user_id, qint32 id, qint32 size, qint32 page) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/users/{user_id}/inventory/{id}/log");

    QString user_idPathParam("{"); user_idPathParam.append("user_id").append("}");
    fullPath.replace(user_idPathParam, stringValue(user_id));
    QString idPathParam("{"); idPathParam.append("id").append("}");
    fullPath.replace(idPathParam, stringValue(id));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("size"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(size)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("page"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(page)));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGUsersInventoryApi::getUserInventoryLogCallback);

    worker->execute(&input);
}

void
SWGUsersInventoryApi::getUserInventoryLogCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    SWGPageResource«UserItemLogResource»* output = static_cast<SWGPageResource«UserItemLogResource»*>(create(json, QString("SWGPageResource«UserItemLogResource»")));
    

    worker->deleteLater();

    emit getUserInventoryLogSignal(output);
    
}
void
SWGUsersInventoryApi::getUsersInventory(bool inactive, qint32 size, qint32 page, QString* filter_item_name, qint32 filter_item_id, QString* filter_username, QString* filter_group, QString* filter_date) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/inventories");


    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("inactive"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(inactive)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("size"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(size)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("page"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(page)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("filter_item_name"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(filter_item_name)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("filter_item_id"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(filter_item_id)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("filter_username"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(filter_username)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("filter_group"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(filter_group)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("filter_date"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(filter_date)));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGUsersInventoryApi::getUsersInventoryCallback);

    worker->execute(&input);
}

void
SWGUsersInventoryApi::getUsersInventoryCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    SWGPageResource«UserInventoryResource»* output = static_cast<SWGPageResource«UserInventoryResource»*>(create(json, QString("SWGPageResource«UserInventoryResource»")));
    

    worker->deleteLater();

    emit getUsersInventorySignal(output);
    
}
void
SWGUsersInventoryApi::grantUserEntitlement(qint32 user_id, SWGEntitlementGrantRequest grant_request) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/users/{user_id}/entitlements");

    QString user_idPathParam("{"); user_idPathParam.append("user_id").append("}");
    fullPath.replace(user_idPathParam, stringValue(user_id));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    
    QString output = grant_request.asJson();
    input.request_body.append(output);
    


    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGUsersInventoryApi::grantUserEntitlementCallback);

    worker->execute(&input);
}

void
SWGUsersInventoryApi::grantUserEntitlementCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    worker->deleteLater();

    
    emit grantUserEntitlementSignal();
}
void
SWGUsersInventoryApi::updateEntitlementItem(qint32 entitlement_id, bool cascade, SWGEntitlementItem entitlement_item) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/entitlements/{entitlement_id}");

    QString entitlement_idPathParam("{"); entitlement_idPathParam.append("entitlement_id").append("}");
    fullPath.replace(entitlement_idPathParam, stringValue(entitlement_id));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("cascade"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(cascade)));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "PUT");

    
    QString output = entitlement_item.asJson();
    input.request_body.append(output);
    


    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGUsersInventoryApi::updateEntitlementItemCallback);

    worker->execute(&input);
}

void
SWGUsersInventoryApi::updateEntitlementItemCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    worker->deleteLater();

    
    emit updateEntitlementItemSignal();
}
void
SWGUsersInventoryApi::updateEntitlementTemplate(QString* id, SWGItemTemplateResource template) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/entitlements/templates/{id}");

    QString idPathParam("{"); idPathParam.append("id").append("}");
    fullPath.replace(idPathParam, stringValue(id));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "PUT");

    
    QString output = template.asJson();
    input.request_body.append(output);
    


    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGUsersInventoryApi::updateEntitlementTemplateCallback);

    worker->execute(&input);
}

void
SWGUsersInventoryApi::updateEntitlementTemplateCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    SWGItemTemplateResource* output = static_cast<SWGItemTemplateResource*>(create(json, QString("SWGItemTemplateResource")));
    

    worker->deleteLater();

    emit updateEntitlementTemplateSignal(output);
    
}
void
SWGUsersInventoryApi::updateUserInventoryBehaviorData(qint32 user_id, qint32 id, SWGObject* data) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/users/{user_id}/inventory/{id}/behavior-data");

    QString user_idPathParam("{"); user_idPathParam.append("user_id").append("}");
    fullPath.replace(user_idPathParam, stringValue(user_id));
    QString idPathParam("{"); idPathParam.append("id").append("}");
    fullPath.replace(idPathParam, stringValue(id));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "PUT");

    
    QString output = data.asJson();
    input.request_body.append(output);
    


    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGUsersInventoryApi::updateUserInventoryBehaviorDataCallback);

    worker->execute(&input);
}

void
SWGUsersInventoryApi::updateUserInventoryBehaviorDataCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    worker->deleteLater();

    
    emit updateUserInventoryBehaviorDataSignal();
}
void
SWGUsersInventoryApi::updateUserInventoryExpires(qint32 user_id, qint32 id, qint64 timestamp) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/users/{user_id}/inventory/{id}/expires");

    QString user_idPathParam("{"); user_idPathParam.append("user_id").append("}");
    fullPath.replace(user_idPathParam, stringValue(user_id));
    QString idPathParam("{"); idPathParam.append("id").append("}");
    fullPath.replace(idPathParam, stringValue(id));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "PUT");

    
    QString output = timestamp.asJson();
    input.request_body.append(output);
    


    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGUsersInventoryApi::updateUserInventoryExpiresCallback);

    worker->execute(&input);
}

void
SWGUsersInventoryApi::updateUserInventoryExpiresCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    worker->deleteLater();

    
    emit updateUserInventoryExpiresSignal();
}
void
SWGUsersInventoryApi::updateUserInventoryStatus(qint32 user_id, qint32 id, QString* inventory_status) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/users/{user_id}/inventory/{id}/status");

    QString user_idPathParam("{"); user_idPathParam.append("user_id").append("}");
    fullPath.replace(user_idPathParam, stringValue(user_id));
    QString idPathParam("{"); idPathParam.append("id").append("}");
    fullPath.replace(idPathParam, stringValue(id));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "PUT");

    
    QString output = inventory_status.asJson();
    input.request_body.append(output);
    


    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGUsersInventoryApi::updateUserInventoryStatusCallback);

    worker->execute(&input);
}

void
SWGUsersInventoryApi::updateUserInventoryStatusCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    worker->deleteLater();

    
    emit updateUserInventoryStatusSignal();
}
void
SWGUsersInventoryApi::useUserEntitlementItem(QString* user_id, qint32 item_id, QString* sku, QString* info) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/users/{user_id}/entitlements/{item_id}/use");

    QString user_idPathParam("{"); user_idPathParam.append("user_id").append("}");
    fullPath.replace(user_idPathParam, stringValue(user_id));
    QString item_idPathParam("{"); item_idPathParam.append("item_id").append("}");
    fullPath.replace(item_idPathParam, stringValue(item_id));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("sku"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(sku)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("info"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(info)));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGUsersInventoryApi::useUserEntitlementItemCallback);

    worker->execute(&input);
}

void
SWGUsersInventoryApi::useUserEntitlementItemCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    worker->deleteLater();

    
    emit useUserEntitlementItemSignal();
}
} /* namespace Swagger */
