// Copyright (C) 2021 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial

#ifndef JNIPOSITIONING_H
#define JNIPOSITIONING_H

#include <QGeoPositionInfoSource>
#include <QGeoSatelliteInfoSource>

namespace AndroidPositioning
{
    int registerPositionInfoSource(QObject *obj);
    void unregisterPositionInfoSource(int key);

    QGeoPositionInfoSource::PositioningMethods availableProviders();
    QGeoPositionInfo lastKnownPosition(bool fromSatellitePositioningMethodsOnly);

    QGeoPositionInfoSource::Error startUpdates(int androidClassKey);
    void stopUpdates(int androidClassKey);
    QGeoPositionInfoSource::Error requestUpdate(int androidClassKey, int timeout);

    QGeoSatelliteInfoSource::Error startSatelliteUpdates(int androidClassKey,
                                                         bool isSingleRequest,
                                                         int updateRequestTimeout);
    bool requestionPositioningPermissions();
}

#endif // JNIPOSITIONING_H
