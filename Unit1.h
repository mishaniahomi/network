// ---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
// ---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <Vcl.Samples.Spin.hpp>
#include <vector>
#include "Unit1.h"
#include "Unit3.h"
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
#include <cmath>
#include <limits>
using namespace std;

bool is_equal(double x, double y) {
	return std::fabs(x - y) < std::numeric_limits<double>::epsilon();
}

class Uzel {
public:
	int Y;
	int X;
	double K;
	vector<double>VWorker;
	vector<int>Oij;

	bool CheckA() {
		double counter = 0;
		for (int i = 0; i < VWorker.size(); i++) {
			counter += VWorker[i];
		}
		if (is_equal(counter, 1.0)) {
			return 1;
		}
		else
			return 0;
	}

	double get_K_dl_i() {
		double T = 0.;
		for (int i = 0; i < Oij.size(); i++) {
			T += VWorker[i] * Oij[i] / 5;
		}
		return T;
	}
};

class Line {
public:
	int A;
	int B;
};

// ---------------------------------------------------------------------------
class TForm1 : public TForm {
__published: // IDE-managed Components

	TPanel *Panel1;
	TButton *Button1;
	TPanel *Panel2;
	TSpinEdit *SpinEdit1;
	TSpinEdit *SpinEdit2;
	TButton *Button2;
	TImage *Image1;
	TButton *Button3;
	TPanel *Panel3;
	TLabel *Label1;
	TLabel *Label2;
	TComboBox *ComboBox1;
	TLabel *Label3;
	TEdit *Edit1;
	TPanel *Panel4;
	TLabel *Label4;
	TPanel *Panel5;
	TLabel *Label5;
	TComboBox *ComboBox2;
	TLabel *Label6;
	TButton *Button4;
	TPanel *Panel6;
	TLabel *Label7;
	TButton *Button5;
	TButton *Button6;
	TPanel *Panel7;
	TLabel *Label8;
	TEdit *Edit2;
	TButton *Button7;

	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Image1MouseDown(TObject *Sender, TMouseButton Button,
		TShiftState Shift, int X, int Y);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);
	void __fastcall Button5Click(TObject *Sender);
	void __fastcall Button6Click(TObject *Sender);
	void __fastcall Button7Click(TObject *Sender);

private: // User declarations
		public : // User declarations

	vector<Line>Vline;
	vector<Uzel>Vuzel;



	__fastcall TForm1(TComponent* Owner);
};

// ---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
// ---------------------------------------------------------------------------
#endif
