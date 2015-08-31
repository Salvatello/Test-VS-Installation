
// ConsoleApplication2.h : file di intestazione principale per l'applicazione PROJECT_NAME
//

#pragma once

#ifndef __AFXWIN_H__
	#error "includere 'stdafx.h' prima di includere questo file per PCH"
#endif

#include "resource.h"		// simboli principali


// CConsoleApplication2App:
// Vedere ConsoleApplication2.cpp per l'implementazione di questa classe
//

class CConsoleApplication2App : public CWinApp
{
public:
	CConsoleApplication2App();

// Override
public:
	virtual BOOL InitInstance();

// Implementazione

	DECLARE_MESSAGE_MAP()
};

extern CConsoleApplication2App theApp;