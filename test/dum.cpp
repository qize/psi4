#include "psi4/libmints/extern.h"

//namespace psi;

int main(){
   double zz=1.2;
   double x=2.9;
   double y=-0.3;
   double z=9.2;
   psi::ExternalPotential xx;
   xx.addCharge(zz,x, y,z);
//   xx.print();
   return 0;
 }
