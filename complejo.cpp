#include "complejo.hpp"
#include<iostream>

using namespace umalcc; using namespace std;

namespace
{
    // inline--> cada vez que se encuentre la llamada sq sustituye la llamada, por el cuerpo. (x*x)
    // abs --> valor absoluto
    inline double sq(double x)
    {
        return x*x;
    }
    inline double abs(double x)
    {
        if(x<0)
        {
            x=-x;
        }
        return x;
    }
    inline bool igual(double x, double y)
    {
        return abs(x-y)<1e-6;
    }
}

namespace umalcc
{
    void sumar(const Complejo &x, const Complejo &y, Complejo &resultado)
    {
        resultado.real=x.real+y.real;
        resultado.imaginario=x.imaginario+y.imaginario;
    }
    void restar(const Complejo &x, const Complejo &y, Complejo &resultado)
    {
        resultado.real=x.real-y.real;
        resultado.imaginario=x.imaginario-y.imaginario;
    }
    void multiplicar(const Complejo &x, const Complejo &y, Complejo &resultado)
    {
        resultado.real=(x.real*y.real) - (x.imaginario*y.imaginario);
        resultado.imaginario=(x.real*y.imaginario) + (x.imaginario*y.real);
    }
    void dividir(const Complejo &x, const Complejo &y, Complejo &resultado)
    {
        double divisor;       TODO:  // tip 1
        // TODO: elevar al cuadrado
        divisor=sq(y.real)+sq(y.imaginario);
        if(igual(divisor,0.0))
        {
            resultado.real=0.0;
            resultado.imaginario=0.0;
        }
        else
        {
            resultado.real=(x.real*y.real) + (x.imaginario+y.imaginario)/ divisor;
            resultado.imaginario=(x.imaginario*y.real) + (x.real+y.imaginario)/ divisor;
        }
    }
    bool iguales(const Complejo &x, const Complejo &y)
    {
        return igual(x.real,y.real) && igual(x.imaginario, y.imaginario);
    }                                  
    void leer(Complejo &x)
    {
        cin>>x.real>>x.imaginario;
    }
    void escribir(const Complejo &x)
    {
        cout<<"{"<< x.real<<","<<x.imaginario<<"}"<<endl;
    }
}

