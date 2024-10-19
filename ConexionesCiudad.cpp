#include <iostream> 
#include <vector>  
using namespace std;

const int NUM_CIUDADES = 5; // Definición el número de ciudades

// Función que imprime la matriz del grafo
void imprimirGrafo(const vector<vector<int>>& grafo) {
    cout << "Matriz de adyacencia:" << endl; // Encabezado de la matriz
    for (int i = 0; i < NUM_CIUDADES; ++i) { // Iterar sobre cada fila
        for (int j = 0; j < NUM_CIUDADES; ++j) { // Iterar sobre cada columna
            cout << grafo[i][j] << " "; // Imprimir el valor en la posición (i, j)
        }
        cout << endl; // Nueva línea después de cada fila
    }
}

int main() {
    // Crear una matriz inicializada con ceros
    vector<vector<int>> grafo(NUM_CIUDADES, vector<int>(NUM_CIUDADES, 0));

    // Conexiones entre ciudades
    grafo[0][1] = grafo[1][0] = 1; 
    grafo[1][2] = grafo[2][1] = 1; 
    grafo[2][3] = grafo[3][2] = 1;
    grafo[3][4] = grafo[4][3] = 1; 
    grafo[4][0] = grafo[0][4] = 1; 

    // Imprimir la matriz 
    imprimirGrafo(grafo);
    
    return 0; 
}