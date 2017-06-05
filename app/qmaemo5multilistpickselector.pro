TEMPLATE = app
TARGET = qmaemo5multilistpickselector
QT += maemo5

INCLUDEPATH += ../src

HEADERS += \
    ../src/qmaemo5multilistpickselector.h

SOURCES += \
    ../src/qmaemo5multilistpickselector.cpp \
    main.cpp

target.path = /opt/qmaemo5multilistpickselector/bin

INSTALLS += target

