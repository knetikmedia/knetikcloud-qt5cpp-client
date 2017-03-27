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
 * SWGSearchReferenceMapping.h
 * 
 * 
 */

#ifndef SWGSearchReferenceMapping_H_
#define SWGSearchReferenceMapping_H_

#include <QJsonObject>


#include <QList>
#include <QMap>
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGSearchReferenceMapping: public SWGObject {
public:
    SWGSearchReferenceMapping();
    SWGSearchReferenceMapping(QString* json);
    virtual ~SWGSearchReferenceMapping();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGSearchReferenceMapping* fromJson(QString &jsonString);

    QString* getId();
    void setId(QString* id);

    QString* getRefIdField();
    void setRefIdField(QString* ref_id_field);

    QString* getRefType();
    void setRefType(QString* ref_type);

    QMap<QString, QString*>* getSourceFieldToDestinationField();
    void setSourceFieldToDestinationField(QMap<QString, QString*>* source_field_to_destination_field);

    QString* getType();
    void setType(QString* type);


private:
    QString* id;
    QString* ref_id_field;
    QString* ref_type;
    QMap<QString, QString*>* source_field_to_destination_field;
    QString* type;
};

} /* namespace Swagger */

#endif /* SWGSearchReferenceMapping_H_ */
