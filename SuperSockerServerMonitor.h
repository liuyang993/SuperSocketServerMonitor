
// SuperSockerServerMonitor.h : main header file for the SuperSockerServerMonitor application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CSuperSockerServerMonitorApp:
// See SuperSockerServerMonitor.cpp for the implementation of this class
//

class CSuperSockerServerMonitorApp : public CWinApp
{
public:
	CSuperSockerServerMonitorApp();


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation

public:
	afx_msg void OnAppAbout();
	afx_msg void OnCheckClientState();
	DECLARE_MESSAGE_MAP()
};

extern CSuperSockerServerMonitorApp theApp;
