
#ifndef TablaH
#define TablaH
#include "Axis.h"
//---------------------------------------------------------------------------
class Tabla:public Axis
{
  protected:
  Axis *tabla[8];
  public:
  Tabla();
  int getx(int ix);
  int gety(int iy);
};
#endif
