#include "ProcessHandler.h"

CProcessHandler::CProcessHandler(QObject *parent)
	: QObject(parent)
{
	//QString program = "C:/Users/Fabian/Documents/Tests/ConsolePrinter/Win32/Debug/ConsolePrinter.exe";
	myProcess = new QProcess(this);


	myProcess->setProcessChannelMode(QProcess::ForwardedChannels);

	//connect(myProcess, SIGNAL(readyReadStandardOutput()), this, SLOT(processOutput()));
	//myProcess->execute(program);  

	myProcess->setWorkingDirectory("~/SMA");
	myProcess->execute("/bin/sh /home/pi/SMA/QuerySMA.sh");


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
