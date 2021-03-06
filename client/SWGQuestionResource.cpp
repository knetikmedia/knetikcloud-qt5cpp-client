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


#include "SWGQuestionResource.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGQuestionResource::SWGQuestionResource(QString* json) {
    init();
    this->fromJson(*json);
}

SWGQuestionResource::SWGQuestionResource() {
    init();
}

SWGQuestionResource::~SWGQuestionResource() {
    this->cleanup();
}

void
SWGQuestionResource::init() {
    additional_properties = new QMap<QString, SWGProperty>();
    answers = new QList<SWGAnswerResource*>();
    category = new SWGNestedCategory();
    created_date = 0L;
    difficulty = 0;
    id = new QString("");
    import_id = 0L;
    published_date = 0L;
    question = new SWGProperty();
    source1 = new QString("");
    source2 = new QString("");
    tags = new QList<QString*>();
    template = new QString("");
    updated_date = 0L;
    vendor = new QString("");
}

void
SWGQuestionResource::cleanup() {
    
    if(additional_properties != nullptr) {
        QList<SWGProperty*>* arr = additional_properties;
        foreach(SWGProperty* o, *arr) {
            delete o;
        }
        delete additional_properties;
    }

    if(answers != nullptr) {
        QList<SWGAnswerResource*>* arr = answers;
        foreach(SWGAnswerResource* o, *arr) {
            delete o;
        }
        delete answers;
    }

    if(category != nullptr) {
        delete category;
    }



    if(id != nullptr) {
        delete id;
    }



    if(question != nullptr) {
        delete question;
    }

    if(source1 != nullptr) {
        delete source1;
    }

    if(source2 != nullptr) {
        delete source2;
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


    if(vendor != nullptr) {
        delete vendor;
    }
}

SWGQuestionResource*
SWGQuestionResource::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGQuestionResource::fromJsonObject(QJsonObject &pJson) {
    
    ::Swagger::setValue(&additional_properties, pJson["additional_properties"], "QMap", "SWGProperty");
    
    
    ::Swagger::setValue(&answers, pJson["answers"], "QList", "SWGAnswerResource");
    
    ::Swagger::setValue(&category, pJson["category"], "SWGNestedCategory", "SWGNestedCategory");
    ::Swagger::setValue(&created_date, pJson["created_date"], "qint64", "");
    ::Swagger::setValue(&difficulty, pJson["difficulty"], "qint32", "");
    ::Swagger::setValue(&id, pJson["id"], "QString", "QString");
    ::Swagger::setValue(&import_id, pJson["import_id"], "qint64", "");
    ::Swagger::setValue(&published_date, pJson["published_date"], "qint64", "");
    ::Swagger::setValue(&question, pJson["question"], "SWGProperty", "SWGProperty");
    ::Swagger::setValue(&source1, pJson["source1"], "QString", "QString");
    ::Swagger::setValue(&source2, pJson["source2"], "QString", "QString");
    
    ::Swagger::setValue(&tags, pJson["tags"], "QList", "QString");
    
    ::Swagger::setValue(&template, pJson["template"], "QString", "QString");
    ::Swagger::setValue(&updated_date, pJson["updated_date"], "qint64", "");
    ::Swagger::setValue(&vendor, pJson["vendor"], "QString", "QString");
}

QString
SWGQuestionResource::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGQuestionResource::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    QJsonArray additional_propertiesJsonArray;
    toJsonArray((QList<void*>*)additional_properties, &additional_propertiesJsonArray, "additional_properties", "SWGProperty");
    obj->insert("additional_properties", additional_propertiesJsonArray);

    QJsonArray answersJsonArray;
    toJsonArray((QList<void*>*)answers, &answersJsonArray, "answers", "SWGAnswerResource");
    obj->insert("answers", answersJsonArray);

    toJsonValue(QString("category"), category, obj, QString("SWGNestedCategory"));

    obj->insert("created_date", QJsonValue(created_date));

    obj->insert("difficulty", QJsonValue(difficulty));

    toJsonValue(QString("id"), id, obj, QString("QString"));

    obj->insert("import_id", QJsonValue(import_id));

    obj->insert("published_date", QJsonValue(published_date));

    toJsonValue(QString("question"), question, obj, QString("SWGProperty"));

    toJsonValue(QString("source1"), source1, obj, QString("QString"));

    toJsonValue(QString("source2"), source2, obj, QString("QString"));

    QJsonArray tagsJsonArray;
    toJsonArray((QList<void*>*)tags, &tagsJsonArray, "tags", "QString");
    obj->insert("tags", tagsJsonArray);

    toJsonValue(QString("template"), template, obj, QString("QString"));

    obj->insert("updated_date", QJsonValue(updated_date));

    toJsonValue(QString("vendor"), vendor, obj, QString("QString"));

    return obj;
}

QMap<QString, SWGProperty*>*
SWGQuestionResource::getAdditionalProperties() {
    return additional_properties;
}
void
SWGQuestionResource::setAdditionalProperties(QMap<QString, SWGProperty*>* additional_properties) {
    this->additional_properties = additional_properties;
}

QList<SWGAnswerResource*>*
SWGQuestionResource::getAnswers() {
    return answers;
}
void
SWGQuestionResource::setAnswers(QList<SWGAnswerResource*>* answers) {
    this->answers = answers;
}

SWGNestedCategory*
SWGQuestionResource::getCategory() {
    return category;
}
void
SWGQuestionResource::setCategory(SWGNestedCategory* category) {
    this->category = category;
}

qint64
SWGQuestionResource::getCreatedDate() {
    return created_date;
}
void
SWGQuestionResource::setCreatedDate(qint64 created_date) {
    this->created_date = created_date;
}

qint32
SWGQuestionResource::getDifficulty() {
    return difficulty;
}
void
SWGQuestionResource::setDifficulty(qint32 difficulty) {
    this->difficulty = difficulty;
}

QString*
SWGQuestionResource::getId() {
    return id;
}
void
SWGQuestionResource::setId(QString* id) {
    this->id = id;
}

qint64
SWGQuestionResource::getImportId() {
    return import_id;
}
void
SWGQuestionResource::setImportId(qint64 import_id) {
    this->import_id = import_id;
}

qint64
SWGQuestionResource::getPublishedDate() {
    return published_date;
}
void
SWGQuestionResource::setPublishedDate(qint64 published_date) {
    this->published_date = published_date;
}

SWGProperty*
SWGQuestionResource::getQuestion() {
    return question;
}
void
SWGQuestionResource::setQuestion(SWGProperty* question) {
    this->question = question;
}

QString*
SWGQuestionResource::getSource1() {
    return source1;
}
void
SWGQuestionResource::setSource1(QString* source1) {
    this->source1 = source1;
}

QString*
SWGQuestionResource::getSource2() {
    return source2;
}
void
SWGQuestionResource::setSource2(QString* source2) {
    this->source2 = source2;
}

QList<QString*>*
SWGQuestionResource::getTags() {
    return tags;
}
void
SWGQuestionResource::setTags(QList<QString*>* tags) {
    this->tags = tags;
}

QString*
SWGQuestionResource::getTemplate() {
    return template;
}
void
SWGQuestionResource::setTemplate(QString* template) {
    this->template = template;
}

qint64
SWGQuestionResource::getUpdatedDate() {
    return updated_date;
}
void
SWGQuestionResource::setUpdatedDate(qint64 updated_date) {
    this->updated_date = updated_date;
}

QString*
SWGQuestionResource::getVendor() {
    return vendor;
}
void
SWGQuestionResource::setVendor(QString* vendor) {
    this->vendor = vendor;
}



} /* namespace Swagger */

