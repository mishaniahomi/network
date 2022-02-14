// ---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <vector>
#include "Unit1.h"
#include "Unit3.h"
#include "Unit4.h"
#include "Unit5.h"
using namespace std;
Thr1 * T1;

// ---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
int TGenU = 0, counter = 0;

double BlueLine_checker() {
	double total_sr = 0;
	for (int i = 0; i < Form1->Vuzel.size(); i++) {
		total_sr += Form1->Vuzel[i].K;
	}
	return total_sr;
}

void Test() {
	for (int i = 0; i < Form1->Vuzel.size(); i++) {
		if ((Form1->Vuzel[i].CheckA()) != 0) {
			Form1->Label7->Font->Color = clGreen;

		}
		else {
			Form1->Label7->Font->Color = clRed;

			break;
		}
	}
}

int Test2() {
	for (int i = 0; i < Form1->Vuzel.size(); i++) {
		if ((Form1->Vuzel[i].CheckA()) != 0) {
			Form1->Label7->Font->Color = clGreen;

		}
		else {
			Form1->Label7->Font->Color = clRed;
			return 1;
			break;
		}
	}
	return 0;
}

void print_upload() {
	double BLC = BlueLine_checker();
	for (int i = 0; i < Form1->Vline.size(); i++) {
		double k1 = Form1->Vuzel[Form1->Vline[i].A].K * Form1->Vuzel
			[Form1->Vline[i].A].get_K_dl_i();
		double k2 = Form1->Vuzel[Form1->Vline[i].B].K * Form1->Vuzel
			[Form1->Vline[i].B].get_K_dl_i();
		double sr = (k1 + k2);
		if (sr >= 0) {
			Form1->Image1->Canvas->Pen->Color = clRed;
		}
		if (sr >= Form1->Edit2->Text.ToDouble() && sr <
			Form1->Edit2->Text.ToDouble() + 0.1) {
			Form1->Image1->Canvas->Pen->Color = clYellow;
		}
		if (sr >= Form1->Edit2->Text.ToDouble() + 0.1) {
			Form1->Image1->Canvas->Pen->Color = clGreen;
		}

		if (!is_equal(BLC, 1.0) or Test2()) {
			Form1->Image1->Canvas->Pen->Color = clBlue;
		}
		Form1->Image1->Canvas->Pen->Width = 5;
		Form1->Image1->Canvas->MoveTo(Form1->Vuzel[Form1->Vline[i].A].X + 25,
			Form1->Vuzel[Form1->Vline[i].A].Y + 25);
		Form1->Image1->Canvas->LineTo(Form1->Vuzel[Form1->Vline[i].B].X + 25,
			Form1->Vuzel[Form1->Vline[i].B].Y + 25);
	}
}

// ---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner) : TForm(Owner) {
}

// ---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender) {
	TGenU = 1;

}
// ---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender) {
	Line l1;
	l1.A = Form1->SpinEdit1->Value - 1;
	l1.B = Form1->SpinEdit2->Value - 1;
	Form1->Vline.push_back(l1);
	print_upload();
}
// ---------------------------------------------------------------------------

void __fastcall TForm1::Image1MouseDown(TObject *Sender, TMouseButton Button,
	TShiftState Shift, int X, int Y) {
	if (TGenU) {
		counter++;
		TImage *new_img = new TImage(Form1);
		TLabel *new_lbl = new TLabel(Form1);
		new_lbl->Parent = Panel2;
		new_lbl->Top = Y + 50;
		new_lbl->Left = X;
		new_img->Parent = Panel2;
		new_img->Top = Y;
		new_img->Left = X;
		new_img->Height = 50;
		new_img->Width = 50;
		new_img->Picture->LoadFromFile("1.png");
		Uzel u1;
		u1.Y = Y;
		u1.X = X;
		u1.K = 0.1;
		Form1->Vuzel.push_back(u1);
		new_lbl->Caption = "СЦ №" + UnicodeString(counter);
		ComboBox1->Items->Append(UnicodeString(counter));
		ComboBox2->Items->Append(UnicodeString(counter));
		TGenU = 0;
	}
	Test();
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender) {
	Form1->Vuzel[Form1->ComboBox1->ItemIndex].K = Edit1->Text.ToDouble();
	print_upload();
}
// ---------------------------------------------------------------------------

void __fastcall TForm1::Button4Click(TObject *Sender) {
	Form3->Label4->Caption = "";
	Form3->Label5->Caption = "";
	Form3->StringGrid1->Cells[0][0] = "Персонал";
	Form3->StringGrid1->Cells[1][0] = "Весовой коэффициент";
	Form3->StringGrid1->Cells[2][0] = "Индивидуальная оценка";
	Form3->Label1->Caption = "";
	Form3->Label2->Caption = "";
	Form3->Label3->Caption = "";
	Form3->OpenDialog1->Execute();

	Form1->Vuzel[Form1->ComboBox2->ItemIndex].VWorker.clear();
	Form1->Vuzel[Form1->ComboBox2->ItemIndex].Oij.clear();
	ifstream input(Form3->OpenDialog1->FileName.c_str());

	if (!input.is_open()) {
		return;
	}
	while (!input.eof()) {
		string name;
		double K;
		int Oji;
		input >> name >> K >> Oji;
		Form1->Vuzel[Form1->ComboBox2->ItemIndex].VWorker.push_back(K);
		Form1->Vuzel[Form1->ComboBox2->ItemIndex].Oij.push_back(Oji);
	}
	Form3->StringGrid1->RowCount =
		Form1->Vuzel[Form1->ComboBox2->ItemIndex].VWorker.size() + 1;
	for (int i = 0; i < Form1->Vuzel[Form1->ComboBox2->ItemIndex].VWorker.size
		(); i++) {
		Form3->StringGrid1->Cells[0][i + 1] = "ДЛ_" + UnicodeString(i + 1);
		Form3->StringGrid1->Cells[1][i + 1] =
			Form1->Vuzel[Form1->ComboBox2->ItemIndex].VWorker[i];
		Form3->StringGrid1->Cells[2][i + 1] =
			Form1->Vuzel[Form1->ComboBox2->ItemIndex].Oij[i];
	}
	if (Form1->Vuzel[Form1->ComboBox2->ItemIndex].CheckA() != 0) {
		Form3->Label1->Font->Color = clGreen;
		Form3->Label1->Caption = "Целостность в порядке";
		Form3->Label4->Caption =
			UnicodeString(Form1->Vuzel[Form1->ComboBox2->ItemIndex]
			.get_K_dl_i());
		Form3->Label5->Caption =
			UnicodeString(Form1->Vuzel[Form1->ComboBox2->ItemIndex]
			.K * Form1->Vuzel[Form1->ComboBox2->ItemIndex].get_K_dl_i());
	}
	else {
		Form3->Label1->Font->Color = clRed;
		Form3->Label1->Caption = "Ошибка";
		Form3->Label4->Caption = "Ошибка";
		Form3->Label5->Caption = "Ошибка";
	}

	UnicodeString picpath = "SC_background/back_";
	picpath +=  UnicodeString((ComboBox2->ItemIndex%7)+1) + ".bmp";
	Form3->Image1->Picture->LoadFromFile(picpath);
	Form3->Show();
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::Button5Click(TObject *Sender) {
	// if (Label7->Caption == "Ч: 0 Мин.: 0 Сек.: 0") {
	// Test();
	T1 = new Thr1(false);
	T1->FreeOnTerminate = true;

	// }
}
// ---------------------------------------------------------------------------

void __fastcall TForm1::Button6Click(TObject *Sender) {
	T1->Terminate();
	Label7->Caption = "Ч: 0 Мин.: 0 Сек.: 0";

}
// ---------------------------------------------------------------------------

void __fastcall TForm1::Button7Click(TObject *Sender) {
	print_upload();
}
// ---------------------------------------------------------------------------

