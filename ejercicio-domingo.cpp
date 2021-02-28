#include<iostream>
#include<fstream>
#include<vector>
using namespace std;

/*
 * Bolsa de codigos:
 * 
 * ifstream // para declarar ficheros de entrada (in)
 * ofstream // para declarar ficheros de salida (out)
 *  ejemplo:
 *      ofstream f;
 * 
 * Para relacionar el fichero logico con el fichero fisico necesesitamos realizar
 * una operacion de apaertura del fichero. En c++ se usa la instrucción open:
 *  nombre_fichero_logico.open (nombre_fichero_fisico);
 *  ejempolo:
 *      f.open("datos.txt"); // a partir de aqui podemos usar el fichero
 * -------------------------------------------------------------------------------------------   
 *      Apertura de fichero:
 * -------------------------------------------------------------------------------------------
 *  f.open("datos.txt", ios::app);
 *  -Para saber si da error se aplica "!" al fichero.
 *      
 * 
 * -------------------------------------------------------------------------------------------   
 * * * * * * Operaciones de fichero:
 * -------------------------------------------------------------------------------------------
 *  -Para escribir el numero 10 en el fichero f:
 *      f<<10;
 *  -Para escribir un string:
 *      f<<"Hola";   
 * -------------------------------------------------------------------------------------------   
 * * * * * * Cierre del fichero:
 * -------------------------------------------------------------------------------------------
 * >>>>>>>>>>>SIEMPRE HAY QUE CERRAR EL FICHERO<<<<<<<<<<<<<
 *  -Para cerrar el fichero se utiliza la instruccion close:
 *      nombre_fichero_logico.close();
 * 
 *  Ejemplo:
 *      f.close();
 * 
 */

int main()
{
    int a,b,c,d,e; 
    string f,g;
    ifstream bag;
    bag.open("datoshunter.txt");
    if (!bag.is_open())
    {
        cout<<"Error al encontrar archivo"<<endl;
    }
    bag >>a>>b>>c>>d>>e>>f>>g; bag.close();
    cout<<a<<b<<c<<d<<e<<f<<g; return 0;

    
}
    

 
