#include <fstream>
#include <vector>
#include <iostream>
using namespace std;


// Erepresenta nodo de una ciudad

struct NodoCiudad {
    string nombre; // Nombre de la ciudad, estado o pais
    vector<NodoCiudad*> hijos; // punteros a los nodos hijos
    // Constructor
    NodoCiudad(string nombre) : nombre(nombre) {}
};

//imprime el árbol de ciudades
void imprimirArbol(NodoCiudad* nodo, int nivel = 0) {
    if (!nodo) return;
    for (int i = 0; i < nivel; i++) cout << " ";
    cout << nodo->nombre << endl;
    for (auto hijo : nodo->hijos) {
        imprimirArbol(hijo, nivel + 1);
    }
}


// Función principal
int main() {
    // Crear un nodo para el país
    NodoCiudad* pais = new NodoCiudad("Pais");
    // Crear nodos para estados
    NodoCiudad* estado1 = new NodoCiudad("Estado1");
    // Agregar estados como hijos del paí
    NodoCiudad* estado2 = new NodoCiudad("Estado2");
    // Agregar estados como hijos del paí
    NodoCiudad* estado3 = new NodoCiudad("Estado3");
    
    // Agregar estados como hijos del país
    pais->hijos.push_back(estado1);
    pais->hijos.push_back(estado2);
    pais->hijos.push_back(estado3);

    // Agregar ciudades como hijos de estado1
    estado1->hijos.push_back(new NodoCiudad("Ciudad A"));
    estado1->hijos.push_back(new NodoCiudad("Ciudad B"));
    // Agregar ciudades como hijos de estado2
    estado2->hijos.push_back(new NodoCiudad("Ciudad C"));
    estado2->hijos.push_back(new NodoCiudad("Ciudad D"));
    // Agregar ciudades como hijos de estado3
    estado3->hijos.push_back(new NodoCiudad("Ciudad E"));
    
    // Imprimir el árbol
    imprimirArbol(pais);
    
    return 0;
}