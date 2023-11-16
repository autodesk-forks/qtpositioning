// Copyright (C) 2019 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial

#ifndef QGEOSATELLITEINFO_P_H
#define QGEOSATELLITEINFO_P_H

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

#include <QtPositioning/private/qpositioningglobal_p.h>
#include <QtPositioning/qgeosatelliteinfo.h>
#include <QHash>

QT_BEGIN_NAMESPACE

class QGeoSatelliteInfoPrivate : public QSharedData
{
public:
    QGeoSatelliteInfoPrivate();
    QGeoSatelliteInfoPrivate(const QGeoSatelliteInfoPrivate &other);
    virtual ~QGeoSatelliteInfoPrivate();
    bool operator==(const QGeoSatelliteInfoPrivate &other) const;
    static QGeoSatelliteInfoPrivate *get(const QGeoSatelliteInfo &info);

    int signal;
    int satId;
    QGeoSatelliteInfo::SatelliteSystem system;
    QHash<int, qreal> doubleAttribs;
};

QT_END_NAMESPACE

#endif // QGEOSATELLITEINFO_P_H
