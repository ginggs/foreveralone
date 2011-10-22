#include <QtGui/QApplication>
#include "qmlapplicationviewer.h"
#include "famode.h"
#include <QtDeclarative/QDeclarativeContext>

Q_DECL_EXPORT int main(int argc, char *argv[]) {
    QScopedPointer<QApplication> app(createApplication(argc, argv));
    QScopedPointer<QmlApplicationViewer> viewer(QmlApplicationViewer::create());

    famode MyFamode;
    viewer->rootContext()->setContextProperty("famode", &MyFamode );

    viewer->setOrientation(QmlApplicationViewer::ScreenOrientationAuto);
    viewer->setMainQmlFile(QLatin1String("qml/foreveralone/main.qml"));
    viewer->showExpanded();

    return app->exec();
}
