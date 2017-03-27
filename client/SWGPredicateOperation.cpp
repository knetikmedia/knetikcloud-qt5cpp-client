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


#include "SWGPredicateOperation.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGPredicateOperation::SWGPredicateOperation(QString* json) {
    init();
    this->fromJson(*json);
}

SWGPredicateOperation::SWGPredicateOperation() {
    init();
}

SWGPredicateOperation::~SWGPredicateOperation() {
    this->cleanup();
}

void
SWGPredicateOperation::init() {
    args = new QList<SWGExpression«object»*>();
    operator = new SWGOperator();
}

void
SWGPredicateOperation::cleanup() {
    
    if(args != nullptr) {
        QList<SWGExpression«object»*>* arr = args;
        foreach(SWGExpression«object»* o, *arr) {
            delete o;
        }
        delete args;
    }

    if(operator != nullptr) {
        delete operator;
    }
}

SWGPredicateOperation*
SWGPredicateOperation::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGPredicateOperation::fromJsonObject(QJsonObject &pJson) {
    
    ::Swagger::setValue(&args, pJson["args"], "QList", "SWGExpression«object»");
    
    ::Swagger::setValue(&operator, pJson["operator"], "SWGOperator", "SWGOperator");
}

QString
SWGPredicateOperation::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGPredicateOperation::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    QJsonArray argsJsonArray;
    toJsonArray((QList<void*>*)args, &argsJsonArray, "args", "SWGExpression«object»");
    obj->insert("args", argsJsonArray);

    toJsonValue(QString("operator"), operator, obj, QString("SWGOperator"));

    return obj;
}

QList<SWGExpression«object»*>*
SWGPredicateOperation::getArgs() {
    return args;
}
void
SWGPredicateOperation::setArgs(QList<SWGExpression«object»*>* args) {
    this->args = args;
}

SWGOperator*
SWGPredicateOperation::getOperator() {
    return operator;
}
void
SWGPredicateOperation::setOperator(SWGOperator* operator) {
    this->operator = operator;
}



} /* namespace Swagger */
