
// MFChello.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CMFChelloApp: 
// �йش����ʵ�֣������ MFChello.cpp
//

class CMFChelloApp : public CWinApp
{
public:
	CMFChelloApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CMFChelloApp theApp;