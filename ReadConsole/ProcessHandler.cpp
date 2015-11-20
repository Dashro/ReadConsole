#include "ProcessHandler.h"

CProcessHandler::CProcessHandler(QObject *parent)
	: QObject(parent)
{
	QString program = "C:/Users/Fabian/Documents/Tests/ConsolePrinter/Win32/Debug/ConsolePrinter.exe";
	myProcess = new QProcess(this);

	myProcess->setProcessChannelMode(QProcess::ForwardedChannels);

	//connect(myProcess, SIGNAL(readyReadStandardOutput()), this, SLOT(processOutput()));
	myProcess->execute(program);  
#ifndef _WIN32
	myProcess->execute("/home/pi/SMA/SMAspot/SMAspot", (QStringList() << "-v" << "-fing"));
#endif

	//if (!myProcess->waitForStarted())
	//	qDebug() << "Cant start the programm";

	//if (!myProcess->waitForFinished(1000))
	//{
	//	qCritical() << "wait-for-finished timeout";
	//}
	//qDebug() << myProcess->readAllStandardOutput();

}

CProcessHandler::~CProcessHandler()
{

}

void CProcessHandler::processOutput()
{
	//qDebug() << myProcess->readAllStandardOutput();
}
