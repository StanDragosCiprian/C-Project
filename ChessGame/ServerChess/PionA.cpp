//---------------------------------------------------------------------------


#pragma hdrstop

#include "PionA.h"

//---------------------------------------------------------------------------

#pragma package(smart_init)

 PionA::PionA()
{
 pionA=new TImage(Form1);
   pionA->Parent=Form1;
   Graphics::TBitmap * bmpPicture = new Graphics::TBitmap;
     bmpPicture->LoadFromFile("C:\\fisiere\\Proiect\\Chess\\Imagini\\PionA.bmp");
    pionA->Picture->Graphic=bmpPicture;
    pionA->Visible=true;
 pionA->Transparent=true;
}
void PionA::position(int x,int y)
{

 pionA->Left=x;
 pionA->Top=y;

}