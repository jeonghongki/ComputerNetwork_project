// ServerSock.cpp: 구현 파일
//

#include "pch.h"
#include "ComputerNetwork_project.h"
#include "ServerSock.h"


// ServerSock

ServerSock::ServerSock()
{

}

ServerSock::~ServerSock()
{
}




// ServerSock 메시지 처리기




void ServerSock::OnReceive(int nErrorCode)
{
	// TODO: 여기에 특수화된 코드를 추가 및/또는 기본 클래스를 호출합니다.
	((CComputerNetworkprojectApp*)AfxGetApp())->ReceiveInit();
	CAsyncSocket::OnReceive(nErrorCode);
}
