#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string>
using namespace std;
class PERSONA
{
private:
    string nombre;
    int edad;
public:
    PERSONA(string, int);
    void mostrarPersona();
};
class EMPLEADO:public PERSONA{
    private:
    int salario;
    public:
    EMPLEADO(string, int, int);
    void mostrarEmpleado();
};
class ESTUDIANTE: public PERSONA{
    private: 
    int nota;
    public:
    ESTUDIANTE(string, int, int);
    void mostrarEstudiante();
};
class UNIVERSITARIO: ESTUDIANTE{
private:
    float salario;
public:
    UNIVERSITARIO(string, int, int, float);
    void mostrarUniversitario();
};

UNIVERSITARIO::UNIVERSITARIO(string _nombre, int _edad, int _nota, float _salario) : ESTUDIANTE(_nombre, _edad, _nota){
    salario = _salario;
}
PERSONA::PERSONA(string _nombre, int _edad)
{
    nombre = _nombre;
    edad = _edad;
}
EMPLEADO::EMPLEADO(string _nombre, int _edad, int _salario): PERSONA(_nombre, _edad){
    salario = _salario;
}
ESTUDIANTE::ESTUDIANTE(string _nombre, int _edad, int _nota): PERSONA(_nombre, _edad){
    nota = _nota;
}
void ESTUDIANTE::mostrarEstudiante(){
    mostrarPersona();
    cout << "Nota: " << nota << endl;
}
void EMPLEADO::mostrarEmpleado(){
    mostrarPersona();
    cout << "Salario: " << salario <<endl;
}
void PERSONA::mostrarPersona(){
    cout << "Nombre: " << nombre<<endl;
    cout << "Edad: " << edad<<endl;
}
void UNIVERSITARIO::mostrarUniversitario(){
    mostrarEstudiante();
    cout << "Salario: " << salario<<endl;
}

int main(){
    string a;
    int b, c, d;
    cout << "Ingrese el nombre: "; getline(cin, a);
    cout << "Ingrese la edad: "; cin >> b;
    cout << "Ingrese la nota: "; cin >> c;
    cout << "Ingrese su salario: "; cin >> d;
    UNIVERSITARIO e1(a, b, c, d);
    e1.mostrarUniversitario();
    return EXIT_SUCCESS;
}
