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

#ifndef QQUICKGEOCOORDINATEANIMATION_P_P_H
#define QQUICKGEOCOORDINATEANIMATION_P_P_H

//
//  W A R N I N G
//  -------------
//
// This file is not part of the Qt API.  It exists purely as an
// implementation detail.  This header file may change from version to
// version without notice, or even be removed.
//
// We mean it.
//

#include "qquickgeocoordinateanimation_p.h"
#include <QtQuick/private/qquickanimation_p_p.h>
#include <QtCore/private/qproperty_p.h>

QT_BEGIN_NAMESPACE

class QQuickGeoCoordinateAnimationPrivate : public QQuickPropertyAnimationPrivate
{
    Q_DECLARE_PUBLIC(QQuickGeoCoordinateAnimation)
public:
    void setDirection(QQuickGeoCoordinateAnimation::Direction direction)
    {
        q_func()->setDirection(direction);
    }
    void directionChanged()
    {
        Q_EMIT q_func()->directionChanged();
    }

    Q_OBJECT_COMPAT_PROPERTY_WITH_ARGS(QQuickGeoCoordinateAnimationPrivate,
                                       QQuickGeoCoordinateAnimation::Direction, m_direction,
                                       &QQuickGeoCoordinateAnimationPrivate::setDirection,
                                       &QQuickGeoCoordinateAnimationPrivate::directionChanged,
                                       QQuickGeoCoordinateAnimation::Shortest)
};

QT_END_NAMESPACE

#endif // QQUICKGEOCOORDINATEANIMATION_P_P_H
