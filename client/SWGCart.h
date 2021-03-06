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
 * SWGCart.h
 * 
 * 
 */

#ifndef SWGCart_H_
#define SWGCart_H_

#include <QJsonObject>


#include "SWGCartLineItem.h"
#include "SWGCartShippingAddressRequest.h"
#include "SWGCartShippingOption.h"
#include "SWGCouponDefinition.h"
#include <QList>
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGCart: public SWGObject {
public:
    SWGCart();
    SWGCart(QString* json);
    virtual ~SWGCart();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGCart* fromJson(QString &jsonString);

    QList<SWGCartShippingOption*>* getAvailableShippingOptions();
    void setAvailableShippingOptions(QList<SWGCartShippingOption*>* available_shipping_options);

    double getCountryTax();
    void setCountryTax(double country_tax);

    QList<SWGCouponDefinition*>* getCoupons();
    void setCoupons(QList<SWGCouponDefinition*>* coupons);

    qint64 getCreated();
    void setCreated(qint64 created);

    QString* getCurrencyCode();
    void setCurrencyCode(QString* currency_code);

    double getDiscountTotal();
    void setDiscountTotal(double discount_total);

    qint32 getErrorCode();
    void setErrorCode(qint32 error_code);

    QString* getErrorMessage();
    void setErrorMessage(QString* error_message);

    double getGrandTotal();
    void setGrandTotal(double grand_total);

    QString* getId();
    void setId(QString* id);

    double getInvoiceId();
    void setInvoiceId(double invoice_id);

    QList<SWGCartLineItem*>* getItems();
    void setItems(QList<SWGCartLineItem*>* items);

    qint32 getOwner();
    void setOwner(qint32 owner);

    QList<SWGCartShippingOption*>* getSelectedShippingOptions();
    void setSelectedShippingOptions(QList<SWGCartShippingOption*>* selected_shipping_options);

    bool getShippable();
    void setShippable(bool shippable);

    SWGCartShippingAddressRequest* getShippingAddress();
    void setShippingAddress(SWGCartShippingAddressRequest* shipping_address);

    double getShippingCost();
    void setShippingCost(double shipping_cost);

    double getStateTax();
    void setStateTax(double state_tax);

    QString* getStatus();
    void setStatus(QString* status);

    double getSubtotal();
    void setSubtotal(double subtotal);

    qint64 getUpdated();
    void setUpdated(qint64 updated);


private:
    QList<SWGCartShippingOption*>* available_shipping_options;
    double country_tax;
    QList<SWGCouponDefinition*>* coupons;
    qint64 created;
    QString* currency_code;
    double discount_total;
    qint32 error_code;
    QString* error_message;
    double grand_total;
    QString* id;
    double invoice_id;
    QList<SWGCartLineItem*>* items;
    qint32 owner;
    QList<SWGCartShippingOption*>* selected_shipping_options;
    bool shippable;
    SWGCartShippingAddressRequest* shipping_address;
    double shipping_cost;
    double state_tax;
    QString* status;
    double subtotal;
    qint64 updated;
};

} /* namespace Swagger */

#endif /* SWGCart_H_ */
