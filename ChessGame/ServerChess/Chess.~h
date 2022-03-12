//---------------------------------------------------------------------------

#ifndef ChessH
#define ChessH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Graphics.hpp>
#include <ScktComp.hpp>
#include <Buttons.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TImage *ReginaA;
        TImage *Rege;
        TImage *PionA1;
        TImage *CastelA1;
        TImage *NebunA2;
        TImage *Table;
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
        TServerSocket *ServerSocket1;
        TImage *CalA2;
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall ServerSocket1Accept(TObject *Sender,
          TCustomWinSocket *Socket);
        void __fastcall ServerSocket1ClientRead(TObject *Sender,
          TCustomWinSocket *Socket);
private:
void __fastcall PionA1Visual(TObject *Sender);
void __fastcall PionA1Mov(TObject *Sender);
void __fastcall PionA2Visual(TObject *Sender);
void __fastcall PionA2Mov(TObject *Sender);
void __fastcall PionA3Visual(TObject *Sender);
void __fastcall PionA3Mov(TObject *Sender);
void __fastcall PionA4Visual(TObject *Sender);
void __fastcall PionA4Mov(TObject *Sender);
void __fastcall PionA5Visual(TObject *Sender);
void __fastcall PionA5Mov(TObject *Sender);
void __fastcall PionA6Visual(TObject *Sender);
void __fastcall PionA6Mov(TObject *Sender);
void __fastcall PionA7Visual(TObject *Sender);
void __fastcall PionA7Mov(TObject *Sender);
void __fastcall PionA8Visual(TObject *Sender);
void __fastcall PionA8Mov(TObject *Sender);

void __fastcall CastelA1Mov(TObject *Sender);
void __fastcall CastelA1Mov2(TObject *Sender);
void __fastcall CastelA1Mov3(TObject *Sender);

void __fastcall CastelA2Mov(TObject *Sender);
void __fastcall PointCastelA2AMov(TObject *Sender);
void __fastcall CastelA2Mov2(TObject *Sender);
void __fastcall CastelA2Mov3(TObject *Sender);

void __fastcall NebunA1Vizible(TObject *Sender);
void __fastcall NebunA1Mov(TObject *Sender);
void __fastcall NebunA1Mov2(TObject *Sender);
void __fastcall PointNebunA1AMov2(TObject *Sender);

void __fastcall NebunA2Vizible(TObject *Sender);
void __fastcall NebunA2Mov(TObject *Sender);
void __fastcall NebunA2Mov2(TObject *Sender);
void __fastcall PointNebunA2AMov2(TObject *Sender);

void __fastcall CalA1Vizible(TObject *Sender);
void __fastcall CalA1Mov(TObject *Sender);

void __fastcall CalA1Mov2(TObject *Sender);
void __fastcall CalA1Mov3(TObject *Sender);
void __fastcall CalA1Mov4(TObject *Sender);

void __fastcall CalA2Vizible(TObject *Sender);
void __fastcall CalA2Mov(TObject *Sender);
void __fastcall CalA2Mov2(TObject *Sender);
void __fastcall CalA2Mov3(TObject *Sender);
void __fastcall CalA2Mov4(TObject *Sender);

void __fastcall RegeA1Vizible(TObject *Sender);
void __fastcall RegeA1Mov(TObject *Sender);

void __fastcall ReginA1Mov1(TObject *Sender);
void __fastcall ReginA1Mov2(TObject *Sender);
void __fastcall ReginA1Mov3(TObject *Sender);
void __fastcall ReginA1Mov4(TObject *Sender);
void __fastcall ReginA1Mov5(TObject *Sender);

public:

TImage *point[8][8];
int PionAy[8];
int PionAy1;
int PionAy2;
int PionAy3;
int PionAy4;
int PionAy5;
int PionAy6;
int PionAy7;
int PionAy8;

int CastelAy;
int CastelAx;
int CastelAy2;
int CastelAx2;

int NebunY;
int NebunX;
int NebunY2;
int NebunX2;

int NebunY3;
int NebunX3;
int NebunY4;
int NebunX4;



int nebpoz1;
int nebpoz2;
int saveI1;
int saveI2;

int calAx;
int calAy;
int calAx1;
int calAy1;

int calAx2;
int calAy2;
int calAx3;
int calAy3;

int calA2x;
int calA2y;
int calA2x1;
int calA2y1;
int calA2x2;
int calA2y2;
int calA2x3;
int calA2y3;

int RegeAx;
int RegeAy;

int ReginAx;
int ReginAy;

int ReginAx2;
int ReginAy2;
int ReginAx3;
int ReginAy3;

        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
