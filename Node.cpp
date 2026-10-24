#include "Node.h"
Node::Node(string id, string nombre, int edad)
    : p(id, nombre, edad), next(nullptr), prev(nullptr) {}

Node::Node(const paciente& p) 
    : p(p), next(nullptr), prev(nullptr) {}