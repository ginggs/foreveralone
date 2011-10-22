#ifndef FAMODE_H
#define FAMODE_H

#include <QObject>

class famode : public QObject {
    Q_OBJECT
public:
    explicit famode(QObject *parent = 0);

signals:

public slots:
    Q_INVOKABLE void enable();
    Q_INVOKABLE void disable();
};

#endif // FAMODE_H
