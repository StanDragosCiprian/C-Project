//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Chess.h"
#include "Axis.h"
#include "Tabla.h"
#include <algorithm>
#include "Player1.h"
using namespace std;
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

   PionAy1=5;
  PionAy2=5;
  PionAy3=5;
  PionAy4=5;
  PionAy5=5;
  PionAy6=5;
  PionAy7=5;
  PionAy8=5;

   CastelAy=0;
   CastelAx=7;
    CastelAy2=7;
    CastelAx2=7;

    NebunY=5;
    NebunX=0;
    NebunY2=2;
    NebunX2=7;

     NebunY3=5;
    NebunX3=7;
    NebunY4=2;
    NebunX4=0;

     calAx=3;
     calAy=0;
     calAx1=3;
     calAy1=0;
      calAx2=3;
     calAy2=0;
     calAx3=3;
     calAy3=0;

      calA2x=3;
      calA2y=0;
      calA2x1=3;
      calA2y1=0;
      calA2x2=3;
      calA2y2=0;
      calA2x3=3;
      calA2y3=0;

     RegeAx=3;
     RegeAy=6;

    ReginAx=7;
     ReginAy=3;
     ReginAx2=7;
     ReginAy2=3;
     ReginAx3=0;
     ReginAy3=4;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender)
{
   Tabla *tab=new Tabla();
//Pionii
PionA1->Top=tab->gety(6);
PionA1->Left=tab->getx(0);
PionA1->OnClick=PionA1Visual;

PionA2->Top=tab->gety(6);
PionA2->Left=tab->getx(1);
PionA2->OnClick=PionA2Visual;

PionA3->Top=tab->gety(6);
PionA3->Left=tab->getx(2);
PionA3->OnClick=PionA3Visual;

PionA4->Top=tab->gety(6);
PionA4->Left=tab->getx(3);
PionA4->OnClick=PionA4Visual;

PionA5->Top=tab->gety(6);
PionA5->Left=tab->getx(4);
PionA5->OnClick=PionA5Visual;

PionA6->Top=tab->gety(6);
PionA6->Left=tab->getx(5);
PionA6->OnClick=PionA6Visual;

PionA7->Top=tab->gety(6);
PionA7->Left=tab->getx(6);
PionA7->OnClick=PionA7Visual;

PionA8->Top=tab->gety(6);
PionA8->Left=tab->getx(7);
PionA8->OnClick=PionA8Visual;

CastelA1->Top=tab->gety(7);
CastelA1->Left=tab->getx(0);
CastelA1->OnClick=CastelA1Mov;

CastelA2->Top=tab->gety(7);
CastelA2->Left=tab->getx(7);
CastelA2->OnClick=CastelA2Mov;

NebunA1->Top=tab->gety(7);
NebunA1->Left=tab->getx(2);
NebunA1->OnClick=NebunA1Vizible;

NebunA2->Top=tab->gety(7);
NebunA2->Left=tab->getx(5);
NebunA2->OnClick=NebunA2Vizible;

CalA1->Top=tab->gety(7);
CalA1->Left=tab->getx(1);
CalA1->OnClick=CalA1Vizible;
CalA2->Top=tab->gety(7);
CalA2->Left=tab->getx(6);
CalA2->OnClick=CalA2Vizible;


Rege->Top=tab->gety(7);
Rege->Left=tab->gety(4);
Rege->OnClick=RegeA1Vizible;

ReginaA->Top=tab->gety(7);
ReginaA->Left=tab->getx(3);
ReginaA->OnClick=ReginA1Mov1;

//---------------------------------------------------------------------------

}

void __fastcall TForm1::PionA1Visual(TObject *Sender)
{
  int savepoinA=PionAy1;
  int poz=(PionA1->Top)/100;

for(int i=savepoinA;i>=poz-2;i--)
{
      point[i][0]->Visible=true;
      point[poz][0]->Visible=false;
      point[i][0]->OnClick=PionA1Mov;
  }
}
void __fastcall TForm1::PionA1Mov(TObject *Sender)
{

TPoint p_rel_scr = Mouse->CursorPos;
TPoint p = Form1->ScreenToClient(p_rel_scr );
int x_pos = (int) p.x;
int y_pos = (int) p.y;
 int savepoinA=PionAy1;
  int poz=(PionA1->Top)/100;
for(int i=savepoinA;i>=poz-2;i--)
{
int var=(point[i][0]->Top/100)*100;
if(y_pos>var&&y_pos<var+100)
{
PionAy1=i;
       PionA1->Top=point[i][0]->Top;
       
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
void __fastcall TForm1::PionA2Visual(TObject *Sender)
{
  int savepoinA=PionAy2;
  int poz=(PionA2->Top)/100;

for(int i=savepoinA;i>=poz-2;i--)
{
      point[i][1]->Visible=true;
      point[poz][1]->Visible=false;
      point[i][1]->OnClick=PionA2Mov;
  }
}
void __fastcall TForm1::PionA2Mov(TObject *Sender)
{

TPoint p_rel_scr = Mouse->CursorPos;
TPoint p = Form1->ScreenToClient(p_rel_scr );
int x_pos = (int) p.x;
int y_pos = (int) p.y;
 int savepoinA=PionAy2;
  int poz=(PionA2->Top)/100;
for(int i=savepoinA;i>=poz-2;i--)
{
int var=(point[i][1]->Top/100)*100;
if(y_pos>var&&y_pos<var+100)
{
PionAy2=i;
       PionA2->Top=point[i][1]->Top;
  }
 }
 ServerSocket1->Tag=2;
for(int i=0;i<8;i++)
   {

    for(int j=0;j<8;j++)
    {
      point[i][j]->Visible=false;
    }

    }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::PionA3Visual(TObject *Sender)
{
  int savepoinA=PionAy3;
  int poz=(PionA3->Top)/100;

for(int i=savepoinA;i>=poz-2;i--)
{
      point[i][2]->Visible=true;
      point[poz][2]->Visible=false;
      point[i][2]->OnClick=PionA3Mov;
  }
}
void __fastcall TForm1::PionA3Mov(TObject *Sender)
{

TPoint p_rel_scr = Mouse->CursorPos;
TPoint p = Form1->ScreenToClient(p_rel_scr );
int x_pos = (int) p.x;
int y_pos = (int) p.y;
 int savepoinA=PionAy3;
  int poz=(PionA3->Top)/100;
for(int i=savepoinA;i>=poz-2;i--)
{
int var=(point[i][2]->Top/100)*100;
if(y_pos>var&&y_pos<var+100)
{
PionAy3=i;
       PionA3->Top=point[i][2]->Top;
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
void __fastcall TForm1::PionA4Visual(TObject *Sender)
{
  int savepoinA=PionAy4;
  int poz=(PionA4->Top)/100;

for(int i=savepoinA;i>=poz-2;i--)
{
      point[i][3]->Visible=true;
      point[poz][3]->Visible=false;
      point[i][3]->OnClick=PionA4Mov;
  }
}
void __fastcall TForm1::PionA4Mov(TObject *Sender)
{

TPoint p_rel_scr = Mouse->CursorPos;
TPoint p = Form1->ScreenToClient(p_rel_scr );
int x_pos = (int) p.x;
int y_pos = (int) p.y;
 int savepoinA=PionAy4;
  int poz=(PionA1->Top)/100;
for(int i=savepoinA;i>=poz-2;i--)
{
int var=(point[i][3]->Top/100)*100;
if(y_pos>var&&y_pos<var+100)
{
PionAy4=i;
       PionA4->Top=point[i][3]->Top;
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
void __fastcall TForm1::PionA5Visual(TObject *Sender)
{
  int savepoinA=PionAy5;
  int poz=(PionA5->Top)/100;

for(int i=savepoinA;i>=poz-2;i--)
{
      point[i][4]->Visible=true;
      point[poz][4]->Visible=false;
      point[i][4]->OnClick=PionA5Mov;
  }
}
void __fastcall TForm1::PionA5Mov(TObject *Sender)
{

TPoint p_rel_scr = Mouse->CursorPos;
TPoint p = Form1->ScreenToClient(p_rel_scr );
int x_pos = (int) p.x;
int y_pos = (int) p.y;
 int savepoinA=PionAy5;
  int poz=(PionA5->Top)/100;
for(int i=savepoinA;i>=poz-2;i--)
{
int var=(point[i][4]->Top/100)*100;
if(y_pos>var&&y_pos<var+100)
{
PionAy5=i;
       PionA5->Top=point[i][4]->Top;
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
void __fastcall TForm1::PionA6Visual(TObject *Sender)
{
  int savepoinA=PionAy6;
  int poz=(PionA6->Top)/100;

for(int i=savepoinA;i>=poz-2;i--)
{
      point[i][5]->Visible=true;
      point[poz][5]->Visible=false;
      point[i][5]->OnClick=PionA6Mov;
  }
}
void __fastcall TForm1::PionA6Mov(TObject *Sender)
{

TPoint p_rel_scr = Mouse->CursorPos;
TPoint p = Form1->ScreenToClient(p_rel_scr );
int x_pos = (int) p.x;
int y_pos = (int) p.y;
 int savepoinA=PionAy6;
  int poz=(PionA6->Top)/100;
for(int i=savepoinA;i>=poz-2;i--)
{
int var=(point[i][5]->Top/100)*100;
if(y_pos>var&&y_pos<var+100)
{
PionAy6=i;
       PionA6->Top=point[i][5]->Top;
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
void __fastcall TForm1::PionA7Visual(TObject *Sender)
{
  int savepoinA=PionAy7;
  int poz=(PionA7->Top)/100;

for(int i=savepoinA;i>=poz-2;i--)
{
      point[i][6]->Visible=true;
      point[poz][6]->Visible=false;
      point[i][6]->OnClick=PionA7Mov;
  }
}
void __fastcall TForm1::PionA7Mov(TObject *Sender)
{

TPoint p_rel_scr = Mouse->CursorPos;
TPoint p = Form1->ScreenToClient(p_rel_scr );
int x_pos = (int) p.x;
int y_pos = (int) p.y;
 int savepoinA=PionAy1;
  int poz=(PionN7->Top)/100;
for(int i=savepoinA;i>=poz-2;i--)
{
int var=(point[i][6]->Top/100)*100;
if(y_pos>var&&y_pos<var+100)
{
PionAy7=i;
       PionA7->Top=point[i][6]->Top;
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
void __fastcall TForm1::PionA8Visual(TObject *Sender)
{
  int savepoinA=PionAy8;
  int poz=(PionN8->Top)/100;

for(int i=savepoinA;i>=poz-2;i--)
{
      point[i][7]->Visible=true;
      point[poz][7]->Visible=false;
      point[i][7]->OnClick=PionA8Mov;
  }
}
void __fastcall TForm1::PionA8Mov(TObject *Sender)
{

TPoint p_rel_scr = Mouse->CursorPos;
TPoint p = Form1->ScreenToClient(p_rel_scr );
int x_pos = (int) p.x;
int y_pos = (int) p.y;
 int savepoinA=PionAy1;
  int poz=(PionA8->Top)/100;
for(int i=savepoinA;i>=poz-2;i--)
{
int var=(point[i][7]->Top/100)*100;
if(y_pos>var&&y_pos<var+100)
{
PionAy8=i;
       PionA8->Top=point[i][7]->Top;
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
void __fastcall TForm1::CastelA1Mov(TObject *Sender)
{
    for(int i=7;i>=0;i--)
{
      point[i][CastelAy]->Visible=true;
      point[i][CastelAy]->OnClick=CastelA1Mov2;
}
   for(int i=7;i>=0;i--)
   {
      point[CastelAx][i]->Visible=true;
      point[CastelAx][i]->OnClick=CastelA1Mov3;
   }

}
void __fastcall TForm1::CastelA1Mov2(TObject *Sender)
{
  TPoint p_rel_scr = Mouse->CursorPos;
TPoint p = Form1->ScreenToClient(p_rel_scr );
int x_pos = (int) p.x;
int y_pos = (int) p.y;
for(int i=7;i>=0;i--)
{
int var=(point[i][CastelAy]->Top/100)*100;
if(y_pos>var&&y_pos<var+100)
{
      CastelAx=i;
      CastelA1->Top=point[CastelAx][CastelAy]->Top;
     CastelA1->Left=point[CastelAx][CastelAy]->Left;
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

void __fastcall TForm1::CastelA1Mov3(TObject *Sender)
{
   TPoint p_rel_scr = Mouse->CursorPos;
TPoint p = Form1->ScreenToClient(p_rel_scr );
int x_pos = (int) p.x;
int y_pos = (int) p.y;
for(int i=7;i>=0;i--)
{
int var=(point[i][CastelAx]->Top/100)*100;
if(x_pos>var&&x_pos<var+100)
{
      CastelAy=i;
      CastelA1->Top=point[CastelAx][CastelAy]->Top;
     CastelA1->Left=point[CastelAx][CastelAy]->Left;
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
void __fastcall TForm1::CastelA2Mov(TObject *Sender)
{
    for(int i=7;i>=0;i--)
{
      point[i][CastelAy2]->Visible=true;
      point[i][CastelAy2]->OnClick=CastelA2Mov2;
}
   for(int i=7;i>=0;i--)
   {
      point[CastelAx2][i]->Visible=true;
      point[CastelAx2][i]->OnClick=CastelA2Mov3;
   }

}
void __fastcall TForm1::CastelA2Mov2(TObject *Sender)
{
  TPoint p_rel_scr = Mouse->CursorPos;
TPoint p = Form1->ScreenToClient(p_rel_scr );
int x_pos = (int) p.x;
int y_pos = (int) p.y;
for(int i=7;i>=0;i--)
{
int var=(point[i][CastelAy2]->Top/100)*100;
if(y_pos>var&&y_pos<var+100)
{
      CastelAx2=i;
       CastelA2->Top=point[CastelAx2][CastelAy2]->Top;
     CastelA2->Left=point[CastelAx2][CastelAy2]->Left;
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
void __fastcall TForm1::PointCastelA2AMov(TObject *Sender)
{


}
void __fastcall TForm1::CastelA2Mov3(TObject *Sender)
{
   TPoint p_rel_scr = Mouse->CursorPos;
TPoint p = Form1->ScreenToClient(p_rel_scr );
int x_pos = (int) p.x;
int y_pos = (int) p.y;
for(int i=7;i>=0;i--)
{
int var=(point[i][CastelAx2]->Top/100)*100;
if(x_pos>var&&x_pos<var+100)
{
      CastelAy2=i;
       CastelA2->Top=point[CastelAx2][CastelAy2]->Top;
     CastelA2->Left=point[CastelAx2][CastelAy2]->Left;
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
void __fastcall TForm1::NebunA1Vizible(TObject *Sender)
{

    int nebx=NebunX;
    int var=(NebunA1->Top)/100;
for(int i=NebunY;i<var;i++){
    point[i][nebx]->Visible=true;
    point[i][nebx]->OnClick=NebunA1Mov;
    nebx++;
}
int nebx2=NebunX2;
for(int i=NebunY2;i<var;i++){
    point[i][nebx2]->Visible=true;
    point[i][nebx2]->OnClick=NebunA1Mov2;
    nebx2--;

}

}
void __fastcall TForm1::NebunA1Mov(TObject *Sender)
{
   
TPoint p_rel_scr = Mouse->CursorPos;
TPoint p = Form1->ScreenToClient(p_rel_scr );
int x_pos = (int) p.x;
int y_pos = (int) p.y;
int nebpoz=(NebunA1->Top)/100;
int nebpozx=(NebunA1->Left)/100;
int z=NebunX;
int ct=0;
int nebpozoldZ=NebunY2;
for(int i=NebunY;i<=nebpoz;i++){
int var=(point[i][z]->Top/100)*100;
int pointzon=(point[i][z]->Top)/100;
if(y_pos>var&&y_pos<var+100)
{
  NebunA1->Top=point[i][z]->Top;
    NebunA1->Left=point[i][z]->Left;


    //NebunY2=2;
   // NebunX2=7;
    //NebunY=5;
    //NebunX=0;

     NebunY2=0;
     NebunX2=7;
     if(i!=6)
     {
     NebunX2=i;
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
void __fastcall TForm1::NebunA1Mov2(TObject *Sender)
{
TPoint p_rel_scr = Mouse->CursorPos;
TPoint p = Form1->ScreenToClient(p_rel_scr );
int x_pos = (int) p.x;
int y_pos = (int) p.y;

int nebpoz=(NebunA1->Top)/100;
int z=NebunX2;
for(int i=NebunY2;i<=nebpoz;i++){
int var=(point[i][z]->Top/100)*100;
if(y_pos>var&&y_pos<var+100)
{
  NebunA1->Top=point[i][z]->Top;
  NebunA1->Left=point[i][z]->Left;
  if((NebunY<8)&&(NebunY>=0)){
  NebunY=i-z;
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
void __fastcall TForm1::PointNebunA1AMov2(TObject *Sender)
{

}

//--------------------------------------------------------------------------

void __fastcall TForm1::CalA1Vizible(TObject *Sender)
{

     calAy=(CalA1->Top)/100;
     calAx=(CalA1->Left)/100;
     calAx+=2;
     int z=calAx;
     for(int i=calAy-1;i>=calAy-2;i--){
      point[i][z]->Visible=true;
      point[i][z]->OnClick=CalA1Mov;
      z--;
      }
      calAy1=(CalA1->Top)/100;
     calAx1=(CalA1->Left)/100;
     int z1=calAx1-2;

      if(calAx1>=2){
       for(int i=calAy1-1;i>=calAy1-2;i--){
        point[i][z1]->Visible=true;
        point[i][z1]->OnClick=CalA1Mov2;
        z1++;
       }
      }
      calAy2=(CalA1->Top)/100;
      calAx2=(CalA1->Left)/100;
      int z2=calAx2-1;
      if(calAy2<=5){
      for(int i=calAy2+2;i>calAy2;i--){
      point[i][z2]->Visible=true;
      point[i][z2]->OnClick=CalA1Mov3;
      z2--;
      }
      }
      calAy3=(CalA1->Top)/100;
      calAx3=(CalA1->Left)/100;
      int z3=calAx2+1;
      if(calAy3<=5){
      for(int i=calAy2+2;i>calAy2;i--){
      point[i][z3]->Visible=true;
      point[i][z3]->OnClick=CalA1Mov4;
      z3++;
      }
      }


}

void __fastcall TForm1::CalA1Mov(TObject *Sender){

TPoint p_rel_scr = Mouse->CursorPos;
TPoint p = Form1->ScreenToClient(p_rel_scr );
int x_pos = (int) p.x;
int y_pos = (int) p.y;
int z=calAx;
       calAy=(CalA1->Top)/100;
     calAx=3;
     for(int i=calAy-1;i>=calAy-2;i--){
     int var=(point[i][calAx]->Top/100)*100;
      if(y_pos>var&&y_pos<var+100){

         CalA1->Top=point[i][z]->Top;
         CalA1->Left=point[i][z]->Left;
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

void __fastcall TForm1::CalA1Mov2(TObject *Sender){

TPoint p_rel_scr = Mouse->CursorPos;
TPoint p = Form1->ScreenToClient(p_rel_scr );
int x_pos = (int) p.x;
int y_pos = (int) p.y;
int z1=calAx1-2;
       calAy1=(CalA1->Top)/100;
     if(calAx1>=2){
     for(int i=calAy1-1;i>=calAy1-2;i--){
     int var=(point[i][calAx1]->Top/100)*100;
      if(y_pos>var&&y_pos<var+100){

         CalA1->Top=point[i][z1]->Top;
         CalA1->Left=point[i][z1]->Left;
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

void __fastcall TForm1::CalA1Mov3(TObject *Sender){

TPoint p_rel_scr = Mouse->CursorPos;
TPoint p = Form1->ScreenToClient(p_rel_scr );
int x_pos = (int) p.x;
int y_pos = (int) p.y;
 calAy2=(CalA1->Top)/100;
      calAx2=(CalA1->Left)/100;
      int z2=calAx2-1;
        if(calAy2<=5){
     for(int i=calAy2+2;i>calAy2;i--){
     int var=(point[i][calAx2]->Top/100)*100;
      if(y_pos>var&&y_pos<var+100){

         CalA1->Top=point[i][z2]->Top;
         CalA1->Left=point[i][z2]->Left;
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

void __fastcall TForm1::CalA1Mov4(TObject *Sender){

TPoint p_rel_scr = Mouse->CursorPos;
TPoint p = Form1->ScreenToClient(p_rel_scr );
int x_pos = (int) p.x;
int y_pos = (int) p.y;
int z3=calAx3+1;
       calAy3=(CalA1->Top)/100;
      if(calAy3<=5){
    for(int i=calAy3+2;i>calAy2;i--){
     int var=(point[i][z3]->Top/100)*100;
      if(y_pos>var&&y_pos<var+100){

         CalA1->Top=point[i][z3]->Top;
         CalA1->Left=point[i][z3]->Left;
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

void __fastcall TForm1::CalA2Vizible(TObject *Sender)
{

     calA2y=(CalA2->Top)/100;
     calA2x=(CalA2->Left)/100;
     calA2x+=2;

     int z=calA2x;
     if(calA2x<6){
     for(int i=calA2y-1;i>=calA2y-2;i--){
      point[i][z]->Visible=true;
      point[i][z]->OnClick=CalA2Mov;
      z--;
      }
      }
      calA2y1=(CalA2->Top)/100;
     calA2x1=(CalA2->Left)/100;
     int z1=calA2x1-2;

      if(calA2x1>=2){
       for(int i=calA2y1-1;i>=calA2y1-2;i--){
        point[i][z1]->Visible=true;
        point[i][z1]->OnClick=CalA2Mov2;
        z1++;
       }
      }
      calA2y2=(CalA2->Top)/100;
      calA2x2=(CalA2->Left)/100;
      int z2=calA2x2-1;
      if(calA2y2<=5){
      for(int i=calA2y2+2;i>calA2y2;i--){
      point[i][z2]->Visible=true;
      point[i][z2]->OnClick=CalA2Mov3;
      z2--;
      }
      }
      calA2y3=(CalA2->Top)/100;
      calA2x3=(CalA2->Left)/100;
      int z3=calA2x2+1;
      if(calA2y3<=5){
      for(int i=calA2y2+2;i>calA2y2;i--){
      point[i][z3]->Visible=true;
      point[i][z3]->OnClick=CalA2Mov4;
      z3++;
      }
      }


}

void __fastcall TForm1::CalA2Mov(TObject *Sender){

TPoint p_rel_scr = Mouse->CursorPos;
TPoint p = Form1->ScreenToClient(p_rel_scr );
int x_pos = (int) p.x;
int y_pos = (int) p.y;
int z=calA2x;
       calA2y=(CalA2->Top)/100;
     calA2x=3;
     for(int i=calAy-1;i>=calAy-2;i--){
     int var=(point[i][calA2x]->Top/100)*100;
      if(y_pos>var&&y_pos<var+100){

         CalA2->Top=point[i][z]->Top;
         CalA2->Left=point[i][z]->Left;
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

void __fastcall TForm1::CalA2Mov2(TObject *Sender){

TPoint p_rel_scr = Mouse->CursorPos;
TPoint p = Form1->ScreenToClient(p_rel_scr );
int x_pos = (int) p.x;
int y_pos = (int) p.y;
int z1=calA2x1-2;
       calA2y1=(CalA2->Top)/100;
     if(calA2x1>=2){
     for(int i=calA2y1-1;i>=calA2y1-2;i--){
     int var=(point[i][calA2x1]->Top/100)*100;
      if(y_pos>var&&y_pos<var+100){

         CalA2->Top=point[i][z1]->Top;
         CalA2->Left=point[i][z1]->Left;
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

void __fastcall TForm1::CalA2Mov3(TObject *Sender){

TPoint p_rel_scr = Mouse->CursorPos;
TPoint p = Form1->ScreenToClient(p_rel_scr );
int x_pos = (int) p.x;
int y_pos = (int) p.y;
 calA2y2=(CalA2->Top)/100;
      calA2x2=(CalA2->Left)/100;
      int z2=calA2x2-1;
        if(calA2y2<=5){
     for(int i=calA2y2+2;i>calA2y2;i--){
     int var=(point[i][calA2x2]->Top/100)*100;
      if(y_pos>var&&y_pos<var+100){

         CalA2->Top=point[i][z2]->Top;
         CalA2->Left=point[i][z2]->Left;
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

void __fastcall TForm1::CalA2Mov4(TObject *Sender){

TPoint p_rel_scr = Mouse->CursorPos;
TPoint p = Form1->ScreenToClient(p_rel_scr );
int x_pos = (int) p.x;
int y_pos = (int) p.y;
int z3=calAx3+1;
       calA2y3=(CalA1->Top)/100;
      if(calA2y3<=5){
    for(int i=calA2y3+2;i>calA2y2;i--){
     int var=(point[i][z3]->Top/100)*100;
      if(y_pos>var&&y_pos<var+100){

         CalA2->Top=point[i][z3]->Top;
         CalA2->Left=point[i][z3]->Left;
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
void __fastcall TForm1::RegeA1Vizible(TObject *Sender){
    int var=(Rege->Top)/100;
     int var1=(Rege->Left)/100;
    if(var<8){
    for(int i=RegeAy;i<var+1;i++){


     for(int j=RegeAx;j<var1+2;j++){
       point[i][j]->Visible=true;
       point[i][j]->OnClick=RegeA1Mov;
     }
    }
}
}
void __fastcall TForm1::RegeA1Mov(TObject *Sender){
TPoint p_rel_scr = Mouse->CursorPos;
TPoint p = Form1->ScreenToClient(p_rel_scr );
int x_pos = (int) p.x;
int y_pos = (int) p.y;
int varpoz=(Rege->Top)/100;
int varpoz1=(Rege->Left)/100;
int RegeXsav=RegeAx;
 for(int i=RegeAy;i<varpoz+1;i++){
 for(int j=RegeAx;j<varpoz1+1;j++){
      int var=(point[i][j]->Top/100)*100;

       if(y_pos>var&&y_pos<var+100){
            Rege->Top=point[i][j]->Top;
         Rege->Left=point[i][j]->Left;
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


void __fastcall TForm1::ServerSocket1Accept(TObject *Sender,
      TCustomWinSocket *Socket)
{
    for(int i=0;i<ServerSocket1->Socket->ActiveConnections;i++){
ServerSocket1->Socket->Connections[i]->SendText("Mesaj");
}
}
//---------------------------------------------------------------------------








void __fastcall TForm1::NebunA2Vizible(TObject *Sender)
{

    int nebx=NebunX3;
    int var=(NebunA2->Top)/100;
for(int i=NebunY3;i<var;i++){
    point[i][nebx]->Visible=true;
    point[i][nebx]->OnClick=NebunA2Mov;
    nebx--;
}
int nebx2=NebunX4;
for(int i=NebunY4;i<var;i++){
    point[i][nebx2]->Visible=true;
    point[i][nebx2]->OnClick=NebunA2Mov2;
    nebx2++;

}

}
void __fastcall TForm1::NebunA2Mov(TObject *Sender)
{

TPoint p_rel_scr = Mouse->CursorPos;
TPoint p = Form1->ScreenToClient(p_rel_scr );
int x_pos = (int) p.x;
int y_pos = (int) p.y;
int nebpoz=(NebunA2->Top)/100;
int nebpozx=(NebunA2->Left)/100;
int z=NebunX3;
int ct=0;
int nebpozoldZ=NebunY4;
for(int i=NebunY;i<=nebpoz;i++){
int var=(point[i][z]->Top/100)*100;
int pointzon=(point[i][z]->Top)/100;
if(y_pos>var&&y_pos<var+100)
{
  NebunA2->Top=point[i][z]->Top;
    NebunA2->Left=point[i][z]->Left;


    //NebunY2=2;
   // NebunX2=7;
    //NebunY=5;
    //NebunX=0;

     NebunY4=0;
     NebunX4=7;
     if(i!=6)
     {
     NebunX4=i;
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
 }
void __fastcall TForm1::NebunA2Mov2(TObject *Sender)
{
TPoint p_rel_scr = Mouse->CursorPos;
TPoint p = Form1->ScreenToClient(p_rel_scr );
int x_pos = (int) p.x;
int y_pos = (int) p.y;

int nebpoz=(NebunA2->Top)/100;
int z=NebunX4;
for(int i=NebunY4;i<=nebpoz;i++){
int var=(point[i][z]->Top/100)*100;
if(y_pos>var&&y_pos<var+100)
{
  NebunA2->Top=point[i][z]->Top;
  NebunA2->Left=point[i][z]->Left;
  if((NebunY3<8)&&(NebunY3>=0)){
  NebunY3=i-z;
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

 for(int i=0;i<8;i++){
 for(int j=0;j<8;j++)
    {
      point[i][j]->Visible=false;
    }
    }
}

//---------------------------------------------------------------------------

void __fastcall TForm1::ReginA1Mov1(TObject *Sender)
{
    for(int i=7;i>=0;i--)
{
      point[i][ReginAy]->Visible=true;
      point[i][ReginAy]->OnClick=ReginA1Mov2;
}
   for(int i=7;i>=0;i--)
   {
      point[ReginAx][i]->Visible=true;
      point[ReginAx][i]->OnClick=ReginA1Mov3;
   }

   int regx=ReginAx2;
    int var=(ReginaA->Top)/100;
for(int i=ReginAy2;i<var;i++){
    point[i][regx]->Visible=true;
    point[i][regx]->OnClick=NebunA2Mov;
    regx--;
}
int regx2=ReginAx3;
for(int i=ReginAy3;i<var;i++){
    point[i][regx2]->Visible=true;
    point[i][regx2]->OnClick=NebunA2Mov2;
    regx2++;

}

}
void __fastcall TForm1::ReginA1Mov2(TObject *Sender)
{
  TPoint p_rel_scr = Mouse->CursorPos;
TPoint p = Form1->ScreenToClient(p_rel_scr );
int x_pos = (int) p.x;
int y_pos = (int) p.y;
for(int i=7;i>=0;i--)
{
int var=(point[i][ReginAy]->Top/100)*100;
if(y_pos>var&&y_pos<var+100)
{
      ReginAx=i;
      ReginaA->Top=point[ReginAx][ReginAy]->Top;
     ReginaA->Left=point[ReginAx][ReginAy]->Left;
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

void __fastcall TForm1::ReginA1Mov3(TObject *Sender)
{
   TPoint p_rel_scr = Mouse->CursorPos;
TPoint p = Form1->ScreenToClient(p_rel_scr );
int x_pos = (int) p.x;
int y_pos = (int) p.y;
for(int i=7;i>=0;i--)
{
int var=(point[i][ReginAx]->Top/100)*100;
if(x_pos>var&&x_pos<var+100)
{
      ReginAy=i;
      ReginaA->Top=point[ReginAx][ReginAy]->Top;
     ReginaA->Left=point[ReginAx][ReginAy]->Left;
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



void __fastcall TForm1::ServerSocket1ClientRead(TObject *Sender,
      TCustomWinSocket *Socket)
{
 AnsiString x=Socket->ReceiveText();

PionN1->Top=x.SubString(1,3).ToInt();
PionN2->Top=x.SubString(4,3).ToInt();
PionN3->Top=x.SubString(7,3).ToInt();
PionN4->Top=x.SubString(10,3).ToInt();
PionN5->Top=x.SubString(13,3).ToInt();
PionN6->Top=x.SubString(16,3).ToInt();
PionN7->Top=x.SubString(19,3).ToInt();
PionN8->Top=x.SubString(22,3).ToInt();
}
//---------------------------------------------------------------------------



