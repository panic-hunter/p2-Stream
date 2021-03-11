#ifndef _COMPLEJO_HPP_
#define _COMPLEJO_HPP_

namespace umalcc                                                                        // no usar espacio, sino crearlo
{
    typedef struct
    {
        float real;
        float imaginario;
    }Complejo;
    void sumar(const Complejo &x, const Complejo &y, Complejo &resultado);
    void restar(const Complejo &x, const Complejo &y, Complejo &resultado);
    void multiplicar(const Complejo &x, const Complejo &y, Complejo &resultado);
    void dividir(const Complejo &x, const Complejo &y, Complejo &resultado);
    bool iguales(const Complejo &x, const Complejo &y);                                  // char, float , enteros, bool (podemos hacer return)
    void escribir(const Complejo &x);
    void leer(Complejo &x);
}

#endif