#pragma once


// ServerSock

class ServerSock : public CAsyncSocket
{
public:
	ServerSock();
	virtual ~ServerSock();
	virtual void OnReceive(int nErrorCode);
};


