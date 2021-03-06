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


#include "SWGUserResource.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGUserResource::SWGUserResource(QString* json) {
    init();
    this->fromJson(*json);
}

SWGUserResource::SWGUserResource() {
    init();
}

SWGUserResource::~SWGUserResource() {
    this->cleanup();
}

void
SWGUserResource::init() {
    additional_properties = new QMap<QString, SWGProperty>();
    address = new QString("");
    address2 = new QString("");
    avatar_url = new QString("");
    children = new QList<SWGUserRelationshipReferenceResource*>();
    city = new QString("");
    country_code = new QString("");
    currency_code = new QString("");
    date_of_birth = 0L;
    description = new QString("");
    display_name = new QString("");
    email = new QString("");
    first_name = new QString("");
    fullname = new QString("");
    gender = new QString("");
    id = 0;
    language_code = new QString("");
    last_name = new QString("");
    mobile_number = new QString("");
    parents = new QList<SWGUserRelationshipReferenceResource*>();
    password = new QString("");
    postal_code = new QString("");
    state = new QString("");
    tags = new QList<QString*>();
    template = new QString("");
    timezone_code = new QString("");
    username = new QString("");
}

void
SWGUserResource::cleanup() {
    
    if(additional_properties != nullptr) {
        QList<SWGProperty*>* arr = additional_properties;
        foreach(SWGProperty* o, *arr) {
            delete o;
        }
        delete additional_properties;
    }

    if(address != nullptr) {
        delete address;
    }

    if(address2 != nullptr) {
        delete address2;
    }

    if(avatar_url != nullptr) {
        delete avatar_url;
    }

    if(children != nullptr) {
        QList<SWGUserRelationshipReferenceResource*>* arr = children;
        foreach(SWGUserRelationshipReferenceResource* o, *arr) {
            delete o;
        }
        delete children;
    }

    if(city != nullptr) {
        delete city;
    }

    if(country_code != nullptr) {
        delete country_code;
    }

    if(currency_code != nullptr) {
        delete currency_code;
    }


    if(description != nullptr) {
        delete description;
    }

    if(display_name != nullptr) {
        delete display_name;
    }

    if(email != nullptr) {
        delete email;
    }

    if(first_name != nullptr) {
        delete first_name;
    }

    if(fullname != nullptr) {
        delete fullname;
    }

    if(gender != nullptr) {
        delete gender;
    }


    if(language_code != nullptr) {
        delete language_code;
    }

    if(last_name != nullptr) {
        delete last_name;
    }

    if(mobile_number != nullptr) {
        delete mobile_number;
    }

    if(parents != nullptr) {
        QList<SWGUserRelationshipReferenceResource*>* arr = parents;
        foreach(SWGUserRelationshipReferenceResource* o, *arr) {
            delete o;
        }
        delete parents;
    }

    if(password != nullptr) {
        delete password;
    }

    if(postal_code != nullptr) {
        delete postal_code;
    }

    if(state != nullptr) {
        delete state;
    }

    if(tags != nullptr) {
        QList<QString*>* arr = tags;
        foreach(QString* o, *arr) {
            delete o;
        }
        delete tags;
    }

    if(template != nullptr) {
        delete template;
    }

    if(timezone_code != nullptr) {
        delete timezone_code;
    }

    if(username != nullptr) {
        delete username;
    }
}

SWGUserResource*
SWGUserResource::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGUserResource::fromJsonObject(QJsonObject &pJson) {
    
    ::Swagger::setValue(&additional_properties, pJson["additional_properties"], "QMap", "SWGProperty");
    
    ::Swagger::setValue(&address, pJson["address"], "QString", "QString");
    ::Swagger::setValue(&address2, pJson["address2"], "QString", "QString");
    ::Swagger::setValue(&avatar_url, pJson["avatar_url"], "QString", "QString");
    
    ::Swagger::setValue(&children, pJson["children"], "QList", "SWGUserRelationshipReferenceResource");
    
    ::Swagger::setValue(&city, pJson["city"], "QString", "QString");
    ::Swagger::setValue(&country_code, pJson["country_code"], "QString", "QString");
    ::Swagger::setValue(&currency_code, pJson["currency_code"], "QString", "QString");
    ::Swagger::setValue(&date_of_birth, pJson["date_of_birth"], "qint64", "");
    ::Swagger::setValue(&description, pJson["description"], "QString", "QString");
    ::Swagger::setValue(&display_name, pJson["display_name"], "QString", "QString");
    ::Swagger::setValue(&email, pJson["email"], "QString", "QString");
    ::Swagger::setValue(&first_name, pJson["first_name"], "QString", "QString");
    ::Swagger::setValue(&fullname, pJson["fullname"], "QString", "QString");
    ::Swagger::setValue(&gender, pJson["gender"], "QString", "QString");
    ::Swagger::setValue(&id, pJson["id"], "qint32", "");
    ::Swagger::setValue(&language_code, pJson["language_code"], "QString", "QString");
    ::Swagger::setValue(&last_name, pJson["last_name"], "QString", "QString");
    ::Swagger::setValue(&mobile_number, pJson["mobile_number"], "QString", "QString");
    
    ::Swagger::setValue(&parents, pJson["parents"], "QList", "SWGUserRelationshipReferenceResource");
    
    ::Swagger::setValue(&password, pJson["password"], "QString", "QString");
    ::Swagger::setValue(&postal_code, pJson["postal_code"], "QString", "QString");
    ::Swagger::setValue(&state, pJson["state"], "QString", "QString");
    
    ::Swagger::setValue(&tags, pJson["tags"], "QList", "QString");
    
    ::Swagger::setValue(&template, pJson["template"], "QString", "QString");
    ::Swagger::setValue(&timezone_code, pJson["timezone_code"], "QString", "QString");
    ::Swagger::setValue(&username, pJson["username"], "QString", "QString");
}

QString
SWGUserResource::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGUserResource::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    QJsonArray additional_propertiesJsonArray;
    toJsonArray((QList<void*>*)additional_properties, &additional_propertiesJsonArray, "additional_properties", "SWGProperty");
    obj->insert("additional_properties", additional_propertiesJsonArray);

    toJsonValue(QString("address"), address, obj, QString("QString"));

    toJsonValue(QString("address2"), address2, obj, QString("QString"));

    toJsonValue(QString("avatar_url"), avatar_url, obj, QString("QString"));

    QJsonArray childrenJsonArray;
    toJsonArray((QList<void*>*)children, &childrenJsonArray, "children", "SWGUserRelationshipReferenceResource");
    obj->insert("children", childrenJsonArray);

    toJsonValue(QString("city"), city, obj, QString("QString"));

    toJsonValue(QString("country_code"), country_code, obj, QString("QString"));

    toJsonValue(QString("currency_code"), currency_code, obj, QString("QString"));

    obj->insert("date_of_birth", QJsonValue(date_of_birth));

    toJsonValue(QString("description"), description, obj, QString("QString"));

    toJsonValue(QString("display_name"), display_name, obj, QString("QString"));

    toJsonValue(QString("email"), email, obj, QString("QString"));

    toJsonValue(QString("first_name"), first_name, obj, QString("QString"));

    toJsonValue(QString("fullname"), fullname, obj, QString("QString"));

    toJsonValue(QString("gender"), gender, obj, QString("QString"));

    obj->insert("id", QJsonValue(id));

    toJsonValue(QString("language_code"), language_code, obj, QString("QString"));

    toJsonValue(QString("last_name"), last_name, obj, QString("QString"));

    toJsonValue(QString("mobile_number"), mobile_number, obj, QString("QString"));

    QJsonArray parentsJsonArray;
    toJsonArray((QList<void*>*)parents, &parentsJsonArray, "parents", "SWGUserRelationshipReferenceResource");
    obj->insert("parents", parentsJsonArray);

    toJsonValue(QString("password"), password, obj, QString("QString"));

    toJsonValue(QString("postal_code"), postal_code, obj, QString("QString"));

    toJsonValue(QString("state"), state, obj, QString("QString"));

    QJsonArray tagsJsonArray;
    toJsonArray((QList<void*>*)tags, &tagsJsonArray, "tags", "QString");
    obj->insert("tags", tagsJsonArray);

    toJsonValue(QString("template"), template, obj, QString("QString"));

    toJsonValue(QString("timezone_code"), timezone_code, obj, QString("QString"));

    toJsonValue(QString("username"), username, obj, QString("QString"));

    return obj;
}

QMap<QString, SWGProperty*>*
SWGUserResource::getAdditionalProperties() {
    return additional_properties;
}
void
SWGUserResource::setAdditionalProperties(QMap<QString, SWGProperty*>* additional_properties) {
    this->additional_properties = additional_properties;
}

QString*
SWGUserResource::getAddress() {
    return address;
}
void
SWGUserResource::setAddress(QString* address) {
    this->address = address;
}

QString*
SWGUserResource::getAddress2() {
    return address2;
}
void
SWGUserResource::setAddress2(QString* address2) {
    this->address2 = address2;
}

QString*
SWGUserResource::getAvatarUrl() {
    return avatar_url;
}
void
SWGUserResource::setAvatarUrl(QString* avatar_url) {
    this->avatar_url = avatar_url;
}

QList<SWGUserRelationshipReferenceResource*>*
SWGUserResource::getChildren() {
    return children;
}
void
SWGUserResource::setChildren(QList<SWGUserRelationshipReferenceResource*>* children) {
    this->children = children;
}

QString*
SWGUserResource::getCity() {
    return city;
}
void
SWGUserResource::setCity(QString* city) {
    this->city = city;
}

QString*
SWGUserResource::getCountryCode() {
    return country_code;
}
void
SWGUserResource::setCountryCode(QString* country_code) {
    this->country_code = country_code;
}

QString*
SWGUserResource::getCurrencyCode() {
    return currency_code;
}
void
SWGUserResource::setCurrencyCode(QString* currency_code) {
    this->currency_code = currency_code;
}

qint64
SWGUserResource::getDateOfBirth() {
    return date_of_birth;
}
void
SWGUserResource::setDateOfBirth(qint64 date_of_birth) {
    this->date_of_birth = date_of_birth;
}

QString*
SWGUserResource::getDescription() {
    return description;
}
void
SWGUserResource::setDescription(QString* description) {
    this->description = description;
}

QString*
SWGUserResource::getDisplayName() {
    return display_name;
}
void
SWGUserResource::setDisplayName(QString* display_name) {
    this->display_name = display_name;
}

QString*
SWGUserResource::getEmail() {
    return email;
}
void
SWGUserResource::setEmail(QString* email) {
    this->email = email;
}

QString*
SWGUserResource::getFirstName() {
    return first_name;
}
void
SWGUserResource::setFirstName(QString* first_name) {
    this->first_name = first_name;
}

QString*
SWGUserResource::getFullname() {
    return fullname;
}
void
SWGUserResource::setFullname(QString* fullname) {
    this->fullname = fullname;
}

QString*
SWGUserResource::getGender() {
    return gender;
}
void
SWGUserResource::setGender(QString* gender) {
    this->gender = gender;
}

qint32
SWGUserResource::getId() {
    return id;
}
void
SWGUserResource::setId(qint32 id) {
    this->id = id;
}

QString*
SWGUserResource::getLanguageCode() {
    return language_code;
}
void
SWGUserResource::setLanguageCode(QString* language_code) {
    this->language_code = language_code;
}

QString*
SWGUserResource::getLastName() {
    return last_name;
}
void
SWGUserResource::setLastName(QString* last_name) {
    this->last_name = last_name;
}

QString*
SWGUserResource::getMobileNumber() {
    return mobile_number;
}
void
SWGUserResource::setMobileNumber(QString* mobile_number) {
    this->mobile_number = mobile_number;
}

QList<SWGUserRelationshipReferenceResource*>*
SWGUserResource::getParents() {
    return parents;
}
void
SWGUserResource::setParents(QList<SWGUserRelationshipReferenceResource*>* parents) {
    this->parents = parents;
}

QString*
SWGUserResource::getPassword() {
    return password;
}
void
SWGUserResource::setPassword(QString* password) {
    this->password = password;
}

QString*
SWGUserResource::getPostalCode() {
    return postal_code;
}
void
SWGUserResource::setPostalCode(QString* postal_code) {
    this->postal_code = postal_code;
}

QString*
SWGUserResource::getState() {
    return state;
}
void
SWGUserResource::setState(QString* state) {
    this->state = state;
}

QList<QString*>*
SWGUserResource::getTags() {
    return tags;
}
void
SWGUserResource::setTags(QList<QString*>* tags) {
    this->tags = tags;
}

QString*
SWGUserResource::getTemplate() {
    return template;
}
void
SWGUserResource::setTemplate(QString* template) {
    this->template = template;
}

QString*
SWGUserResource::getTimezoneCode() {
    return timezone_code;
}
void
SWGUserResource::setTimezoneCode(QString* timezone_code) {
    this->timezone_code = timezone_code;
}

QString*
SWGUserResource::getUsername() {
    return username;
}
void
SWGUserResource::setUsername(QString* username) {
    this->username = username;
}



} /* namespace Swagger */

