
// ChildView.cpp : implementation of the CChildView class
//

#include "stdafx.h"
#include "SuperSockerServerMonitor.h"
#include "ChildView.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CChildView

CChildView::CChildView()
{
	((CSuperSockerServerMonitorApp *)AfxGetApp())->m_pConnectView = this;
}

CChildView::~CChildView()
{
}


BEGIN_MESSAGE_MAP(CChildView, CWnd)
	ON_WM_PAINT()
	ON_WM_CREATE()
	ON_COMMAND(ID_FILE_DISPLAYCLIENTSTATE, &CChildView::OnFileDisplayclientstate)
END_MESSAGE_MAP()



// CChildView message handlers

BOOL CChildView::PreCreateWindow(CREATESTRUCT& cs) 
{
	if (!CWnd::PreCreateWindow(cs))
		return FALSE;

	cs.dwExStyle |= WS_EX_CLIENTEDGE;
	cs.style &= ~WS_BORDER;
	cs.lpszClass = AfxRegisterWndClass(CS_HREDRAW|CS_VREDRAW|CS_DBLCLKS, 
		::LoadCursor(NULL, IDC_ARROW), reinterpret_cast<HBRUSH>(COLOR_WINDOW+1), NULL);

	return TRUE;
}

void CChildView::OnPaint() 
{
	CPaintDC dc(this); // device context for painting
	
	// TODO: Add your message handler code here
	
	// Do not call CWnd::OnPaint() for painting messages
	this->UpdateWindow();  
}



int CChildView::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CWnd::OnCreate(lpCreateStruct) == -1)
		return -1;

	// TODO:  Add your specialized creation code here

	return 0;
}


void CChildView::OnFileDisplayclientstate()
{
	// TODO: Add your command handler code here


	//AfxMessageBox("xxx");


	Invalidate();  

	CPaintDC dc(this);
		dc.SetTextColor(RGB(0, 0, 0)); // 可根据日志警告级别改变字体颜色  
	
	TEXTMETRIC tm;  
    dc.GetTextMetrics(&tm);  
  
    int nFontHeight = tm.tmHeight;  // 字体高度  
    int nExternal = tm.tmExternalLeading; // 估计是行距  
  
    CRect rect;  
    GetWindowRect(&rect);  
    int nMaxShowLine = rect.Height() / (nFontHeight * 1.1);  
	std::string str1 = "aaaabbb";
	
	//dc.TextOut(x,y,log_vector[i].c_str(),log_vector[i].length());  
	dc.TextOut(1,4,str1.c_str(),str1.length());  
	
	

}


void CChildView::WriteToView(std::string s)
{
	// TODO: Add your command handler code here


	//AfxMessageBox("xxx");


	Invalidate();  

	CPaintDC dc(this);
		dc.SetTextColor(RGB(0, 0, 0)); // 可根据日志警告级别改变字体颜色  
	
	TEXTMETRIC tm;  
    dc.GetTextMetrics(&tm);  
  
    int nFontHeight = tm.tmHeight;  // 字体高度  
    int nExternal = tm.tmExternalLeading; // 估计是行距  
  
    CRect rect;  
    GetWindowRect(&rect);  
    int nMaxShowLine = rect.Height() / (nFontHeight * 1.1);  
	//std::string str1 = "aaaabbb";
	
	//dc.TextOut(x,y,log_vector[i].c_str(),log_vector[i].length());  
	dc.TextOut(1,4,s.c_str(),s.length());  
	
	

}