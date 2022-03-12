//---------------------------------------------------------------------------

#ifndef Player1H
#define Player1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
#include <ScktComp.hpp>
#include <ExtCtrls.hpp>
#include <Graphics.hpp>
//---------------------------------------------------------------------------
class TForm2 : public TForm
{
__published:	// IDE-managed Components
        TClientSocket *Client;
        TImage *Table;
        TImage *PionA1;
        TImage *CastelA1;
        TImage *NebunA2;
        TImage *Rege;
        TImage *ReginaA;
        TImage *CastelA2;
        TImage *NebunA1;
        TImage *PionA2;
        TImage *PionA3;
        TImage *PionA4;
        TImage *PionA5;
        TImage *PionA6;
        TImage *PionA7;
        TImage *PionA8;
        TImage *CalA1;
        TImage *PionN1;
        TImage *PionN2;
        TImage *PionN3;
        TImage *PionN4;
        TImage *PionN5;
        TImage *PionN6;
        TImage *PionN7;
        TImage *PionN8;
        TImage *CastelN1;
        TImage *CastelN2;
        TImage *CalN1;
        TImage *CalN2;
        TImage *NebunN1;
        TImage *NebunN2;
        TImage *ReginaN;
        TImage *RegeN;
        TLabel *Label1;
        TImage *CalA2;
        TTimer *Timer1;
        TBitBtn *BitBtn1;
        void __fastcall BitBtn1Click(TObject *Sender);
private:
public:
        __fastcall TForm2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
