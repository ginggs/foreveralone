#include <QtGui/QApplication>
#include "qmlapplicationviewer.h"
#include "famode.h"
#include <QtDeclarative/QDeclarativeContext>

Q_DECL_EXPORT int main(int argc, char *argv[]) {
    QScopedPointer<QApplication> app(createApplication(argc, argv));
    QScopedPointer<QmlApplicationViewer> viewer(QmlApplicationViewer::create());

    viewer->setOrientation(QmlApplicationViewer::ScreenOrientationAuto);
    viewer->setMainQmlFile(QLatin1String("qml/foreveralone/main.qml"));
    viewer->showExpanded();

    viewer->rootContext()->setContextProperty("famode", new famode);

    return app->exec();
}
