
// Calc_simple.h: главный файл заголовка для приложения PROJECT_NAME
//

#pragma once

#ifndef __AFXWIN_H__
	#error "включить pch.h до включения этого файла в PCH"
#endif

#include "resource.h"		// основные символы


// CCalcsimpleApp:
// Сведения о реализации этого класса: Calc_simple.cpp
//

class CCalcsimpleApp : public CWinApp
{
public:
	CCalcsimpleApp();

// Переопределение
public:
	virtual BOOL InitInstance();

// Реализация

	DECLARE_MESSAGE_MAP()
};

extern CCalcsimpleApp theApp;
