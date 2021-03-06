﻿
// ComputerNetwork_project.h: PROJECT_NAME 응용 프로그램에 대한 주 헤더 파일입니다.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"		// 주 기호입니다.
#include "ServerSock.h"
#include "ClientSock.h"

#define MAX_MEMBER 10


// CComputerNetworkprojectApp:
// 이 클래스의 구현에 대해서는 ComputerNetwork_project.cpp을(를) 참조하세요.
//

class CComputerNetworkprojectApp : public CWinApp
{
public:
	CComputerNetworkprojectApp();

// 재정의입니다.
public:
	virtual BOOL InitInstance();

// 구현입니다.

	DECLARE_MESSAGE_MAP()

public:
	ServerSock* m_pServer;
	ClientSock* m_pClient;
	BOOL m_Server;
	CString m_IPlist[MAX_MEMBER];
	UINT m_Portlist[MAX_MEMBER];
	int m_Conectm;
	void InitServer(CString strIP);
	void Connect(CString strIP, CString strPort);
	void ReceiveInit();
	void ReceiveData();
	void SendData(CString strData, CString strIP);
	void CloseChild();
};

extern CComputerNetworkprojectApp theApp;
