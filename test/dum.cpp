#include "psi4/libpsi4util/PsiOutStream.h"
#include "psi4/libmints/molecule.h"
#include "psi4/libmints/extern.h"

//namespace psi{}

int main(){
   double zz=1.2;
   double x=2.9;
   double y=-0.3;
   double z=9.2;
   psi::Molecule mol;
   mol.set_name("_abcdefg_");
   printf("%s\n",mol.name().c_str());
   psi::ExternalPotential xx;
   xx.addCharge(zz,x, y,z);
   xx.addCharge(zz,x, y,z);
   xx.addCharge(zz,x, y,z);
   xx.addCharge(zz,x, y,z);
   xx.print("wys");
   return 0;
 }
