#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string>
using namespace std;
class PERSONA{
    private:
    string nombre;
    int edad;
    public:
    PERSONA(string, int); // Constructor
    void mostrarPersona();

};
class ALUMNO:public PERSONA{
    private:
    string codigoAlumno;
    float notafinal;
    public:
    ALUMNO(string, int, string, float);// Constructor de la clase Alumno: nombre, edad, codigo, nota.
    void mostrarAlumno();

};
//Constructor de la clase persona (PADRE)
PERSONA::PERSONA(string _nombre, int _edad){
    nombre = _nombre;
    edad = _edad;
}
ALUMNO::ALUMNO(string _nombre, int _edad, string _codigoAlumno, float _notafinal):PERSONA(_nombre, _edad){
    codigoAlumno = _codigoAlumno;
    notafinal = _notafinal;
}
void PERSONA::mostrarPersona(){
    cout << "Nombre: " << nombre<<endl;
    cout << "Edad: " << edad<<endl;
}
void ALUMNO::mostrarAlumno(){
    mostrarPersona();
    cout << "Codigo de Alumno: " << codigoAlumno<<endl;
    cout << "Nota Final: " << notafinal<<endl;
}

int main(){
    string a; int b; string c; float d;
    cout << "Ingrese el nombre: "; cin >> a;
    cout << "Ingrese la edad: "; cin >> b;
    cout << "Ingrese el codigo: "; cin >> c;
    cout << "Ingrese la nota final: "; cin >> d;
    ALUMNO alumno1(a,b,c,d);
    alumno1.mostrarAlumno();
    return EXIT_SUCCESS;

}
