// helloView.h : interface of the CHelloView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_HELLOVIEW_H__1821D466_1111_421C_AFB3_4BBDFC792329__INCLUDED_)
#define AFX_HELLOVIEW_H__1821D466_1111_421C_AFB3_4BBDFC792329__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CHelloView : public CView
{
protected: // create from serialization only
	CHelloView();
	DECLARE_DYNCREATE(CHelloView)

// Attributes
public:
	CHelloDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CHelloView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CHelloView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CHelloView)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in helloView.cpp
inline CHelloDoc* CHelloView::GetDocument()
   { return (CHelloDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_HELLOVIEW_H__1821D466_1111_421C_AFB3_4BBDFC792329__INCLUDED_)
