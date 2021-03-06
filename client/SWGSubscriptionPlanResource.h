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
 * SWGSubscriptionPlanResource.h
 * 
 * 
 */

#ifndef SWGSubscriptionPlanResource_H_
#define SWGSubscriptionPlanResource_H_

#include <QJsonObject>


#include "SWGProperty.h"
#include <QList>
#include <QMap>
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGSubscriptionPlanResource: public SWGObject {
public:
    SWGSubscriptionPlanResource();
    SWGSubscriptionPlanResource(QString* json);
    virtual ~SWGSubscriptionPlanResource();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGSubscriptionPlanResource* fromJson(QString &jsonString);

    QMap<QString, SWGProperty*>* getAdditionalProperties();
    void setAdditionalProperties(QMap<QString, SWGProperty*>* additional_properties);

    qint32 getBillingCycleLength();
    void setBillingCycleLength(qint32 billing_cycle_length);

    QString* getBillingCycleUnit();
    void setBillingCycleUnit(QString* billing_cycle_unit);

    bool getConsolidated();
    void setConsolidated(bool consolidated);

    QString* getCurrencyCode();
    void setCurrencyCode(QString* currency_code);

    qint64 getEndDate();
    void setEndDate(qint64 end_date);

    qint32 getFirstBillingCycleLength();
    void setFirstBillingCycleLength(qint32 first_billing_cycle_length);

    QString* getFirstBillingCycleUnit();
    void setFirstBillingCycleUnit(QString* first_billing_cycle_unit);

    qint32 getGracePeriod();
    void setGracePeriod(qint32 grace_period);

    QString* getId();
    void setId(QString* id);

    double getInitialFee();
    void setInitialFee(double initial_fee);

    QString* getInitialSku();
    void setInitialSku(QString* initial_sku);

    double getLatePaymentFee();
    void setLatePaymentFee(double late_payment_fee);

    QString* getLatePaymentSku();
    void setLatePaymentSku(QString* late_payment_sku);

    bool getLocked();
    void setLocked(bool locked);

    qint32 getMaxBillAttempts();
    void setMaxBillAttempts(qint32 max_bill_attempts);

    qint32 getMaxCycles();
    void setMaxCycles(qint32 max_cycles);

    QString* getMigrateToPlan();
    void setMigrateToPlan(QString* migrate_to_plan);

    qint32 getMinCycles();
    void setMinCycles(qint32 min_cycles);

    QString* getName();
    void setName(QString* name);

    bool getPublished();
    void setPublished(bool published);

    double getReactivationFee();
    void setReactivationFee(double reactivation_fee);

    QString* getReactivationSku();
    void setReactivationSku(QString* reactivation_sku);

    double getRecurringFee();
    void setRecurringFee(double recurring_fee);

    QString* getRecurringSku();
    void setRecurringSku(QString* recurring_sku);

    qint64 getStartDate();
    void setStartDate(qint64 start_date);


private:
    QMap<QString, SWGProperty*>* additional_properties;
    qint32 billing_cycle_length;
    QString* billing_cycle_unit;
    bool consolidated;
    QString* currency_code;
    qint64 end_date;
    qint32 first_billing_cycle_length;
    QString* first_billing_cycle_unit;
    qint32 grace_period;
    QString* id;
    double initial_fee;
    QString* initial_sku;
    double late_payment_fee;
    QString* late_payment_sku;
    bool locked;
    qint32 max_bill_attempts;
    qint32 max_cycles;
    QString* migrate_to_plan;
    qint32 min_cycles;
    QString* name;
    bool published;
    double reactivation_fee;
    QString* reactivation_sku;
    double recurring_fee;
    QString* recurring_sku;
    qint64 start_date;
};

} /* namespace Swagger */

#endif /* SWGSubscriptionPlanResource_H_ */
