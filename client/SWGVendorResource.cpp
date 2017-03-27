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


#include "SWGVendorResource.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGVendorResource::SWGVendorResource(QString* json) {
    init();
    this->fromJson(*json);
}

SWGVendorResource::SWGVendorResource() {
    init();
}

SWGVendorResource::~SWGVendorResource() {
    this->cleanup();
}

void
SWGVendorResource::init() {
    active = false;
    additional_properties = new QMap<QString, SWGProperty>();
    create_date = 0L;
    description = new QString("");
    id = 0;
    image_url = new QString("");
    manual_approval = false;
    name = new QString("");
    primary_contact_email = new QString("");
    primary_contact_name = new QString("");
    primary_contact_phone = new QString("");
    sales_email = new QString("");
    support_email = new QString("");
    template = new QString("");
    update_date = 0L;
    url = new QString("");
}

void
SWGVendorResource::cleanup() {
    

    if(additional_properties != nullptr) {
        QList<SWGProperty*>* arr = additional_properties;
        foreach(SWGProperty* o, *arr) {
            delete o;
        }
        delete additional_properties;
    }


    if(description != nullptr) {
        delete description;
    }


    if(image_url != nullptr) {
        delete image_url;
    }


    if(name != nullptr) {
        delete name;
    }

    if(primary_contact_email != nullptr) {
        delete primary_contact_email;
    }

    if(primary_contact_name != nullptr) {
        delete primary_contact_name;
    }

    if(primary_contact_phone != nullptr) {
        delete primary_contact_phone;
    }

    if(sales_email != nullptr) {
        delete sales_email;
    }

    if(support_email != nullptr) {
        delete support_email;
    }

    if(template != nullptr) {
        delete template;
    }


    if(url != nullptr) {
        delete url;
    }
}

SWGVendorResource*
SWGVendorResource::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGVendorResource::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&active, pJson["active"], "bool", "");
    
    ::Swagger::setValue(&additional_properties, pJson["additional_properties"], "QMap", "SWGProperty");
    
    ::Swagger::setValue(&create_date, pJson["create_date"], "qint64", "");
    ::Swagger::setValue(&description, pJson["description"], "QString", "QString");
    ::Swagger::setValue(&id, pJson["id"], "qint32", "");
    ::Swagger::setValue(&image_url, pJson["image_url"], "QString", "QString");
    ::Swagger::setValue(&manual_approval, pJson["manual_approval"], "bool", "");
    ::Swagger::setValue(&name, pJson["name"], "QString", "QString");
    ::Swagger::setValue(&primary_contact_email, pJson["primary_contact_email"], "QString", "QString");
    ::Swagger::setValue(&primary_contact_name, pJson["primary_contact_name"], "QString", "QString");
    ::Swagger::setValue(&primary_contact_phone, pJson["primary_contact_phone"], "QString", "QString");
    ::Swagger::setValue(&sales_email, pJson["sales_email"], "QString", "QString");
    ::Swagger::setValue(&support_email, pJson["support_email"], "QString", "QString");
    ::Swagger::setValue(&template, pJson["template"], "QString", "QString");
    ::Swagger::setValue(&update_date, pJson["update_date"], "qint64", "");
    ::Swagger::setValue(&url, pJson["url"], "QString", "QString");
}

QString
SWGVendorResource::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGVendorResource::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    obj->insert("active", QJsonValue(active));

    QJsonArray additional_propertiesJsonArray;
    toJsonArray((QList<void*>*)additional_properties, &additional_propertiesJsonArray, "additional_properties", "SWGProperty");
    obj->insert("additional_properties", additional_propertiesJsonArray);

    obj->insert("create_date", QJsonValue(create_date));

    toJsonValue(QString("description"), description, obj, QString("QString"));

    obj->insert("id", QJsonValue(id));

    toJsonValue(QString("image_url"), image_url, obj, QString("QString"));

    obj->insert("manual_approval", QJsonValue(manual_approval));

    toJsonValue(QString("name"), name, obj, QString("QString"));

    toJsonValue(QString("primary_contact_email"), primary_contact_email, obj, QString("QString"));

    toJsonValue(QString("primary_contact_name"), primary_contact_name, obj, QString("QString"));

    toJsonValue(QString("primary_contact_phone"), primary_contact_phone, obj, QString("QString"));

    toJsonValue(QString("sales_email"), sales_email, obj, QString("QString"));

    toJsonValue(QString("support_email"), support_email, obj, QString("QString"));

    toJsonValue(QString("template"), template, obj, QString("QString"));

    obj->insert("update_date", QJsonValue(update_date));

    toJsonValue(QString("url"), url, obj, QString("QString"));

    return obj;
}

bool
SWGVendorResource::getActive() {
    return active;
}
void
SWGVendorResource::setActive(bool active) {
    this->active = active;
}

QMap<QString, SWGProperty*>*
SWGVendorResource::getAdditionalProperties() {
    return additional_properties;
}
void
SWGVendorResource::setAdditionalProperties(QMap<QString, SWGProperty*>* additional_properties) {
    this->additional_properties = additional_properties;
}

qint64
SWGVendorResource::getCreateDate() {
    return create_date;
}
void
SWGVendorResource::setCreateDate(qint64 create_date) {
    this->create_date = create_date;
}

QString*
SWGVendorResource::getDescription() {
    return description;
}
void
SWGVendorResource::setDescription(QString* description) {
    this->description = description;
}

qint32
SWGVendorResource::getId() {
    return id;
}
void
SWGVendorResource::setId(qint32 id) {
    this->id = id;
}

QString*
SWGVendorResource::getImageUrl() {
    return image_url;
}
void
SWGVendorResource::setImageUrl(QString* image_url) {
    this->image_url = image_url;
}

bool
SWGVendorResource::getManualApproval() {
    return manual_approval;
}
void
SWGVendorResource::setManualApproval(bool manual_approval) {
    this->manual_approval = manual_approval;
}

QString*
SWGVendorResource::getName() {
    return name;
}
void
SWGVendorResource::setName(QString* name) {
    this->name = name;
}

QString*
SWGVendorResource::getPrimaryContactEmail() {
    return primary_contact_email;
}
void
SWGVendorResource::setPrimaryContactEmail(QString* primary_contact_email) {
    this->primary_contact_email = primary_contact_email;
}

QString*
SWGVendorResource::getPrimaryContactName() {
    return primary_contact_name;
}
void
SWGVendorResource::setPrimaryContactName(QString* primary_contact_name) {
    this->primary_contact_name = primary_contact_name;
}

QString*
SWGVendorResource::getPrimaryContactPhone() {
    return primary_contact_phone;
}
void
SWGVendorResource::setPrimaryContactPhone(QString* primary_contact_phone) {
    this->primary_contact_phone = primary_contact_phone;
}

QString*
SWGVendorResource::getSalesEmail() {
    return sales_email;
}
void
SWGVendorResource::setSalesEmail(QString* sales_email) {
    this->sales_email = sales_email;
}

QString*
SWGVendorResource::getSupportEmail() {
    return support_email;
}
void
SWGVendorResource::setSupportEmail(QString* support_email) {
    this->support_email = support_email;
}

QString*
SWGVendorResource::getTemplate() {
    return template;
}
void
SWGVendorResource::setTemplate(QString* template) {
    this->template = template;
}

qint64
SWGVendorResource::getUpdateDate() {
    return update_date;
}
void
SWGVendorResource::setUpdateDate(qint64 update_date) {
    this->update_date = update_date;
}

QString*
SWGVendorResource::getUrl() {
    return url;
}
void
SWGVendorResource::setUrl(QString* url) {
    this->url = url;
}



} /* namespace Swagger */
