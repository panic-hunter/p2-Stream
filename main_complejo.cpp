#include<iostream>
#include "complejo.hpp"

using namespace umalcc;
using namespace std;

void leer(Complejo &c)
{
    cout<<"Escriba parte real ... //:"<<endl;
    cout<<"Escriba parte imaginaria ... //:"<<endl;
    umalcc::leer(c);
}

void sumar(const Complejo &c1, const Complejo &c2)
{
    Complejo resultado;
    umalcc::sumar(c1,c2,resultado);

}

int main()
{
    Complejo c1,c2;
    ::leer(c1);
    ::leer(c2);
    
    sumar(c1,c2);




    return 0;
}

 
