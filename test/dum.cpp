#include "psi4/libmints/molecule.h"
#include "psi4/libmints/extern.h"

extern "C"
int main(){
   double zz=1.2;
   double x=2.9;
   double y=-0.3;
   double z=9.2;
//   psi::outfile="abc";
   std::shared_ptr<psi::Molecule> molecule_;
   psi::Molecule mol;
   mol.set_name("_abcdefg_");
   mol.init_with_xyz("acet.xyz");
   printf("%s\n",mol.name().c_str());
   psi::ExternalPotential xx;
   xx.addCharge(zz,x, y,z);
   xx.print("wys");
   mol.save_xyz_file("aaa",false);
   printf("%s",mol.save_string_xyz().c_str());
   return 0;
 }
