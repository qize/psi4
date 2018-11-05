import sys
import psi4

if __name__ == '__main__':
    mol=psi4.geometry('''
    C         -0.76230        0.22700       -0.07470
    C          0.73620        0.28810       -0.09490
    O          1.33940       -0.85880        0.28280
    O          1.36580        1.28240       -0.42230
    H         -1.12350       -0.75290        0.24790
    H         -1.14180        0.41640       -1.08200
    H         -1.14180        0.97780        0.62300
    H          0.72780       -1.58000        0.52020
    '''
    )
# Define a TIP3P water as the external potential
    psi4.core.set_output_file('acet.out')
    Chrgfield = psi4.QMMM()
    Chrgfield.extern.addCharge(-0.834,1.649232019048,0.0,-2.356023604706)
    Chrgfield.extern.addCharge(0.417,0.544757019107,0.0,-3.799961446760)
    Chrgfield.extern.addCharge(0.417,0.544757019107,0.0,-0.912085762652)
    Chrgfield.extern.print_out()
    psi4.core.set_global_option_python('EXTERN', Chrgfield.extern)
    psi4.gradient('scf/3-21G')
