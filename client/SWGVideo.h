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
 * SWGVideo.h
 * 
 * 
 */

#ifndef SWGVideo_H_
#define SWGVideo_H_

#include <QJsonObject>


#include "SWGArtist.h"
#include "SWGCollection«VideoContribution».h"
#include "SWGUser.h"
#include "SWGVideoTag.h"
#include <QList>
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGVideo: public SWGObject {
public:
    SWGVideo();
    SWGVideo(QString* json);
    virtual ~SWGVideo();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGVideo* fromJson(QString &jsonString);

    bool getActive();
    void setActive(bool active);

    SWGArtist* getAuthor();
    void setAuthor(SWGArtist* author);

    qint64 getAuthored();
    void setAuthored(qint64 authored);

    bool getBanned();
    void setBanned(bool banned);

    QString* getCategoryId();
    void setCategoryId(QString* category_id);

    QString* getCategoryName();
    void setCategoryName(QString* category_name);

    SWGCollection«VideoContribution»* getContributors();
    void setContributors(SWGCollection«VideoContribution»* contributors);

    qint64 getCreated();
    void setCreated(qint64 created);

    QString* getEmbed();
    void setEmbed(QString* embed);

    QString* getExtension();
    void setExtension(QString* extension);

    qint32 getHeight();
    void setHeight(qint32 height);

    qint64 getId();
    void setId(qint64 id);

    qint32 getLength();
    void setLength(qint32 length);

    QString* getLocation();
    void setLocation(QString* location);

    QString* getLongDescription();
    void setLongDescription(QString* long_description);

    QString* getMimeType();
    void setMimeType(QString* mime_type);

    QString* getName();
    void setName(QString* name);

    qint32 getPriority();
    void setPriority(qint32 priority);

    QString* getPrivacy();
    void setPrivacy(QString* privacy);

    bool getPublished();
    void setPublished(bool published);

    QString* getShortDescription();
    void setShortDescription(QString* short_description);

    qint64 getSize();
    void setSize(qint64 size);

    QList<SWGVideoTag*>* getTags();
    void setTags(QList<SWGVideoTag*>* tags);

    QString* getThumbnail();
    void setThumbnail(QString* thumbnail);

    qint64 getUpdated();
    void setUpdated(qint64 updated);

    SWGUser* getUploader();
    void setUploader(SWGUser* uploader);

    qint64 getViews();
    void setViews(qint64 views);

    QList<SWGUser*>* getWhitelist();
    void setWhitelist(QList<SWGUser*>* whitelist);

    qint32 getWidth();
    void setWidth(qint32 width);


private:
    bool active;
    SWGArtist* author;
    qint64 authored;
    bool banned;
    QString* category_id;
    QString* category_name;
    SWGCollection«VideoContribution»* contributors;
    qint64 created;
    QString* embed;
    QString* extension;
    qint32 height;
    qint64 id;
    qint32 length;
    QString* location;
    QString* long_description;
    QString* mime_type;
    QString* name;
    qint32 priority;
    QString* privacy;
    bool published;
    QString* short_description;
    qint64 size;
    QList<SWGVideoTag*>* tags;
    QString* thumbnail;
    qint64 updated;
    SWGUser* uploader;
    qint64 views;
    QList<SWGUser*>* whitelist;
    qint32 width;
};

} /* namespace Swagger */

#endif /* SWGVideo_H_ */