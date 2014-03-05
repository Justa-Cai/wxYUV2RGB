///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Feb 26 2014)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "UIBase.h"

///////////////////////////////////////////////////////////////////////////

MyFrameBase::MyFrameBase( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText8 = new wxStaticText( this, wxID_ANY, wxT("R"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText8->Wrap( -1 );
	bSizer10->Add( m_staticText8, 0, wxALL, 5 );
	
	m_textCtrl_R = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer10->Add( m_textCtrl_R, 0, wxALL, 5 );
	
	m_staticText81 = new wxStaticText( this, wxID_ANY, wxT("G"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText81->Wrap( -1 );
	bSizer10->Add( m_staticText81, 0, wxALL, 5 );
	
	m_textCtrl_G = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer10->Add( m_textCtrl_G, 0, wxALL, 5 );
	
	m_staticText811 = new wxStaticText( this, wxID_ANY, wxT("B"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText811->Wrap( -1 );
	bSizer10->Add( m_staticText811, 0, wxALL, 5 );
	
	m_textCtrl_B = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer10->Add( m_textCtrl_B, 0, wxALL, 5 );
	
	
	bSizer9->Add( bSizer10, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer101;
	bSizer101 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText82 = new wxStaticText( this, wxID_ANY, wxT("Y"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText82->Wrap( -1 );
	bSizer101->Add( m_staticText82, 0, wxALL, 5 );
	
	m_textCtrl_Y = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer101->Add( m_textCtrl_Y, 0, wxALL, 5 );
	
	m_staticText812 = new wxStaticText( this, wxID_ANY, wxT("U"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText812->Wrap( -1 );
	bSizer101->Add( m_staticText812, 0, wxALL, 5 );
	
	m_textCtrl_U = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer101->Add( m_textCtrl_U, 0, wxALL, 5 );
	
	m_staticText8111 = new wxStaticText( this, wxID_ANY, wxT("V"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText8111->Wrap( -1 );
	bSizer101->Add( m_staticText8111, 0, wxALL, 5 );
	
	m_textCtrl_V = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer101->Add( m_textCtrl_V, 0, wxALL, 5 );
	
	
	bSizer9->Add( bSizer101, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer15;
	bSizer15 = new wxBoxSizer( wxHORIZONTAL );
	
	m_button_ = new wxButton( this, wxID_ANY, wxT("RGB->YUV"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer15->Add( m_button_, 0, wxALL|wxALIGN_RIGHT|wxALIGN_BOTTOM, 5 );
	
	m_button_1 = new wxButton( this, wxID_ANY, wxT("YUV->RGB"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer15->Add( m_button_1, 0, wxALL|wxALIGN_RIGHT|wxALIGN_BOTTOM, 5 );
	
	
	bSizer9->Add( bSizer15, 0, wxEXPAND, 5 );
	
	
	this->SetSizer( bSizer9 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	this->Connect( wxEVT_PAINT, wxPaintEventHandler( MyFrameBase::OnPaint ) );
	m_button_->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrameBase::OnRGB2YUV ), NULL, this );
	m_button_1->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrameBase::OnYUV2RGB ), NULL, this );
}

MyFrameBase::~MyFrameBase()
{
	// Disconnect Events
	this->Disconnect( wxEVT_PAINT, wxPaintEventHandler( MyFrameBase::OnPaint ) );
	m_button_->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrameBase::OnRGB2YUV ), NULL, this );
	m_button_1->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrameBase::OnYUV2RGB ), NULL, this );
	
}
