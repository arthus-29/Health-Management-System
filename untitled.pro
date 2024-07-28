QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    address.cpp \
    ambulance.cpp \
    call_ambulance.cpp \
    callambulance.cpp \
    ehr.cpp \
    error.cpp \
    firstaid.cpp \
    iot.cpp \
    main.cpp \
    mainwindow.cpp \
    medicines.cpp \
    optionmenu.cpp \
    optionmenu2.cpp \
    prompt.cpp \
    search_ehr.cpp \
    signup_patient.cpp \
    signupfrom.cpp \
    thankyou.cpp \
    win2.cpp \
    win3.cpp \
    win4.cpp \
    win5.cpp \
    win6.cpp \
    write_ehr.cpp

HEADERS += \
    address.h \
    ambulance.h \
    call_ambulance.h \
    callambulance.h \
    ehr.h \
    error.h \
    firstaid.h \
    iot.h \
    mainwindow.h \
    medicines.h \
    optionmenu.h \
    optionmenu2.h \
    prompt.h \
    search_ehr.h \
    signup_patient.h \
    signupfrom.h \
    thankyou.h \
    win2.h \
    win3.h \
    win4.h \
    win5.h \
    win6.h \
    write_ehr.h

FORMS += \
    address.ui \
    ambulance.ui \
    call_ambulance.ui \
    callambulance.ui \
    ehr.ui \
    error.ui \
    firstaid.ui \
    iot.ui \
    mainwindow.ui \
    medicines.ui \
    optionmenu.ui \
    optionmenu2.ui \
    prompt.ui \
    search_ehr.ui \
    signup_patient.ui \
    signupfrom.ui \
    thankyou.ui \
    win2.ui \
    win3.ui \
    win4.ui \
    win5.ui \
    win6.ui \
    write_ehr.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    img.qrc \
    img2.qrc \
    img3.qrc
