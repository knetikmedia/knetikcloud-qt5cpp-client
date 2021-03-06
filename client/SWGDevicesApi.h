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

#ifndef _SWG_SWGDevicesApi_H_
#define _SWG_SWGDevicesApi_H_

#include "SWGHttpRequest.h"

#include <QString>
#include "SWGDeviceResource.h"
#include "SWGPageResource«DeviceResource».h"
#include "SWGResult.h"

#include <QObject>

namespace Swagger {

class SWGDevicesApi: public QObject {
    Q_OBJECT

public:
    SWGDevicesApi();
    SWGDevicesApi(QString host, QString basePath);
    ~SWGDevicesApi();

    QString host;
    QString basePath;

    void createDevice(SWGDeviceResource device);
    void deleteDevice(qint32 id);
    void getDevice(qint32 id);
    void getDevices(QString* filter_make, QString* filter_model, qint32 size, qint32 page, QString* order);
    void updateDevice(SWGDeviceResource device, qint32 id);
    
private:
    void createDeviceCallback (HttpRequestWorker * worker);
    void deleteDeviceCallback (HttpRequestWorker * worker);
    void getDeviceCallback (HttpRequestWorker * worker);
    void getDevicesCallback (HttpRequestWorker * worker);
    void updateDeviceCallback (HttpRequestWorker * worker);
    
signals:
    void createDeviceSignal(SWGDeviceResource* summary);
    void deleteDeviceSignal();
    void getDeviceSignal(SWGDeviceResource* summary);
    void getDevicesSignal(SWGPageResource«DeviceResource»* summary);
    void updateDeviceSignal(SWGDeviceResource* summary);
    
};
}
#endif
