#include <iostream> 
#include <map>      
using namespace std;

int main() {
    // Crear un mapa de ciudades con distancias
    map<pair<string, string>, int> distancias;

    // Asignar distancias entre las ciudades
    distancias[{"Ciudad A", "Ciudad B"}] = 100; 
    distancias[{"Ciudad B", "Ciudad C"}] = 150; 
    distancias[{"Ciudad C", "Ciudad D"}] = 200;
    distancias[{"Ciudad D", "Ciudad E"}] = 250;
    distancias[{"Ciudad E", "Ciudad A"}] = 300; 

    // Imprimir las distancias entre ciudades
    cout << "Distancias entre ciudades:" << endl; 
    for (auto& par : distancias) {
        cout << par.first.first << " - " 
             << par.first.second << " : " 
             << par.second << " km" << endl; 
    }

    return 0; // Indicar que el programa terminó correctamente
}