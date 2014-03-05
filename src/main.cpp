#include <wx/wx.h>
#include "UIBase.h"
#define CAL_YUV_R2(y, cb, cr) (y + 1.4075*(cr-128))
#define CAL_YUV_G2(y, cb, cr) (y - 0.3455 * (cb - 128) - (0.7169 * (cr - 128)))
#define CAL_YUV_B2(y, cb, cr) (y + 1.7790 * (cb - 128))

//#define CAL_YUV_R(Y, U, V) (Y + 1.14*V)
//#define CAL_YUV_G(Y, U, V) (Y - 0.39*U - 0.58*V)
//#define CAL_YUV_B(Y, U, V) (Y + 2.03*U)

#define clip(var) ((var>=255)?255:(var<=0)?0:var)
//
//#define CAL_YUV_Y(R, G, B) ( 0.299*R + 0.587*G + 0.114*B )
//#define CAL_YUV_U(R, G, B) ( -0.147*R - 0.289*G + 0.436*B )
//#define CAL_YUV_V(R, G, B) ( 0.615*R - 0.515*G - 0.100*B )


#define CAL_YUV_R(c, d, e) clip(( 298 * c           + 409 * e + 128) >> 8)
#define CAL_YUV_G(c, d, e) clip(( 298 * c - 100 * d - 208 * e + 128) >> 8)
#define CAL_YUV_B(c, d, e) clip(( 298 * c + 516 * d           + 128) >> 8)

#define CAL_YUV_Y(R, G, B) (  ((  66 * R + 129 * G +  25 * B + 128) >> 8) + 16 )
#define CAL_YUV_U(R, G, B) ( (( -38 * r -  74 * g + 112 * b + 128) >> 8) + 128 )
#define CAL_YUV_V(R, G, B) ( (( 112 * r -  94 * g -  18 * b + 128) >> 8) + 128 )

#define WIDTH 640
#define HEIGHT 480
#define YUV_FILE "d:\\tmp\\yuv.640.480.y"

class CMyFrame :public MyFrameBase
{
public:
	CMyFrame( wxWindow* parent )
		:MyFrameBase(parent)
	{
		m_textCtrl_R->SetValue("200");
		m_textCtrl_G->SetValue("0");
		m_textCtrl_B->SetValue("0");

		m_textCtrl_Y->SetValue("0");
		m_textCtrl_U->SetValue("0");
		m_textCtrl_V->SetValue("0");

		r = g = b = y = u = v = 0;

		wxRemoveFile(YUV_FILE);
		FILE *fp = fopen(YUV_FILE, "w+");
		if (fp)
		{
			char *ptr = (char*)malloc(WIDTH*HEIGHT);
			memset(ptr, 255, WIDTH*HEIGHT);
			fwrite(ptr, WIDTH*HEIGHT, 1, fp);
			free(ptr);

		}
	}

	virtual void OnPaint( wxPaintEvent& event ) 
	{
		wxPaintDC dc(this);


		wxRect rect(0, 200, 100, 100);
		wxBrush brush;
		//brush.SetColour(*wxRED);

		brush.SetColour(r, g, b);

		dc.SetBrush(brush);
		dc.DrawRectangle(rect);
	}

	void doRGB2YUV()
	{
		r = wxAtoi(m_textCtrl_R->GetValue());
		g = wxAtoi(m_textCtrl_G->GetValue());
		b = wxAtoi(m_textCtrl_B->GetValue());

		y = CAL_YUV_Y(r, g, b);
		u = CAL_YUV_U(r, g, b);
		v = CAL_YUV_V(r, g, b);

		//y -= 16;
		//u -= 128;
		//v -= 128;

		m_textCtrl_Y->SetValue(wxString::Format("%d", y));
		m_textCtrl_U->SetValue(wxString::Format("%d", u));
		m_textCtrl_V->SetValue(wxString::Format("%d", v));

		this->Refresh();
	}

	void doYUV2RGB()
	{
		y = wxAtoi(m_textCtrl_Y->GetValue());
		u = wxAtoi(m_textCtrl_U->GetValue());
		v = wxAtoi(m_textCtrl_V->GetValue());

		y -= 16;
		u -= 128;
		v -= 128;

		r = CAL_YUV_R(y, u, v);
		g = CAL_YUV_G(y, u, v);
		b = CAL_YUV_B(y, u, v);

		m_textCtrl_R->SetValue(wxString::Format("%d", r));
		m_textCtrl_G->SetValue(wxString::Format("%d", g));
		m_textCtrl_B->SetValue(wxString::Format("%d", b));

		this->Refresh();
	}

	virtual void OnRGB2YUV( wxCommandEvent& event ) 
	{
		doRGB2YUV();
	}


	virtual void OnYUV2RGB( wxCommandEvent& event ) 
	{
		doYUV2RGB();
	}


private:
	int r,g,b,y,u,v;
};

class MyApp: public wxApp
{
public:
	virtual bool OnInit();
};
wxIMPLEMENT_APP(MyApp);


bool MyApp::OnInit()
{
	CMyFrame *frame = new CMyFrame(NULL);
	frame->Show( true );
	return true;
}
