﻿#pragma once


// CPage_Subscribe 对话框

class CPage_Subscribe : public CDialogEx
{
	DECLARE_DYNAMIC(CPage_Subscribe)

public:
	CPage_Subscribe(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CPage_Subscribe();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_Subscribe };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
