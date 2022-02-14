// ---------------------------------------------------------------------------

#include <System.hpp>
#pragma hdrstop

#include "Unit4.h"
#include "Unit3.h"
#include "Unit1.h"
#pragma package(smart_init)
// ---------------------------------------------------------------------------

// Important: Methods and properties of objects in VCL can only be
// used in a method called using Synchronize, for example:
//
// Synchronize(&UpdateCaption);
//
// where UpdateCaption could look like:
//
// void __fastcall Thr1::UpdateCaption()
// {
// Form1->Caption = "Updated in a thread";
// }
// ---------------------------------------------------------------------------

__fastcall Thr1::Thr1(bool CreateSuspended) : TThread(CreateSuspended) {
}



// ---------------------------------------------------------------------------
void __fastcall Thr1::Execute() {
	long long int counter = 0;
 
	while (1) {
		counter++;
	
		UnicodeString str1;
	
		if ((counter / (60 * 60)) < 10) {
			str1 = "Ч: 0" + UnicodeString(counter / (60 * 60));
		}
		else
			str1 = "Ч: " + UnicodeString(counter / (60 * 60));
		if ((counter / 60 - 60 * (counter / (60 * 60))) < 10) {
			str1 += " Мин.: 0" + UnicodeString
				(counter / 60 - 60 * (counter / (60 * 60)));
		}
		else
			str1 += " Мин.: " + UnicodeString
				(counter / 60 - 60 * (counter / (60 * 60)));
		if ((counter % 60) < 10) {
			str1 += " Сек.: 0" + UnicodeString(counter % 60);
		}
		else
			str1 += " Сек.: " + UnicodeString(counter % 60);
		Form1->Label7->Caption = str1;
        for (int i = 0; i < Form1->Vuzel.size(); i++) {
		if ((Form1->Vuzel[i].CheckA()) != 0) {
			Form1->Label7->Font->Color = clGreen;

		}
		else {
			Form1->Label7->Font->Color = clRed;

			break;
		}
	}
		Sleep(5);

		if (Terminated) {
			counter = 0;
			break;
		}



	}
}
// ---------------------------------------------------------------------------
