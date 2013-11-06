// helloView.cpp : implementation of the CHelloView class
//

#include "stdafx.h"
#include "hello.h"

#include "helloDoc.h"
#include "helloView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CHelloView

IMPLEMENT_DYNCREATE(CHelloView, CView)

BEGIN_MESSAGE_MAP(CHelloView, CView)
	//{{AFX_MSG_MAP(CHelloView)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CHelloView construction/destruction

CHelloView::CHelloView()
{
	// TODO: add construction code here

}

CHelloView::~CHelloView()
{
}

BOOL CHelloView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CHelloView drawing

void CHelloView::OnDraw(CDC* pDC)
{
	CHelloDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CHelloView printing

BOOL CHelloView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CHelloView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CHelloView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CHelloView diagnostics

#ifdef _DEBUG
void CHelloView::AssertValid() const
{
	CView::AssertValid();
}

void CHelloView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CHelloDoc* CHelloView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CHelloDoc)));
	return (CHelloDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CHelloView message handlers
