#pragma once

// ClientSock 명령 대상

class ClientSock : public CAsyncSocket
{
public:
	ClientSock();
	virtual ~ClientSock();
	virtual void OnClose(int nErrorCode);
	virtual void OnReceive(int nErrorCode);
};


