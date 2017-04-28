
// SuperSockerServerMonitor.h : main header file for the SuperSockerServerMonitor application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols
#include "ClientSocket.h"
#include "ChildView.h"


// CSuperSockerServerMonitorApp:
// See SuperSockerServerMonitor.cpp for the implementation of this class
//

class CSuperSockerServerMonitorApp : public CWinApp
{
public:
	CSuperSockerServerMonitorApp();
	CChildView*		m_pConnectView; // 主连接视图
	static void CALLBACK NotifyProc(CChildView* lpParam, std::string Content, UINT nCode);


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();
	CClientSocket m_socketClient;
// Implementation

public:
	afx_msg void OnAppAbout();
	afx_msg void OnCheckClientState();
	DECLARE_MESSAGE_MAP()
	afx_msg void OnFileConnecttoserver();
};

extern CSuperSockerServerMonitorApp theApp;
