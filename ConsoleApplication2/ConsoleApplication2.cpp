
// ConsoleApplication2.cpp : definisce i comportamenti delle classi per l'applicazione.
//

#include "stdafx.h"
#include "ConsoleApplication2.h"
#include "ConsoleApplication2Dlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CConsoleApplication2App

BEGIN_MESSAGE_MAP(CConsoleApplication2App, CWinApp)
	ON_COMMAND(ID_HELP, &CWinApp::OnHelp)
END_MESSAGE_MAP()


// costruzione di CConsoleApplication2App

CConsoleApplication2App::CConsoleApplication2App()
{
	// supporto Gestione riavvio
	m_dwRestartManagerSupportFlags = AFX_RESTART_MANAGER_SUPPORT_RESTART;

	// TODO: inserire qui il codice di costruzione.
	// Inserire l'inizializzazione significativa in InitInstance.
}


// L'unico e solo oggetto CConsoleApplication2App

CConsoleApplication2App theApp;


// Inizializzazione di CConsoleApplication2App

BOOL CConsoleApplication2App::InitInstance()
{
	// InitCommonControlsEx() � necessario in Windows XP se nel manifesto
	// di un'applicazione � specificato l'utilizzo di ComCtl32.dll versione 6 o successiva per abilitare
	// gli stili visuali. In caso contrario, non sar� possibile creare finestre.
	INITCOMMONCONTROLSEX InitCtrls;
	InitCtrls.dwSize = sizeof(InitCtrls);
	// Effettuare questa impostazione in modo da includere tutte le classi di controlli comuni da utilizzare
	// nell'applicazione.
	InitCtrls.dwICC = ICC_WIN95_CLASSES;
	InitCommonControlsEx(&InitCtrls);

	CWinApp::InitInstance();


	AfxEnableControlContainer();

	// Creare il gestore della shell se la finestra di dialogo contiene
	// controlli della visualizzazione elenco o struttura ad albero della shell.
	CShellManager *pShellManager = new CShellManager;

	// Inizializzazione standard
	// Se non si utilizzano queste funzionalit� e si desidera ridurre la dimensione
	// dell'eseguibile finale, � necessario rimuovere dal seguente codice
	// le specifiche routine di inizializzazione che non sono necessarie.
	// Modificare la chiave del Registro di sistema in cui sono memorizzate le impostazioni
	// TODO: � necessario modificare questa stringa in modo appropriato,
	// inserendo ad esempio il nome della societ� o dell'organizzazione.
	SetRegistryKey(_T("Applicazioni locali generate tramite la Creazione guidata applicazioni"));

	CConsoleApplication2Dlg dlg;
	m_pMainWnd = &dlg;
	INT_PTR nResponse = dlg.DoModal();
	if (nResponse == IDOK)
	{
		// TODO: inserire qui il codice per gestire la chiusura della finestra di dialogo 
		//  tramite il pulsante OK.
	}
	else if (nResponse == IDCANCEL)
	{
		// TODO: inserire qui il codice per gestire la chiusura della finestra di dialogo 
		//  tramite il pulsante Annulla.
	}

	// Eliminare il gestore della shell creato in precedenza.
	if (pShellManager != NULL)
	{
		delete pShellManager;
	}

	// Poich� la finestra di dialogo � stata chiusa, restituisce FALSE in modo che l'applicazione
	//  venga terminata, anzich� avviare il message pump dell'applicazione.
	return FALSE;
}

