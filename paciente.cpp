#include "paciente.h"

paciente::paciente(string id, string nombre, int edad,
                   float temperatura, int presionArterial, int dolor, string tipoDolor,
                   int trauma, int sintomasNeurologicos, int requiereCirugia, int diasHospitalizacion){
    this->id = id;
    this->nombre = nombre;
    this->edad = edad;
    this->temperatura = temperatura;
    this->presionArterial = presionArterial;
    this->dolor = dolor;
    this->tipoDolor = tipoDolor;
    this->trauma = trauma;
    this->sintomasNeurologicos = sintomasNeurologicos;
    this->requiereCirugia = requiereCirugia;
    this->diasHospitalizacion = diasHospitalizacion;
}

paciente::~paciente(){}

string paciente::getId(){return id;}
string paciente::getNombre(){return nombre;}
int paciente::getEdad(){return edad;}