#include<iostream>
#include<fstream>
using namespace std;

// declaracion variables                                        
void borrarTerm();                                              
void ingresar_Datos();                      

int main()
{
    // creamos fichero virtual
    ifstream inFile;
    inFile.open("list.txt");
    // comprobacion de errores
    if (inFile.fail())
    {
        cerr<<"Error abriendo el archivo."<<endl;
        exit(1);
    }
    // ingresamos datos [fichero]
    ingresar_Datos();
    // mostramos datos [terminal]
}
void borrarTerm()
{system("cls");}
void ingresar_Datos()
{
    int datos[]={1,3,5,7,9}; // 0,1,2,3,4
    ofstream outFile;
    outFile.open("list.txt");
    outFile<<datos[0]; outFile<<datos[1]; outFile<<datos[2]; outFile<<datos[3]; outFile<<datos[4];
    outFile.close(); // siempre hay que cerrar los ficheros "out"

    //terminal
    cout<<datos[0]<<endl;
    cout<<datos[1]<<endl;
    cout<<datos[2]<<endl;
    cout<<datos[3]<<endl;
    cout<<datos[4]<<endl;
}
