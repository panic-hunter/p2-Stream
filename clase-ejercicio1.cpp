// librerias
#include <fstream>                                                      // manejadores
#include <iostream>
using namespace std;


/*

definicion variables (leerFichero) **

bool &comprobar = guarda resultado error / !error
datos estructurados = por referencia (&)
const string = no se modifica el string en todo el codigo
f_ent.fail = fallo / !f_ent.fail = no fallo
f_ent.eof = hasta el final de ficheros
cuando no hay fallos o llegamos al final del fichero

*/
void leerFichero(const string &fichero, bool &comprobar){

    ifstream f_ent; // manejador de ficheros 
    f_ent.open("datos.txt"); // vinculamos el manenajador de ficheros con el fichero
    if(!f_ent.fail()){

        int num;
        f_ent >> num;
        
        while (!f_ent.eof())
        {
            cout << num;
            f_ent >> num; // leemos el siguiente numero del fichero
            
        }
        
            comprobar = !f_ent.fail() || f_ent.eof();     // comprobamos cuando no hay fallos o llegamos al final del fichero
        
        else
        {
            comprobar = false;
        }
        f_ent.close();
        
        
    }

    


}

