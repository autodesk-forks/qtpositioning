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

#include "positionpollfactory.h"
#include "qgeoareamonitor_polling.h"

QT_BEGIN_NAMESPACE

QGeoPositionInfoSource *QGeoPositionInfoSourceFactoryPoll::positionInfoSource(QObject *parent, const QVariantMap &parameters)
{
    Q_UNUSED(parent)
    Q_UNUSED(parameters)
    return nullptr;
}

QGeoSatelliteInfoSource *QGeoPositionInfoSourceFactoryPoll::satelliteInfoSource(QObject *parent, const QVariantMap &parameters)
{
    Q_UNUSED(parent)
    Q_UNUSED(parameters)
    return nullptr;
}

QGeoAreaMonitorSource *QGeoPositionInfoSourceFactoryPoll::areaMonitor(QObject *parent, const QVariantMap &parameters)
{
    Q_UNUSED(parameters)
    QGeoAreaMonitorPolling *ret = new QGeoAreaMonitorPolling(parent);
    if (ret && ret->isValid())
        return ret;
    delete ret;
    return nullptr;
}

QT_END_NAMESPACE

#include "moc_positionpollfactory.cpp"
