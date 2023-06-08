
// MFCApplication2Dlg.h: файл заголовка
//

#pragma once


// Диалоговое окно CMFCApplication2Dlg
class CMFCApplication2Dlg : public CDialogEx
{
// Создание
public:
	CMFCApplication2Dlg(CWnd* pParent = nullptr);	// стандартный конструктор

// Данные диалогового окна
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCAPPLICATION2_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// поддержка DDX/DDV


// Реализация
protected:
	HICON m_hIcon;

	// Созданные функции схемы сообщений
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButtonAddContact();
	CEdit m_editName;
	afx_msg void OnEnChangeEditName();
	CEdit m_editPhone;
	CEdit m_editGroup;
	CEdit m_editTitle;
	CEdit m_editExplanation;
	CEdit m_editTime;
	afx_msg void OnEnChangeEditTime();
	afx_msg void OnEnChangeEditExplanation();
};
