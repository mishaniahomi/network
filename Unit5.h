//---------------------------------------------------------------------------

#ifndef Unit5H
#define Unit5H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
//---------------------------------------------------------------------------
class Thr2 : public TThread
{
private:
protected:
	void __fastcall Execute();
public:
	__fastcall Thr2(bool CreateSuspended);
};
//---------------------------------------------------------------------------
#endif
