///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Feb 26 2014)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __UIBASE_H__
#define __UIBASE_H__

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/textctrl.h>
#include <wx/sizer.h>
#include <wx/button.h>
#include <wx/frame.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class MyFrameBase
///////////////////////////////////////////////////////////////////////////////
class MyFrameBase : public wxFrame 
{
	private:
	
	protected:
		wxStaticText* m_staticText8;
		wxTextCtrl* m_textCtrl_R;
		wxStaticText* m_staticText81;
		wxTextCtrl* m_textCtrl_G;
		wxStaticText* m_staticText811;
		wxTextCtrl* m_textCtrl_B;
		wxStaticText* m_staticText82;
		wxTextCtrl* m_textCtrl_Y;
		wxStaticText* m_staticText812;
		wxTextCtrl* m_textCtrl_U;
		wxStaticText* m_staticText8111;
		wxTextCtrl* m_textCtrl_V;
		wxButton* m_button_;
		wxButton* m_button_1;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnPaint( wxPaintEvent& event ) { event.Skip(); }
		virtual void OnRGB2YUV( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnYUV2RGB( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		MyFrameBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("wxYUV2RGB"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 533,481 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~MyFrameBase();
	
};

#endif //__UIBASE_H__
