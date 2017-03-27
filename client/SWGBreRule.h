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

/*
 * SWGBreRule.h
 * 
 * 
 */

#ifndef SWGBreRule_H_
#define SWGBreRule_H_

#include <QJsonObject>


#include "SWGActionResource.h"
#include "SWGPredicateOperation.h"
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGBreRule: public SWGObject {
public:
    SWGBreRule();
    SWGBreRule(QString* json);
    virtual ~SWGBreRule();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGBreRule* fromJson(QString &jsonString);

    SWGActionResource* getActions();
    void setActions(SWGActionResource* actions);

    SWGPredicateOperation* getCondition();
    void setCondition(SWGPredicateOperation* condition);

    QString* getConditionText();
    void setConditionText(QString* condition_text);

    QString* getDescription();
    void setDescription(QString* description);

    bool getEnabled();
    void setEnabled(bool enabled);

    qint64 getEndDate();
    void setEndDate(qint64 end_date);

    QString* getEventName();
    void setEventName(QString* event_name);

    QString* getId();
    void setId(QString* id);

    QString* getName();
    void setName(QString* name);

    qint32 getSort();
    void setSort(qint32 sort);

    qint64 getStartDate();
    void setStartDate(qint64 start_date);

    bool getSystemRule();
    void setSystemRule(bool system_rule);


private:
    SWGActionResource* actions;
    SWGPredicateOperation* condition;
    QString* condition_text;
    QString* description;
    bool enabled;
    qint64 end_date;
    QString* event_name;
    QString* id;
    QString* name;
    qint32 sort;
    qint64 start_date;
    bool system_rule;
};

} /* namespace Swagger */

#endif /* SWGBreRule_H_ */