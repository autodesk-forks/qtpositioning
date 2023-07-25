# Copyright (C) 2023 The Qt Company Ltd.
# SPDX-License-Identifier: BSD-3-Clause

TEMPLATE = app
TARGET = satelliteinfo

QT += quick positioning positioningquick

SOURCES += main.cpp

qml_resources.files = \
    qmldir \
    ApplicationScreen.qml \
    Button.qml \
    Header.qml \
    HelpPopup.qml \
    Main.qml \
    RssiView.qml \
    PageButton.qml \
    PermissionsScreen.qml \
    PositionBox.qml \
    SatelliteView.qml \
    SettingsView.qml \
    SkyView.qml \
    ViewSwitch.qml

qml_resources.prefix = /qt/qml/SatelliteInformation

RESOURCES += qml_resources

icon_resources.files = \
    icons/darkmode.svg \
    icons/help.svg \
    icons/lightmode.svg \
    icons/place.svg \
    icons/qtlogo_green.png \
    icons/qtlogo_white.png \
    icons/rssiview.svg \
    icons/settings.svg \
    icons/skyview.svg \
    icons/tableview.svg

icon_resources.prefix = /qt/qml/SatelliteInformation

RESOURCES += icon_resources

data_resources.files = \
    nmealog.txt

data_resources.prefix = /

RESOURCES += data_resources

ios: QMAKE_INFO_PLIST = ../shared/Info.qmake.ios.plist
macos: QMAKE_INFO_PLIST = ../shared/Info.qmake.macos.plist

android {
    # explicitly link with serialport in order to
    # deploy it as a dependecy for nmea plugin
    QT += serialport
}

target.path = $$[QT_INSTALL_EXAMPLES]/positioning/satelliteinfo
INSTALLS += target

# Sign the app for location permissions to work properly
macos:!macx-xcode: QMAKE_POST_LINK += codesign -s - satelliteinfo.app
