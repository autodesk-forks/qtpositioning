/****************************************************************************
**
** Copyright (C) 2022 The Qt Company Ltd.
** Contact: https://www.qt.io/licensing/
**
** This file is part of the QtPositioning module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:COMM$
**
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see https://www.qt.io/terms-conditions. For further
** information use the contact form at https://www.qt.io/contact-us.
**
** $QT_END_LICENSE$
**
**
**
**
**
**
**
**
**
**
**
**
**
**
**
**
**
**
**
******************************************************************************/

#ifndef QGEOPOSITIONINFOSOURCEFACTORY_H
#define QGEOPOSITIONINFOSOURCEFACTORY_H

#include <QtPositioning/QGeoPositionInfoSource>
#include <QtPositioning/QGeoSatelliteInfoSource>
#include <QtPositioning/QGeoAreaMonitorSource>
#include <QtCore/QList>

QT_BEGIN_NAMESPACE

class Q_POSITIONING_EXPORT QGeoPositionInfoSourceFactory
{
public:
    virtual ~QGeoPositionInfoSourceFactory();

    virtual QGeoPositionInfoSource *positionInfoSource(QObject *parent, const QVariantMap &parameters) = 0;
    virtual QGeoSatelliteInfoSource *satelliteInfoSource(QObject *parent, const QVariantMap &parameters) = 0;
    virtual QGeoAreaMonitorSource *areaMonitor(QObject *parent, const QVariantMap &parameters) = 0;
};

#define QT_POSITION_SOURCE_INTERFACE
Q_DECLARE_INTERFACE(QGeoPositionInfoSourceFactory,
                    "org.qt-project.qt.position.sourcefactory/6.0")

QT_END_NAMESPACE

#endif // QGEOPOSITIONINFOSOURCEFACTORY_H
