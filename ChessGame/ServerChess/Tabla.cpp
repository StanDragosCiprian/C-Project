//---------------------------------------------------------------------------


#pragma hdrstop

#include "Tabla.h"
#include "Axis.h"
//---------------------------------------------------------------------------
 #pragma package(smart_init)
Tabla::Tabla(){
int z0=0;
int z1=95;
 for(int i=0;i<8;i++)
 {
  this->tabla[i]=new Axis(72+z0,72+z0);
  z0+=z1;
 }
};
 

 int Tabla::getx(ix)
 {

    return tabla[ix]->x;
 }
   int Tabla::gety(iy)
 {

    return tabla[iy]->y;
 }

