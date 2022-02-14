//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <string>
#include <fstream>
#include <sstream>
#include <functional>
#include <iostream>
#include "Unit2.h"
#include "Unit1.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm2::FormShow(TObject *Sender)
{
	//#Form2->Visible = 1;
	//#Form2->Enabled = 1;
}
//---------------------------------------------------------------------------



