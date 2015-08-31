
// ConsoleApplication2Dlg.h : file di intestazione
//

#pragma once


// finestra di dialogo CConsoleApplication2Dlg
class CConsoleApplication2Dlg : public CDialogEx
{
// Costruzione
public:
	CConsoleApplication2Dlg(CWnd* pParent = NULL);	// costruttore standard

// Dati della finestra di dialogo
	enum { IDD = IDD_CONSOLEAPPLICATION2_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// supporto DDX/DDV


// Implementazione
protected:
	HICON m_hIcon;

	// Funzioni generate per la mappa dei messaggi
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
};
