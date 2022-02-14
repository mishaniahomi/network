// ---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
#include "Unit1.h"
#include "Unit4.h"

// ---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
 void Test(){
	for (int i = 0; i < Form1->Vuzel.size(); i++) {
		if (( Form1->Vuzel[i].CheckA()   )  != 0) {
		   Form1->Label7->Font->Color = clGreen;

		}
		else  {
			Form1->Label7->Font->Color = clRed;

			break;
		}
	}
 }
 double BlueLine_checker() {
	double total_sr = 0;
	for (int i = 0; i < Form1->Vuzel.size(); i++) {
		total_sr += Form1->Vuzel[i].K;
	}
	return total_sr;
}
 int Test2(){
    for (int i = 0; i < Form1->Vuzel.size(); i++) {
		if (( Form1->Vuzel[i].CheckA()   )  != 0) {
		   Form1->Label7->Font->Color = clGreen;

		}
		else  {
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
		double k1 = Form1->Vuzel[Form1->Vline[i].A].K;
		double k2 = Form1->Vuzel[Form1->Vline[i].B].K;
		double sr = k1 + k2;
		if (sr >= 0) {
			Form1->Image1->Canvas->Pen->Color = clRed;
		}
		if (sr > 0.5) {
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
__fastcall TForm3::TForm3(TComponent* Owner) : TForm(Owner) {
}

// ---------------------------------------------------------------------------
void __fastcall TForm3::FormCreate(TObject *Sender) {
	Panel1->Height = Form3->Height;
	Panel1->Width = Form3->Width;
}

// ---------------------------------------------------------------------------
void __fastcall TForm3::Button1Click(TObject *Sender) {
	for (int i = 1; i < Form3->StringGrid1->RowCount; i++) {
		Form1->Vuzel[Form1->ComboBox2->ItemIndex].VWorker[i - 1] =
			Form3->StringGrid1->Cells[1][i].ToDouble();
		Form1->Vuzel[Form1->ComboBox2->ItemIndex].Oij[i - 1] =
			Form3->StringGrid1->Cells[2][i].ToInt();
	}

	if (Form1->Vuzel[Form1->ComboBox2->ItemIndex].CheckA() != 0) {
		Label1->Font->Color = clGreen;
		Label4->Font->Color = clBlack;
		Label5->Font->Color = clBlack;
		Label1->Caption = "Целостность в порядке";
		Label4->Caption =
			UnicodeString(Form1->Vuzel[Form1->ComboBox2->ItemIndex]
			.get_K_dl_i());
		Label5->Caption =
			UnicodeString(Form1->Vuzel[Form1->ComboBox2->ItemIndex]
			.K * Form1->Vuzel[Form1->ComboBox2->ItemIndex].get_K_dl_i());

	}
	else {
		Label1->Font->Color = clRed;
		Label4->Font->Color = clRed;
		Label5->Font->Color = clRed;
		Label1->Caption = "Ошибка";
		Label4->Caption = "Ошибка";
		Label5->Caption = "Ошибка";
	}

}

// ---------------------------------------------------------------------------
void __fastcall TForm3::Button2Click(TObject *Sender) {
	Form3->StringGrid1->RowCount = Form3->StringGrid1->RowCount + 1;
	Form1->Vuzel[Form1->ComboBox2->ItemIndex].VWorker.push_back(0.0);
	Form1->Vuzel[Form1->ComboBox2->ItemIndex].Oij.push_back(0);
	Form3->StringGrid1->Cells[0][Form3->StringGrid1->RowCount - 1] =
		"ДЛ_" + UnicodeString(Form3->StringGrid1->RowCount - 1);
	Form3->StringGrid1->Cells[1][Form3->StringGrid1->RowCount - 1] = "0";
	Form3->StringGrid1->Cells[2][Form3->StringGrid1->RowCount - 1] = "0";
	Form3->Label2->Caption = "Добавлен ДЛ_" + UnicodeString
		(Form3->StringGrid1->RowCount - 1);
	Form3->Label3->Caption = "";
	for (int i = 1; i < Form3->StringGrid1->RowCount; i++) {
		Form1->Vuzel[Form1->ComboBox2->ItemIndex].VWorker[i - 1] =
			Form3->StringGrid1->Cells[1][i].ToDouble();
		Form1->Vuzel[Form1->ComboBox2->ItemIndex].Oij[i - 1] =
			Form3->StringGrid1->Cells[2][i].ToInt();
	}

	if (Form1->Vuzel[Form1->ComboBox2->ItemIndex].CheckA() != 0) {
		Label1->Font->Color = clGreen;
		Label4->Font->Color = clBlack;
		Label5->Font->Color = clBlack;
		Label1->Caption = "Целостность в порядке";
		Label4->Caption =
			UnicodeString(Form1->Vuzel[Form1->ComboBox2->ItemIndex]
			.get_K_dl_i());
		Label5->Caption =
			UnicodeString(Form1->Vuzel[Form1->ComboBox2->ItemIndex]
			.K * Form1->Vuzel[Form1->ComboBox2->ItemIndex].get_K_dl_i());

	}
	else {
		Label1->Font->Color = clRed;
		Label4->Font->Color = clRed;
		Label5->Font->Color = clRed;
		Label1->Caption = "Ошибка";
		Label4->Caption = "Ошибка";
		Label5->Caption = "Ошибка";
	}

}
// ---------------------------------------------------------------------------

void __fastcall TForm3::Button3Click(TObject *Sender) {
	Form3->StringGrid1->Cells[0][Form3->StringGrid1->RowCount - 1] = "";
	Form1->Vuzel[Form1->ComboBox2->ItemIndex].VWorker.pop_back();
	Form1->Vuzel[Form1->ComboBox2->ItemIndex].Oij.pop_back();
	Form3->StringGrid1->RowCount = Form3->StringGrid1->RowCount - 1;
	Form3->Label3->Caption = "Удален ДЛ_" + UnicodeString
		(Form3->StringGrid1->RowCount);
	Form3->Label2->Caption = "";
	for (int i = 1; i < Form3->StringGrid1->RowCount; i++) {
		Form1->Vuzel[Form1->ComboBox2->ItemIndex].VWorker[i - 1] =
			Form3->StringGrid1->Cells[1][i].ToDouble();
		Form1->Vuzel[Form1->ComboBox2->ItemIndex].Oij[i - 1] =
			Form3->StringGrid1->Cells[2][i].ToInt();
	}

	if (Form1->Vuzel[Form1->ComboBox2->ItemIndex].CheckA() != 0) {
		Label1->Font->Color = clGreen;
		Label4->Font->Color = clBlack;
		Label5->Font->Color = clBlack;
		Label1->Caption = "Целостность в порядке";
		Label4->Caption =
			UnicodeString(Form1->Vuzel[Form1->ComboBox2->ItemIndex]
			.get_K_dl_i());
		Label5->Caption =
			UnicodeString(Form1->Vuzel[Form1->ComboBox2->ItemIndex]
			.K * Form1->Vuzel[Form1->ComboBox2->ItemIndex].get_K_dl_i());

	}
	else {
		Label1->Font->Color = clRed;
		Label4->Font->Color = clRed;
		Label5->Font->Color = clRed;
		Label1->Caption = "Ошибка";
		Label4->Caption = "Ошибка";
		Label5->Caption = "Ошибка";
	}

}
// ---------------------------------------------------------------------------
void __fastcall TForm3::FormCloseQuery(TObject *Sender, bool &CanClose)
{
	Test();
	print_upload();
}
//---------------------------------------------------------------------------

