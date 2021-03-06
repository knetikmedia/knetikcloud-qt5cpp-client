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
 * SWGUser.h
 * 
 * 
 */

#ifndef SWGUser_H_
#define SWGUser_H_

#include <QJsonObject>


#include "SWGAffiliate.h"
#include "SWGCountry.h"
#include "SWGCurrency.h"
#include "SWGGroupMember.h"
#include "SWGLanguage.h"
#include "SWGProperty.h"
#include "SWGRole.h"
#include "SWGTimezone.h"
#include "SWGUserRelationship.h"
#include "SWGUserTag.h"
#include <QList>
#include <QMap>
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGUser: public SWGObject {
public:
    SWGUser();
    SWGUser(QString* json);
    virtual ~SWGUser();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGUser* fromJson(QString &jsonString);

    QMap<QString, SWGProperty*>* getAdditionalProperties();
    void setAdditionalProperties(QMap<QString, SWGProperty*>* additional_properties);

    QString* getAddress();
    void setAddress(QString* address);

    QString* getAddress2();
    void setAddress2(QString* address2);

    SWGAffiliate* getAffiliate();
    void setAffiliate(SWGAffiliate* affiliate);

    QString* getAvatarUrl();
    void setAvatarUrl(QString* avatar_url);

    QList<SWGUserRelationship*>* getChildren();
    void setChildren(QList<SWGUserRelationship*>* children);

    QString* getCity();
    void setCity(QString* city);

    SWGCountry* getCountry();
    void setCountry(SWGCountry* country);

    SWGCurrency* getCurrency();
    void setCurrency(SWGCurrency* currency);

    qint64 getDateCreated();
    void setDateCreated(qint64 date_created);

    qint64 getDateOfBirth();
    void setDateOfBirth(qint64 date_of_birth);

    qint64 getDateUpdated();
    void setDateUpdated(qint64 date_updated);

    QString* getDescription();
    void setDescription(QString* description);

    QString* getDisplayName();
    void setDisplayName(QString* display_name);

    QString* getEmail();
    void setEmail(QString* email);

    QString* getFirstName();
    void setFirstName(QString* first_name);

    QString* getFullname();
    void setFullname(QString* fullname);

    QString* getGender();
    void setGender(QString* gender);

    QList<SWGGroupMember*>* getGroups();
    void setGroups(QList<SWGGroupMember*>* groups);

    bool getGuest();
    void setGuest(bool guest);

    qint32 getId();
    void setId(qint32 id);

    QString* getInviteToken();
    void setInviteToken(QString* invite_token);

    SWGLanguage* getLang();
    void setLang(SWGLanguage* lang);

    qint64 getLastActivity();
    void setLastActivity(qint64 last_activity);

    qint64 getLastLogin();
    void setLastLogin(qint64 last_login);

    QString* getLastName();
    void setLastName(QString* last_name);

    qint32 getLockoutAttempts();
    void setLockoutAttempts(qint32 lockout_attempts);

    qint64 getLockoutDate();
    void setLockoutDate(qint64 lockout_date);

    QString* getMobileNumber();
    void setMobileNumber(QString* mobile_number);

    qint32 getOldId();
    void setOldId(qint32 old_id);

    QList<SWGUserRelationship*>* getParents();
    void setParents(QList<SWGUserRelationship*>* parents);

    QString* getPassword();
    void setPassword(QString* password);

    QString* getPostalCode();
    void setPostalCode(QString* postal_code);

    QString* getPropertiesString();
    void setPropertiesString(QString* properties_string);

    QList<SWGRole*>* getRoles();
    void setRoles(QList<SWGRole*>* roles);

    QString* getState();
    void setState(QString* state);

    QString* getStatus();
    void setStatus(QString* status);

    QList<QString*>* getTagStrings();
    void setTagStrings(QList<QString*>* tag_strings);

    QList<SWGUserTag*>* getTags();
    void setTags(QList<SWGUserTag*>* tags);

    QString* getTemplate();
    void setTemplate(QString* template);

    SWGTimezone* getTimezone();
    void setTimezone(SWGTimezone* timezone);

    QString* getToken();
    void setToken(QString* token);

    QString* getTypeHint();
    void setTypeHint(QString* type_hint);

    QString* getUsername();
    void setUsername(QString* username);


private:
    QMap<QString, SWGProperty*>* additional_properties;
    QString* address;
    QString* address2;
    SWGAffiliate* affiliate;
    QString* avatar_url;
    QList<SWGUserRelationship*>* children;
    QString* city;
    SWGCountry* country;
    SWGCurrency* currency;
    qint64 date_created;
    qint64 date_of_birth;
    qint64 date_updated;
    QString* description;
    QString* display_name;
    QString* email;
    QString* first_name;
    QString* fullname;
    QString* gender;
    QList<SWGGroupMember*>* groups;
    bool guest;
    qint32 id;
    QString* invite_token;
    SWGLanguage* lang;
    qint64 last_activity;
    qint64 last_login;
    QString* last_name;
    qint32 lockout_attempts;
    qint64 lockout_date;
    QString* mobile_number;
    qint32 old_id;
    QList<SWGUserRelationship*>* parents;
    QString* password;
    QString* postal_code;
    QString* properties_string;
    QList<SWGRole*>* roles;
    QString* state;
    QString* status;
    QList<QString*>* tag_strings;
    QList<SWGUserTag*>* tags;
    QString* template;
    SWGTimezone* timezone;
    QString* token;
    QString* type_hint;
    QString* username;
};

} /* namespace Swagger */

#endif /* SWGUser_H_ */
