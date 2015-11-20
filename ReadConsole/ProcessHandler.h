#ifndef PROCESSHANDLER_H
#define PROCESSHANDLER_H

#include <QObject>
#include <QtCore>

class CProcessHandler : public QObject
{
	Q_OBJECT

public:
	CProcessHandler(QObject *parent = 0);
	~CProcessHandler();

private slots:
	void processOutput();


private:
	QProcess *myProcess;
};

#endif // PROCESSHANDLER_H
