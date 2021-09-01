QT       += core gui \
        multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11
CONFIG += resources_big

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    consumables.cpp \
    element.cpp \
    enemy.cpp \
    finish.cpp \
    fixedblock.cpp \
    gameengine.cpp \
    info.cpp \
    life.cpp \
    lifebar.cpp \
    main.cpp \
    map.cpp \
    menu.cpp \
    menubutton.cpp \
    mobileenemy.cpp \
    pausegroup.cpp \
    player.cpp \
    power.cpp \
    powerprojectile.cpp \
    projectile.cpp \
    shield.cpp \
    unit.cpp \
    victorygroup.cpp \
    wall.cpp

HEADERS += \
    collidemanager.h \
    configuration.h \
    consumables.h \
    element.h \
    enemy.h \
    finish.h \
    fixedblock.h \
    gameengine.h \
    info.h \
    life.h \
    lifebar.h \
    map.h \
    menu.h \
    menubutton.h \
    mobileenemy.h \
    pausegroup.h \
    player.h \
    power.h \
    powerprojectile.h \
    projectile.h \
    shield.h \
    unit.h \
    victorygroup.h \
    wall.h

FORMS +=

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Resource.qrc

DISTFILES += \
    images/backgrounds/background_1.jpg \
    images/backgrounds/background_2.png \
    images/backgrounds/background_menu.png \
    images/backgrounds/city.jpg \
    images/bloc.png \
    images/flag.png \
    images/gel.png \
    images/heart.png \
    images/icone.ico \
    images/life.png \
    images/mask.png \
    images/player.png \
    images/player/1.png \
    images/player/11.png \
    images/player/12.png \
    images/player/13.png \
    images/player/2.png \
    images/player/21.png \
    images/player/22.png \
    images/player/3.png \
    images/player/4.png \
    images/player/fire.png \
    images/player/hurt.png \
    images/player2.png \
    images/projectile.png \
    images/virus.png \
    sounds/Castle_of_Funk.mp3 \
    sounds/bounce.wav \
    sounds/catch.wav \
    sounds/drop_gems.mp3 \
    sounds/gain.wav \
    sounds/hurt.wav \
    sounds/jump.wav \
    sounds/kick.wav \
    sounds/kirby.mp3 \
    sounds/life.wav \
    sounds/menu.mp3 \
    sounds/must_fall.mp3 \
    sounds/pause.wav \
    sounds/win.wav
