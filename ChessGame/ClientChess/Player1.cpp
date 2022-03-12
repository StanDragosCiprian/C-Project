//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "Chess.h"
#include "Axis.h"
#include "Tabla.h"
#include "Player1.h"
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

void __fastcall TForm2::BitBtn1Click(TObject *Sender)
{
Client->Active=true;
}
//---------------------------------------------------------------------------


