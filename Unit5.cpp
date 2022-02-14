// ---------------------------------------------------------------------------

#include <System.hpp>
#pragma hdrstop

#include "Unit4.h"
#include "Unit3.h"
#include "Unit1.h"
#include "Unit5.h"
#pragma package(smart_init)
// ---------------------------------------------------------------------------

// Important: Methods and properties of objects in VCL can only be
// used in a method called using Synchronize, for example:
//
// Synchronize(&UpdateCaption);
//
// where UpdateCaption could look like:
//
// void __fastcall Thr2::UpdateCaption()
// {
// Form1->Caption = "Updated in a thread";
// }
// ---------------------------------------------------------------------------

__fastcall Thr2::Thr2(bool CreateSuspended) : TThread(CreateSuspended) {
}

// ---------------------------------------------------------------------------
void __fastcall Thr2::Execute() {
	while (1) {
		for (int j = 1; j < 11; j++) {
			for (int i = 0; i < Form1->Vline.size(); i++) {
				int px =
					j * (Form1->Vuzel[Form1->Vline[i].A].X -
					Form1->Vuzel[Form1->Vline[i].B].X) / 10;
				int py =
				j * (Form1->Vuzel[Form1->Vline[i].A].Y -
					Form1->Vuzel[Form1->Vline[i].B].Y) / 10;
					//ShowMessage((Form1->Vuzel[Form1->Vline[i].A].Y -
				   //	Form1->Vuzel[Form1->Vline[i].B].Y)/10);
				int x = Form1->Vuzel[Form1->Vline[i].A].X - px;
				int y = Form1->Vuzel[Form1->Vline[i].A].Y - py + 25;
				Form1->Image1->Canvas->Rectangle(x, y, x + 10, y + 10);

			}
			Sleep(970);
		}

	}
}
// ---------------------------------------------------------------------------
