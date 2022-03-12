//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "ClientChessC.h"
#include "Tabla.h"
#include "Axis.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
Tabla *tab=new Tabla();
   for(int i=0;i<8;i++)
   {

    for(int j=0;j<8;j++)
    {
      point[i][j]=new TImage(Form1);
      point[i][j]->Parent=Form1;
       Graphics::TBitmap * bmpPicture = new Graphics::TBitmap;
     bmpPicture->LoadFromFile("C:\\fisiere\\Proiect\\ServerChess\\Imagini\\DirC.bmp");
    point[i][j]->Picture->Graphic=bmpPicture;
    point[i][j]->Height=95;
    point[i][j]->Width=95;
    point[i][j]->Transparent=true;
    point[i][j]->Visible=false;
    
    point[i][j]->Top=tab->gety(i);
    point[i][j]->Left=tab->getx(j);
    }
   }

   for(int i=0;i<8;i++){
   PionNy[i]=1;
   }
  PionNy1=1;
  PionNy2=1;
  PionNy3=1;
  PionNy4=1;
  PionNy5=1;
  PionNy6=1;
  PionNy7=1;
  PionNy8=1;

   CastelNy=0;
   CastelNx=0;
    CastelNy2=7;
    CastelNx2=0;

    NebunNY=0;
    NebunNX=5;
    NebunNY2=7;
    NebunNX2=2;

     calNx=3;
     calNy=0;
     calNx1=3;
     calNy1=0;
      calNx2=3;
     calNy2=0;
     calNx3=3;
     calNy3=0;

     calNx4=3;
     calNy4=0;
     calNx5=3;
     calNy5=0;
      calNx6=3;
     calNy6=0;
     calNx7=3;
     calNy7=0;
     RegeNx=3;
     RegeNy=6;
    pion1Client=2;
    pion2Client=2;
    pion3Client=2;
    pion4Client=2;
    pion5Client=2;
    pion6Client=2;
    pion7Client=2;
    pion8Client=2;


}
//---------------------------------------------------------------------------
void __fastcall TForm1::ConnectClick(TObject *Sender)
{
  ClientSocket1->Active=true;
}
//---------------------------------------------------------------------------



void __fastcall TForm1::FormCreate(TObject *Sender)
{
 Tabla *tab=new Tabla();
//Pionii
PionN1->Top=tab->gety(1);
PionN1->Left=tab->getx(0);
PionN1->OnClick=PionN1Visual;

PionN2->Top=tab->gety(1);
PionN2->Left=tab->getx(1);
PionN2->OnClick=PionN2Visual;

PionN3->Top=tab->gety(1);
PionN3->Left=tab->getx(2);
PionN3->OnClick=PionN3Visual;

PionN4->Top=tab->gety(1);
PionN4->Left=tab->getx(3);
PionN4->OnClick=PionN4Visual;

PionN5->Top=tab->gety(1);
PionN5->Left=tab->getx(4);
PionN5->OnClick=PionN5Visual;

PionN6->Top=tab->gety(1);
PionN6->Left=tab->getx(5);
PionN6->OnClick=PionN6Visual;

PionN7->Top=tab->gety(1);
PionN7->Left=tab->getx(6);
PionN7->OnClick=PionN7Visual;

PionN8->Top=tab->gety(1);
PionN8->Left=tab->getx(7);
PionN8->OnClick=PionN8Visual;

CastelN1->Top=tab->gety(0);
CastelN1->Left=tab->getx(0);
CastelN1->OnClick=CastelN1Mov;

CastelN2->Top=tab->gety(0);
CastelN2->Left=tab->getx(7);
CastelN2->OnClick=CastelN2Mov;

NebunN1->Top=tab->gety(0);
NebunN1->Left=tab->getx(1);
NebunN1->OnClick=NebunN1Vizible;

CalN1->Top=tab->gety(0);
CalN1->Left=tab->getx(2);
CalN1->OnClick=CalN1Vizible;

CalN2->Top=tab->gety(0);
CalN2->Left=tab->getx(6);
CalN2->OnClick=CalN2Vizible;

RegeN->Top=tab->gety(0);
RegeN->Left=tab->gety(4);
RegeN->OnClick=RegeN1Vizible;


}
//---------------------------------------------------------------------------

void __fastcall TForm1::PionN1Visual(TObject *Sender)
{
  int savepoinN=PionNy1;
  int poz=(PionN1->Top)/100;

for(int i=savepoinN;i<=poz+2;i++)
{
      point[i][0]->Visible=true;
      point[poz][0]->Visible=false;
      point[i][0]->OnClick=PionN1Mov;
  }
}
void __fastcall TForm1::PionN1Mov(TObject *Sender)
{

TPoint p_rel_scr = Mouse->CursorPos;
TPoint p = Form1->ScreenToClient(p_rel_scr );
int x_pos = (int) p.x;
int y_pos = (int) p.y;
 int savepoinN=PionNy1;
 int saveclient=pion1Client;
  int poz=(PionN1->Top)/100;
for(int i=savepoinN;i<=poz+2;i++)
{
int var=(point[i][0]->Top/100)*100;
if(y_pos>var&&y_pos<var+100)
{
PionNy1=i;

       PionN1->Top=point[i][0]->Top;

       AnsiString ClientMove=AnsiString(PionN1->Top)+AnsiString(PionN2->Top)+AnsiString(PionN3->Top)+AnsiString(PionN4->Top)+AnsiString(PionN5->Top)+AnsiString(PionN6->Top)+AnsiString(PionN7->Top)+AnsiString(PionN8->Top)+AnsiString(CastelN1->Top)+AnsiString(CastelN1->Left)+AnsiString(CastelN2->Top)+AnsiString(CastelN2->Left)+AnsiString(CalN1->Top)+AnsiString(CalN1->Left)+AnsiString(CalN2->Top)+AnsiString(CalN2->Left);
       ClientSocket1->Socket->SendText(ClientMove);

  }

 }
 pion1Client=saveclient;
for(int i=0;i<8;i++)
   {

    for(int j=0;j<8;j++)
    {
      point[i][j]->Visible=false;
    }

    }
}


//---------------------------------------------------------------------------
void __fastcall TForm1::PionN2Visual(TObject *Sender)
{
  int savepoinN=PionNy2;
  int poz=(PionN2->Top)/100;

for(int i=savepoinN;i<=poz+2;i++)
{
      point[i][1]->Visible=true;
      point[poz][1]->Visible=false;
      point[i][1]->OnClick=PionN2Mov;

}

}
void __fastcall TForm1::PionN2Mov(TObject *Sender)
{

TPoint p_rel_scr = Mouse->CursorPos;
TPoint p = Form1->ScreenToClient(p_rel_scr );
int x_pos = (int) p.x;
int y_pos = (int) p.y;
 int savepoinN=PionNy2;
  int poz=(PionN2->Top)/100;
for(int i=savepoinN;i<=poz+2;i++)
{
int var=(point[i][1]->Top/100)*100;
if(y_pos>var&&y_pos<var+100)
{
PionNy2=i;
       PionN2->Top=point[i][1]->Top;
       AnsiString ClientMove=AnsiString(PionN1->Top)+AnsiString(PionN2->Top)+AnsiString(PionN3->Top)+AnsiString(PionN4->Top)+AnsiString(PionN5->Top)+AnsiString(PionN6->Top)+AnsiString(PionN7->Top)+AnsiString(PionN8->Top)+AnsiString(CastelN1->Top)+AnsiString(CastelN1->Left)+AnsiString(CastelN2->Top)+AnsiString(CastelN2->Left)+AnsiString(CalN1->Top)+AnsiString(CalN1->Left)+AnsiString(CalN2->Top)+AnsiString(CalN2->Left);
       ClientSocket1->Socket->SendText(ClientMove);

  }
 }
for(int i=0;i<8;i++)
   {

    for(int j=0;j<8;j++)
    {
      point[i][j]->Visible=false;
    }

    }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::PionN3Visual(TObject *Sender)
{
  int savepoinN=PionNy3;
  int poz=(PionN3->Top)/100;

for(int i=savepoinN;i<=poz+2;i++)
{
      point[i][2]->Visible=true;
      point[poz][2]->Visible=false;
      point[i][2]->OnClick=PionN3Mov;
  }
}
void __fastcall TForm1::PionN3Mov(TObject *Sender)
{

TPoint p_rel_scr = Mouse->CursorPos;
TPoint p = Form1->ScreenToClient(p_rel_scr );
int x_pos = (int) p.x;
int y_pos = (int) p.y;
 int savepoinN=PionNy1;
  int poz=(PionN3->Top)/100;
for(int i=savepoinN;i<=poz+2;i++)
{
int var=(point[i][2]->Top/100)*100;
if(y_pos>var&&y_pos<var+100)
{
PionNy3=i;
       PionN3->Top=point[i][2]->Top;
       AnsiString ClientMove=AnsiString(PionN1->Top)+AnsiString(PionN2->Top)+AnsiString(PionN3->Top)+AnsiString(PionN4->Top)+AnsiString(PionN5->Top)+AnsiString(PionN6->Top)+AnsiString(PionN7->Top)+AnsiString(PionN8->Top)+AnsiString(CastelN1->Top)+AnsiString(CastelN1->Left)+AnsiString(CastelN2->Top)+AnsiString(CastelN2->Left)+AnsiString(CalN1->Top)+AnsiString(CalN1->Left)+AnsiString(CalN2->Top)+AnsiString(CalN2->Left);
       ClientSocket1->Socket->SendText(ClientMove);

 }
for(int i=0;i<8;i++)
   {

    for(int j=0;j<8;j++)
    {
      point[i][j]->Visible=false;
    }

    }
}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::PionN4Visual(TObject *Sender)
{
  int savepoinN=PionNy4;
  int poz=(PionN4->Top)/100;

for(int i=savepoinN;i<=poz+2;i++)
{
      point[i][3]->Visible=true;
      point[poz][3]->Visible=false;
      point[i][3]->OnClick=PionN4Mov;
  }
}
void __fastcall TForm1::PionN4Mov(TObject *Sender)
{

TPoint p_rel_scr = Mouse->CursorPos;
TPoint p = Form1->ScreenToClient(p_rel_scr );
int x_pos = (int) p.x;
int y_pos = (int) p.y;
 int savepoinN=PionNy4;
  int poz=(PionN1->Top)/100;
for(int i=savepoinN;i<=poz+2;i++)
{
int var=(point[i][3]->Top/100)*100;
if(y_pos>var&&y_pos<var+100)
{
PionNy4=i;
       PionN4->Top=point[i][3]->Top;
       AnsiString ClientMove=AnsiString(PionN1->Top)+AnsiString(PionN2->Top)+AnsiString(PionN3->Top)+AnsiString(PionN4->Top)+AnsiString(PionN5->Top)+AnsiString(PionN6->Top)+AnsiString(PionN7->Top)+AnsiString(PionN8->Top)+AnsiString(CastelN1->Top)+AnsiString(CastelN1->Left)+AnsiString(CastelN2->Top)+AnsiString(CastelN2->Left)+AnsiString(CalN1->Top)+AnsiString(CalN1->Left)+AnsiString(CalN2->Top)+AnsiString(CalN2->Left);
       ClientSocket1->Socket->SendText(ClientMove);


  }
 }
for(int i=0;i<8;i++)
   {

    for(int j=0;j<8;j++)
    {
      point[i][j]->Visible=false;
    }

    }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::PionN5Visual(TObject *Sender)
{
  int savepoinN=PionNy5;
  int poz=(PionN5->Top)/100;

for(int i=savepoinN;i<=poz+2;i++)
{
      point[i][4]->Visible=true;
      point[poz][4]->Visible=false;
      point[i][4]->OnClick=PionN5Mov;
  }
}
void __fastcall TForm1::PionN5Mov(TObject *Sender)
{

TPoint p_rel_scr = Mouse->CursorPos;
TPoint p = Form1->ScreenToClient(p_rel_scr );
int x_pos = (int) p.x;
int y_pos = (int) p.y;
 int savepoinN=PionNy5;
  int poz=(PionN5->Top)/100;
for(int i=savepoinN;i<=poz+2;i++)
{
int var=(point[i][4]->Top/100)*100;
if(y_pos>var&&y_pos<var+100)
{
PionNy5=i;
       PionN5->Top=point[i][4]->Top;
       AnsiString ClientMove=AnsiString(PionN1->Top)+AnsiString(PionN2->Top)+AnsiString(PionN3->Top)+AnsiString(PionN4->Top)+AnsiString(PionN5->Top)+AnsiString(PionN6->Top)+AnsiString(PionN7->Top)+AnsiString(PionN8->Top)+AnsiString(CastelN1->Top)+AnsiString(CastelN1->Left)+AnsiString(CastelN2->Top)+AnsiString(CastelN2->Left)+AnsiString(CalN1->Top)+AnsiString(CalN1->Left)+AnsiString(CalN2->Top)+AnsiString(CalN2->Left);
       ClientSocket1->Socket->SendText(ClientMove);

 }
for(int i=0;i<8;i++)
   {

    for(int j=0;j<8;j++)
    {
      point[i][j]->Visible=false;
    }

    }
}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::PionN6Visual(TObject *Sender)
{
  int savepoinN=PionNy6;
  int poz=(PionN6->Top)/100;

for(int i=savepoinN;i<=poz+2;i++)
{
      point[i][5]->Visible=true;
      point[poz][5]->Visible=false;
      point[i][5]->OnClick=PionN6Mov;
  }
}
void __fastcall TForm1::PionN6Mov(TObject *Sender)
{

TPoint p_rel_scr = Mouse->CursorPos;
TPoint p = Form1->ScreenToClient(p_rel_scr );
int x_pos = (int) p.x;
int y_pos = (int) p.y;
 int savepoinN=PionNy6;
  int poz=(PionN6->Top)/100;
for(int i=savepoinN;i<=poz+2;i++)
{
int var=(point[i][5]->Top/100)*100;
if(y_pos>var&&y_pos<var+100)
{
PionNy6=i;
       PionN6->Top=point[i][5]->Top;
       AnsiString ClientMove=AnsiString(PionN1->Top)+AnsiString(PionN2->Top)+AnsiString(PionN3->Top)+AnsiString(PionN4->Top)+AnsiString(PionN5->Top)+AnsiString(PionN6->Top)+AnsiString(PionN7->Top)+AnsiString(PionN8->Top)+AnsiString(CastelN1->Top)+AnsiString(CastelN1->Left)+AnsiString(CastelN2->Top)+AnsiString(CastelN2->Left)+AnsiString(CalN1->Top)+AnsiString(CalN1->Left)+AnsiString(CalN2->Top)+AnsiString(CalN2->Left);
       ClientSocket1->Socket->SendText(ClientMove);

  }
 }
for(int i=0;i<8;i++)
   {

    for(int j=0;j<8;j++)
    {
      point[i][j]->Visible=false;
    }

    }
}

//---------------------------------------------------------------------------
void __fastcall TForm1::PionN7Visual(TObject *Sender)
{
  int savepoinN=PionNy7;
  int poz=(PionN7->Top)/100;

for(int i=savepoinN;i<=poz+2;i++)
{
      point[i][6]->Visible=true;
      point[poz][6]->Visible=false;
      point[i][6]->OnClick=PionN7Mov;
  }
}
void __fastcall TForm1::PionN7Mov(TObject *Sender)
{

TPoint p_rel_scr = Mouse->CursorPos;
TPoint p = Form1->ScreenToClient(p_rel_scr );
int x_pos = (int) p.x;
int y_pos = (int) p.y;
 int savepoinN=PionNy1;
  int poz=(PionN7->Top)/100;
for(int i=savepoinN;i<=poz+2;i++)
{
int var=(point[i][6]->Top/100)*100;
if(y_pos>var&&y_pos<var+100)
{
PionNy7=i;
       PionN7->Top=point[i][6]->Top;
       AnsiString ClientMove=AnsiString(PionN1->Top)+AnsiString(PionN2->Top)+AnsiString(PionN3->Top)+AnsiString(PionN4->Top)+AnsiString(PionN5->Top)+AnsiString(PionN6->Top)+AnsiString(PionN7->Top)+AnsiString(PionN8->Top)+AnsiString(CastelN1->Top)+AnsiString(CastelN1->Left)+AnsiString(CastelN2->Top)+AnsiString(CastelN2->Left)+AnsiString(CalN1->Top)+AnsiString(CalN1->Left)+AnsiString(CalN2->Top)+AnsiString(CalN2->Left);
       ClientSocket1->Socket->SendText(ClientMove);

  }
 }
for(int i=0;i<8;i++)
   {

    for(int j=0;j<8;j++)
    {
      point[i][j]->Visible=false;
    }

    }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::PionN8Visual(TObject *Sender)
{
  int savepoinN=PionNy8;
  int poz=(PionN8->Top)/100;

for(int i=savepoinN;i<=poz+2;i++)
{
      point[i][7]->Visible=true;
      point[poz][7]->Visible=false;
      point[i][7]->OnClick=PionN8Mov;
  }
}
void __fastcall TForm1::PionN8Mov(TObject *Sender)
{

TPoint p_rel_scr = Mouse->CursorPos;
TPoint p = Form1->ScreenToClient(p_rel_scr );
int x_pos = (int) p.x;
int y_pos = (int) p.y;
 int savepoinN=PionNy1;
  int poz=(PionN8->Top)/100;
for(int i=savepoinN;i<=poz+2;i++)
{
int var=(point[i][7]->Top/100)*100;
if(y_pos>var&&y_pos<var+100)
{
PionNy8=i;
       PionN8->Top=point[i][0]->Top;
       AnsiString ClientMove=AnsiString(PionN1->Top)+AnsiString(PionN2->Top)+AnsiString(PionN3->Top)+AnsiString(PionN4->Top)+AnsiString(PionN5->Top)+AnsiString(PionN6->Top)+AnsiString(PionN7->Top)+AnsiString(PionN8->Top)+AnsiString(CastelN1->Top)+AnsiString(CastelN1->Left)+AnsiString(CastelN2->Top)+AnsiString(CastelN2->Left)+AnsiString(CalN1->Top)+AnsiString(CalN1->Left)+AnsiString(CalN2->Top)+AnsiString(CalN2->Left);
       ClientSocket1->Socket->SendText(ClientMove);
       
  }
 }
for(int i=0;i<8;i++)
   {

    for(int j=0;j<8;j++)
    {
      point[i][j]->Visible=false;
    }

    }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::CastelN1Mov(TObject *Sender)
{
    for(int i=7;i>=0;i--)
{
      point[i][CastelNy]->Visible=true;
      point[i][CastelNy]->OnClick=CastelN1Mov2;
}
   for(int i=7;i>=0;i--)
   {
      point[CastelNx][i]->Visible=true;
      point[CastelNx][i]->OnClick=CastelN1Mov3;
   }

}
void __fastcall TForm1::CastelN1Mov2(TObject *Sender)
{
  TPoint p_rel_scr = Mouse->CursorPos;
TPoint p = Form1->ScreenToClient(p_rel_scr );
int x_pos = (int) p.x;
int y_pos = (int) p.y;
for(int i=7;i>=0;i--)
{
int var=(point[i][CastelNy]->Top/100)*100;
if(y_pos>var&&y_pos<var+100)
{
      CastelNx=i;
      CastelN1->Top=point[CastelNx][CastelNy]->Top;
     CastelN1->Left=point[CastelNx][CastelNy]->Left;
     AnsiString ClientMove=AnsiString(PionN1->Top)+AnsiString(PionN2->Top)+AnsiString(PionN3->Top)+AnsiString(PionN4->Top)+AnsiString(PionN5->Top)+AnsiString(PionN6->Top)+AnsiString(PionN7->Top)+AnsiString(PionN8->Top)+AnsiString(CastelN1->Top)+AnsiString(CastelN1->Left)+AnsiString(CastelN2->Top)+AnsiString(CastelN2->Left)+AnsiString(CalN1->Top)+AnsiString(CalN1->Left)+AnsiString(CalN2->Top)+AnsiString(CalN2->Left);
       ClientSocket1->Socket->SendText(ClientMove);
  }
 }

     for(int i=0;i<8;i++)
   {
    for(int j=0;j<8;j++)
    {
      point[i][j]->Visible=false;
    }
    }

}

void __fastcall TForm1::CastelN1Mov3(TObject *Sender)
{
   TPoint p_rel_scr = Mouse->CursorPos;
TPoint p = Form1->ScreenToClient(p_rel_scr );
int x_pos = (int) p.x;
int y_pos = (int) p.y;
for(int i=7;i>=0;i--)
{
int var=(point[i][CastelNx]->Top/100)*100;
if(x_pos>var&&x_pos<var+100)
{
      CastelNy=i;
      CastelN1->Top=point[CastelNx][CastelNy]->Top;
     CastelN1->Left=point[CastelNx][CastelNy]->Left;
     AnsiString ClientMove=AnsiString(PionN1->Top)+AnsiString(PionN2->Top)+AnsiString(PionN3->Top)+AnsiString(PionN4->Top)+AnsiString(PionN5->Top)+AnsiString(PionN6->Top)+AnsiString(PionN7->Top)+AnsiString(PionN8->Top)+AnsiString(CastelN1->Top)+AnsiString(CastelN1->Left)+AnsiString(CastelN2->Top)+AnsiString(CastelN2->Left)+AnsiString(CalN1->Top)+AnsiString(CalN1->Left)+AnsiString(CalN2->Top)+AnsiString(CalN2->Left);
       ClientSocket1->Socket->SendText(ClientMove);

  }
 }
  for(int i=0;i<8;i++)
   {
    for(int j=0;j<8;j++)
    {
      point[i][j]->Visible=false;
    }
    }

}
//---------------------------------------------------------------------------
void __fastcall TForm1::CastelN2Mov(TObject *Sender)
{
    for(int i=7;i>=0;i--)
{
      point[i][CastelNy2]->Visible=true;
      point[i][CastelNy2]->OnClick=CastelN2Mov2;
}
   for(int i=7;i>=0;i--)
   {
      point[CastelNx2][i]->Visible=true;
      point[CastelNx2][i]->OnClick=CastelN2Mov3;
   }

}
void __fastcall TForm1::CastelN2Mov2(TObject *Sender)
{
  TPoint p_rel_scr = Mouse->CursorPos;
TPoint p = Form1->ScreenToClient(p_rel_scr );
int x_pos = (int) p.x;
int y_pos = (int) p.y;
for(int i=7;i>=0;i--)
{
int var=(point[i][CastelNy2]->Top/100)*100;
if(y_pos>var&&y_pos<var+100)
{
      CastelNx2=i;
      CastelN2->Top=point[CastelNx2][CastelNy2]->Top;
     CastelN2->Left=point[CastelNx2][CastelNy2]->Left;
     AnsiString ClientMove=AnsiString(PionN1->Top)+AnsiString(PionN2->Top)+AnsiString(PionN3->Top)+AnsiString(PionN4->Top)+AnsiString(PionN5->Top)+AnsiString(PionN6->Top)+AnsiString(PionN7->Top)+AnsiString(PionN8->Top)+AnsiString(CastelN1->Top)+AnsiString(CastelN1->Left)+AnsiString(CastelN2->Top)+AnsiString(CastelN2->Left)+AnsiString(CalN1->Top)+AnsiString(CalN1->Left)+AnsiString(CalN2->Top)+AnsiString(CalN2->Left);
       ClientSocket1->Socket->SendText(ClientMove);
  }
 }
  for(int i=0;i<8;i++)
   {
    for(int j=0;j<8;j++)
    {
      point[i][j]->Visible=false;
    }
    }

}

void __fastcall TForm1::CastelN2Mov3(TObject *Sender)
{
   TPoint p_rel_scr = Mouse->CursorPos;
TPoint p = Form1->ScreenToClient(p_rel_scr );
int x_pos = (int) p.x;
int y_pos = (int) p.y;
for(int i=7;i>=0;i--)
{
int var=(point[i][CastelNx2]->Top/100)*100;
if(x_pos>var&&x_pos<var+100)
{
      CastelNy2=i;
       CastelN2->Top=point[CastelNx2][CastelNy2]->Top;
     CastelN2->Left=point[CastelNx2][CastelNy2]->Left;
     AnsiString ClientMove=AnsiString(PionN1->Top)+AnsiString(PionN2->Top)+AnsiString(PionN3->Top)+AnsiString(PionN4->Top)+AnsiString(PionN5->Top)+AnsiString(PionN6->Top)+AnsiString(PionN7->Top)+AnsiString(PionN8->Top)+AnsiString(CastelN1->Top)+AnsiString(CastelN1->Left)+AnsiString(CastelN2->Top)+AnsiString(CastelN2->Left)+AnsiString(CalN1->Top)+AnsiString(CalN1->Left)+AnsiString(CalN2->Top)+AnsiString(CalN2->Left);
       ClientSocket1->Socket->SendText(ClientMove);
  }
 }
   for(int i=0;i<8;i++)
   {
    for(int j=0;j<8;j++)
    {
      point[i][j]->Visible=false;
    }
    }

}
//---------------------------------------------------------------------------
void __fastcall TForm1::NebunN1Vizible(TObject *Sender)
{

    int nebx=NebunNX;
    int var=(NebunN1->Top)/100;
for(int i=NebunNY;i<var;i){
    point[i][nebx]->Visible=true;
    point[i][nebx]->OnClick=NebunN1Mov;
    nebx++;
}
int nebx2=NebunNX2;
for(int i=NebunNY2;i<var;i++){
    point[i][nebx2]->Visible=true;
    point[i][nebx2]->OnClick=NebunN1Mov2;
    nebx2--;

}
}
void __fastcall TForm1::NebunN1Mov(TObject *Sender)
{

TPoint p_rel_scr = Mouse->CursorPos;
TPoint p = Form1->ScreenToClient(p_rel_scr );
int x_pos = (int) p.x;
int y_pos = (int) p.y;
int nebpoz=(NebunN1->Top)/100;
int nebpozx=(NebunN1->Left)/100;
int z=NebunNX;
int ct=0;
int nebpozoldZ=NebunNY2;
for(int i=NebunNY;i<=nebpoz;i++){
int var=(point[i][z]->Top/100)*100;
int pointzon=(point[i][z]->Top)/100;
if(y_pos>var&&y_pos<var+100)
{
  NebunN1->Top=point[i][z]->Top;
    NebunN1->Left=point[i][z]->Left;


    //NebunY2=2;
   // NebunX2=7;
    //NebunY=5;
    //NebunX=0;

     NebunNY2=0;
     NebunNX2=7;
     if(i!=6)
     {
     NebunNX2=i;
     }


}
z++;
}
 for(int i=0;i<8;i++){
 for(int j=0;j<8;j++)
    {
      point[i][j]->Visible=false;
    }
    }
 }
void __fastcall TForm1::NebunN1Mov2(TObject *Sender)
{
TPoint p_rel_scr = Mouse->CursorPos;
TPoint p = Form1->ScreenToClient(p_rel_scr );
int x_pos = (int) p.x;
int y_pos = (int) p.y;

int nebpoz=(NebunN1->Top)/100;
int z=NebunNX2;
for(int i=NebunNY2;i<=nebpoz;i++){
int var=(point[i][z]->Top/100)*100;
if(y_pos>var&&y_pos<var+100)
{
  NebunN1->Top=point[i][z]->Top;
  NebunN1->Left=point[i][z]->Left;
  if((NebunNY<8)&&(NebunNY>=0)){
  NebunNY=i-z;
  }

}
z--;
}
 for(int i=0;i<8;i++){
 for(int j=0;j<8;j++)
    {
      point[i][j]->Visible=false;
    }
    }

 for(int i=0;i<8;i++){
 for(int j=0;j<8;j++)
    {
      point[i][j]->Visible=false;
    }
    }
}
void __fastcall TForm1::PointNebunN1AMov2(TObject *Sender)
{

}

//--------------------------------------------------------------------------

void __fastcall TForm1::CalN1Vizible(TObject *Sender)
{

     calNy=(CalN1->Top)/100;
     calNx=(CalN1->Left)/100;
     calNx+=2;
     int z=calNx;
     for(int i=calNy-1;i>=calNy-2;i--){
      point[i][z]->Visible=true;
      point[i][z]->OnClick=CalN1Mov;
      z--;
      }
      calNy1=(CalN1->Top)/100;
     calNx1=(CalN1->Left)/100;
     int z1=calNx1-2;

      if(calNx1>=2){
       for(int i=calNy1-1;i>=calNy1-2;i--){
        point[i][z1]->Visible=true;
        point[i][z1]->OnClick=CalN1Mov2;
        z1++;
       }
      }
      calNy2=(CalN1->Top)/100;
      calNx2=(CalN1->Left)/100;
      int z2=calNx2-1;
      if(calNy2<=5){
      for(int i=calNy2+2;i>calNy2;i--){
      point[i][z2]->Visible=true;
      point[i][z2]->OnClick=CalN1Mov3;
      z2--;
      }
      }
      calNy3=(CalN1->Top)/100;
      calNx3=(CalN1->Left)/100;
      int z3=calNx2+1;
      if(calNy3<=5){
      for(int i=calNy3+2;i>calNy3;i--){
      point[i][z3]->Visible=true;
      point[i][z3]->OnClick=CalN1Mov4;
      z3++;
      }
      }


}

void __fastcall TForm1::CalN1Mov(TObject *Sender){

TPoint p_rel_scr = Mouse->CursorPos;
TPoint p = Form1->ScreenToClient(p_rel_scr );
int x_pos = (int) p.x;
int y_pos = (int) p.y;
int z=calNx;
       calNy=(CalN1->Top)/100;
     calNx=3;
     for(int i=calNy-1;i>=calNy-2;i--){
     int var=(point[i][calNx]->Top/100)*100;
      if(y_pos>var&&y_pos<var+100){

         CalN1->Top=point[i][z]->Top;
         CalN1->Left=point[i][z]->Left;
         AnsiString ClientMove=AnsiString(PionN1->Top)+AnsiString(PionN2->Top)+AnsiString(PionN3->Top)+AnsiString(PionN4->Top)+AnsiString(PionN5->Top)+AnsiString(PionN6->Top)+AnsiString(PionN7->Top)+AnsiString(PionN8->Top)+AnsiString(CastelN1->Top)+AnsiString(CastelN1->Left)+AnsiString(CastelN2->Top)+AnsiString(CastelN2->Left)+AnsiString(CalN1->Top)+AnsiString(CalN1->Left)+AnsiString(CalN2->Top)+AnsiString(CalN2->Left);
       ClientSocket1->Socket->SendText(ClientMove);
      }

       z--;

     }

        for(int i=0;i<8;i++)
   {
    for(int j=0;j<8;j++)
    {
      point[i][j]->Visible=false;
    }
    }
}

void __fastcall TForm1::CalN1Mov2(TObject *Sender){

TPoint p_rel_scr = Mouse->CursorPos;
TPoint p = Form1->ScreenToClient(p_rel_scr );
int x_pos = (int) p.x;
int y_pos = (int) p.y;
int z1=calNx1-2;
       calNy1=(CalA1->Top)/100;
     if(calNx1>=2){
     for(int i=calNy1-1;i>=calNy1-2;i--){
     int var=(point[i][calNx1]->Top/100)*100;
      if(y_pos>var&&y_pos<var+100){

         CalN1->Top=point[i][z1]->Top;
         CalN1->Left=point[i][z1]->Left;
         AnsiString ClientMove=AnsiString(PionN1->Top)+AnsiString(PionN2->Top)+AnsiString(PionN3->Top)+AnsiString(PionN4->Top)+AnsiString(PionN5->Top)+AnsiString(PionN6->Top)+AnsiString(PionN7->Top)+AnsiString(PionN8->Top)+AnsiString(CastelN1->Top)+AnsiString(CastelN1->Left)+AnsiString(CastelN2->Top)+AnsiString(CastelN2->Left)+AnsiString(CalN1->Top)+AnsiString(CalN1->Left)+AnsiString(CalN2->Top)+AnsiString(CalN2->Left);
       ClientSocket1->Socket->SendText(ClientMove);
      }

       z1++;

     }
     }
        for(int i=0;i<8;i++)
   {
    for(int j=0;j<8;j++)
    {
      point[i][j]->Visible=false;
    }
    }
}

void __fastcall TForm1::CalN1Mov3(TObject *Sender){

TPoint p_rel_scr = Mouse->CursorPos;
TPoint p = Form1->ScreenToClient(p_rel_scr );
int x_pos = (int) p.x;
int y_pos = (int) p.y;
 calNy2=(CalN1->Top)/100;
      calNx2=(CalN1->Left)/100;
      int z2=calNx2-1;
        if(calNy2<=5){
     for(int i=calNy2+2;i>calNy2;i--){
     int var=(point[i][calNx2]->Top/100)*100;
      if(y_pos>var&&y_pos<var+100){

         CalN1->Top=point[i][z2]->Top;
         CalN1->Left=point[i][z2]->Left;
         AnsiString ClientMove=AnsiString(PionN1->Top)+AnsiString(PionN2->Top)+AnsiString(PionN3->Top)+AnsiString(PionN4->Top)+AnsiString(PionN5->Top)+AnsiString(PionN6->Top)+AnsiString(PionN7->Top)+AnsiString(PionN8->Top)+AnsiString(CastelN1->Top)+AnsiString(CastelN1->Left)+AnsiString(CastelN2->Top)+AnsiString(CastelN2->Left)+AnsiString(CalN1->Top)+AnsiString(CalN1->Left)+AnsiString(CalN2->Top)+AnsiString(CalN2->Left);
       ClientSocket1->Socket->SendText(ClientMove);
      }

       z2--;

     }
     }

        for(int i=0;i<8;i++)
   {
    for(int j=0;j<8;j++)
    {
      point[i][j]->Visible=false;
    }
    }
}

void __fastcall TForm1::CalN1Mov4(TObject *Sender){

TPoint p_rel_scr = Mouse->CursorPos;
TPoint p = Form1->ScreenToClient(p_rel_scr );
int x_pos = (int) p.x;
int y_pos = (int) p.y;
int z3=calNx3+1;
       calNy3=(CalN1->Top)/100;
      if(calNy3<=5){
    for(int i=calNy3+2;i>calNy2;i--){
     int var=(point[i][z3]->Top/100)*100;
      if(y_pos>var&&y_pos<var+100){

         CalN1->Top=point[i][z3]->Top;
         CalN1->Left=point[i][z3]->Left;
         AnsiString ClientMove=AnsiString(PionN1->Top)+AnsiString(PionN2->Top)+AnsiString(PionN3->Top)+AnsiString(PionN4->Top)+AnsiString(PionN5->Top)+AnsiString(PionN6->Top)+AnsiString(PionN7->Top)+AnsiString(PionN8->Top)+AnsiString(CastelN1->Top)+AnsiString(CastelN1->Left)+AnsiString(CastelN2->Top)+AnsiString(CastelN2->Left)+AnsiString(CalN1->Top)+AnsiString(CalN1->Left)+AnsiString(CalN2->Top)+AnsiString(CalN2->Left);
       ClientSocket1->Socket->SendText(ClientMove);
      }

       z3++;

     }
     }
        for(int i=0;i<8;i++)
   {
    for(int j=0;j<8;j++)
    {
      point[i][j]->Visible=false;
    }
    }

}
//------------------------------------------------------------------------------

void __fastcall TForm1::CalN2Vizible(TObject *Sender)
{

     calNy4=(CalN2->Top)/100;
     calNx4=(CalN2->Left)/100;
     calNx4+=2;
     int z=calNx4;
     for(int i=calNy4-1;i>=calNy4-2;i--){
      point[i][z]->Visible=true;
      point[i][z]->OnClick=CalN2Mov;
      z--;
      }
      calNy5=(CalN2->Top)/100;
     calNx5=(CalN2->Left)/100;
     int z1=calNx5-2;


       for(int i=calNy5-1;i>=calNy5-2;i--){
        point[i][z1]->Visible=true;
        point[i][z1]->OnClick=CalN2Mov2;
        z1++;
       }

      calNy6=(CalN2->Top)/100;
      calNx6=(CalN2->Left)/100;
      int z2=calNx6-1;

      for(int i=calNy6+2;i>calNy6;i--){
      point[i][z2]->Visible=true;
      point[i][z2]->OnClick=CalN2Mov3;
      z2--;
      }
      calNy7=(CalN2->Top)/100;
      calNx7=(CalN2->Left)/100;
      int z3=calNx7+1;
      for(int i=calNy7+2;i>calNy7;i--){
      point[i][z3]->Visible=true;
      point[i][z3]->OnClick=CalN2Mov4;
      z3++;
      }


}

void __fastcall TForm1::CalN2Mov(TObject *Sender){

TPoint p_rel_scr = Mouse->CursorPos;
TPoint p = Form1->ScreenToClient(p_rel_scr );
int x_pos = (int) p.x;
int y_pos = (int) p.y;
int z=calNx4;
       calNy=(CalN2->Top)/100;
     calNx4=3;
     for(int i=calNy4-1;i>=calNy4-2;i--){
     int var=(point[i][calNx4]->Top/100)*100;
      if(y_pos>var&&y_pos<var+100){

         CalN2->Top=point[i][z]->Top;
         CalN2->Left=point[i][z]->Left;
         AnsiString ClientMove=AnsiString(PionN1->Top)+AnsiString(PionN2->Top)+AnsiString(PionN3->Top)+AnsiString(PionN4->Top)+AnsiString(PionN5->Top)+AnsiString(PionN6->Top)+AnsiString(PionN7->Top)+AnsiString(PionN8->Top)+AnsiString(CastelN1->Top)+AnsiString(CastelN1->Left)+AnsiString(CastelN2->Top)+AnsiString(CastelN2->Left)+AnsiString(CalN1->Top)+AnsiString(CalN1->Left)+AnsiString(CalN2->Top)+AnsiString(CalN2->Left);
       ClientSocket1->Socket->SendText(ClientMove);
      }

       z--;

     }

        for(int i=0;i<8;i++)
   {
    for(int j=0;j<8;j++)
    {
      point[i][j]->Visible=false;
    }
    }
}

void __fastcall TForm1::CalN2Mov2(TObject *Sender){

TPoint p_rel_scr = Mouse->CursorPos;
TPoint p = Form1->ScreenToClient(p_rel_scr );
int x_pos = (int) p.x;
int y_pos = (int) p.y;
int z1=calNx5-2;
       calNy5=(CalN2->Top)/100;
     if(calNx5>=2){
     for(int i=calNy5-1;i>=calNy5-2;i--){
     int var=(point[i][calNx5]->Top/100)*100;
      if(y_pos>var&&y_pos<var+100){

         CalN2->Top=point[i][z1]->Top;
         CalN2->Left=point[i][z1]->Left;
         AnsiString ClientMove=AnsiString(PionN1->Top)+AnsiString(PionN2->Top)+AnsiString(PionN3->Top)+AnsiString(PionN4->Top)+AnsiString(PionN5->Top)+AnsiString(PionN6->Top)+AnsiString(PionN7->Top)+AnsiString(PionN8->Top)+AnsiString(CastelN1->Top)+AnsiString(CastelN1->Left)+AnsiString(CastelN2->Top)+AnsiString(CastelN2->Left)+AnsiString(CalN1->Top)+AnsiString(CalN1->Left)+AnsiString(CalN2->Top)+AnsiString(CalN2->Left);
       ClientSocket1->Socket->SendText(ClientMove);
      }

       z1++;

     }
     }
        for(int i=0;i<8;i++)
   {
    for(int j=0;j<8;j++)
    {
      point[i][j]->Visible=false;
    }
    }
}

void __fastcall TForm1::CalN2Mov3(TObject *Sender){

TPoint p_rel_scr = Mouse->CursorPos;
TPoint p = Form1->ScreenToClient(p_rel_scr );
int x_pos = (int) p.x;
int y_pos = (int) p.y;
 calNy6=(CalN2->Top)/100;
      calNx2=(CalN2->Left)/100;
      int z2=calNx6-1;
        if(calNy6<=5){
     for(int i=calNy6+2;i>calNy6;i--){
     int var=(point[i][calNx6]->Top/100)*100;
      if(y_pos>var&&y_pos<var+100){

         CalN2->Top=point[i][z2]->Top;
         CalN2->Left=point[i][z2]->Left;
         AnsiString ClientMove=AnsiString(PionN1->Top)+AnsiString(PionN2->Top)+AnsiString(PionN3->Top)+AnsiString(PionN4->Top)+AnsiString(PionN5->Top)+AnsiString(PionN6->Top)+AnsiString(PionN7->Top)+AnsiString(PionN8->Top)+AnsiString(CastelN1->Top)+AnsiString(CastelN1->Left)+AnsiString(CastelN2->Top)+AnsiString(CastelN2->Left)+AnsiString(CalN1->Top)+AnsiString(CalN1->Left)+AnsiString(CalN2->Top)+AnsiString(CalN2->Left);
       ClientSocket1->Socket->SendText(ClientMove);
      }

       z2--;

     }
     }

        for(int i=0;i<8;i++)
   {
    for(int j=0;j<8;j++)
    {
      point[i][j]->Visible=false;
    }
    }
}

void __fastcall TForm1::CalN2Mov4(TObject *Sender){

TPoint p_rel_scr = Mouse->CursorPos;
TPoint p = Form1->ScreenToClient(p_rel_scr );
int x_pos = (int) p.x;
int y_pos = (int) p.y;
int z3=calNx7+1;
       calNy3=(CalN2->Top)/100;
      if(calNy7<=5){
    for(int i=calNy7+2;i>calNy7;i--){
     int var=(point[i][z3]->Top/100)*100;
      if(y_pos>var&&y_pos<var+100){

         CalN2->Top=point[i][z3]->Top;
         CalN2->Left=point[i][z3]->Left;
      }

       z3++;

     }
     }
        for(int i=0;i<8;i++)
   {
    for(int j=0;j<8;j++)
    {
      point[i][j]->Visible=false;
    }
    }

}
//------------------------------------------------------------------------------
void __fastcall TForm1::RegeN1Vizible(TObject *Sender){
    int var=(RegeN->Top)/100;
     int var1=(RegeN->Left)/100;
    if(var<8){
    for(int i=RegeNy;i<var+1;i++){


     for(int j=RegeNx;j<var1+2;j++){
       point[i][j]->Visible=true;
       point[i][j]->OnClick=RegeN1Mov;
     }
    }
}
}
void __fastcall TForm1::RegeN1Mov(TObject *Sender){
TPoint p_rel_scr = Mouse->CursorPos;
TPoint p = Form1->ScreenToClient(p_rel_scr );
int x_pos = (int) p.x;
int y_pos = (int) p.y;
int varpoz=(RegeN->Top)/100;
int varpoz1=(RegeN->Left)/100;
int RegeXsav=RegeNx;
 for(int i=RegeNy;i<varpoz+1;i++){
 for(int j=RegeNx;j<varpoz1+1;j++){
      int var=(point[i][j]->Top/100)*100;
       if(y_pos>var&&y_pos<var+100){
            RegeN->Top=point[i][j]->Top;
         RegeN->Left=point[i][j]->Left;
        }
       }
     }

     for(int i=0;i<8;i++)
   {
    for(int j=0;j<8;j++)
    {
      point[i][j]->Visible=false;
    }
    }

}

//---------------------------------------------------------------------------



















void __fastcall TForm1::ExitClick(TObject *Sender)
{
Form1->Close();
}
//---------------------------------------------------------------------------

