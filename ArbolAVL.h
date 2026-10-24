#pragma once
#include "NodoAVL.h"
#include <string>
class ArbolAVL {
private:
    NodoAVL* raiz;

    int obtenerAltura(NodoAVL* nodo);
    int obtenerBalance(NodoAVL* nodo);
    void ActualizarAltura(NodoAVL* nodo);
    
    NodoAVL* rotarDer(NodoAVL* y);
    NodoAVL* rotarIzq(NodoAVL* x);
    NodoAVL* insertar(NodoAVL* nodo, const paciente& p);
    void destruir(NodoAVL* nodo);

    void buscarNombre(NodoAVL* nodo,const string& nombre, paciente& resultado);
    void inOrden(NodoAVL* nodo);
    void preOrden(NodoAVL* nodo);
    void postOrden(NodoAVL* nodo);
    void mostrarFactores(NodoAVL* nodo);


public:
    ArbolAVL();
    ~ArbolAVL();
    void insertar(const paciente& p);
    bool buscarID(string id, paciente& resultado);
    bool buscarNombre(string nombre, paciente& resultado);
    void MostrarInOrden();
};