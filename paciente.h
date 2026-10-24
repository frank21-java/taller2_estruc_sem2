#pragma once
#include <string>
using namespace std;

class paciente
{
private:
    string id, nombre;
    int edad;
    float temperatura;
    int presionArterial;
    int dolor;
    string tipoDolor;
    int trauma;
    int sintomasNeurologicos;
    int requiereCirugia;
    int diasHospitalizacion;
public:
    paciente() {}
    paciente(string id, string nombre, int edad,
        float temperatura, int presionArterial, int dolor, string tipoDolor,
        int trauma, int sintomasNeurologicos, int requiereCirugia, 
        int diasHospitalizacion);
    ~paciente();
    
    string getId();
    string getNombre();
    int getEdad();
};