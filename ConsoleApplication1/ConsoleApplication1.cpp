#include <iostream>
#include"vecteur3D.h"

using namespace Geom;
using namespace std;


int main()
{
    //vecteur v1(1, 2, 3);

    vecteur<int>*T =new vecteur<int>(1, 2, 3);
    T->print();
    
    /*v1.print();
    v1[1] = 8;
    v1.print();*/
    
}
