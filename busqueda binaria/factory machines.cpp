/**
 * Time limit: 1.00 s
 * Memory limit: 512 MB
 * 
 * A factory has n machines which can be used to make products. 
 * Your goal is to make a total of t products.
 * 
 * For each machine, you know the number of seconds it needs to make a single product. 
 * The machines can work simultaneously, and you can freely decide their schedule.
 * 
 * What is the shortest time needed to make t products?
 * 
 * input: 
 * The first input line has two integers n and t: the number of machines and products.
 * The next line has n integers k_1,k_2,...,k_n: the time needed to make a product using each machine.
 * 
 * output:
 * Print one integer: the minimum time needed to make t products.
 * 
 * Constraints:
 * 1 < n < 2 * 10^5
 * 1 < t < 10^9
 * 1 < k_i < 10^9
 */
#include <iostream>
#include <vector>
#define ll long long
using namespace std;

bool puede_producir(vector<int> maquinas, int cantidad, ll tiempo) {
    ll produccion_en_tiempo = 0;
    for (int i = 0; i<maquinas.size(); i++) {
        // Por cada máquina, calculo lo que produce en x tiempo.
        produccion_en_tiempo += tiempo/maquinas[i];
    }
    if (produccion_en_tiempo < cantidad)
        return false;
    else return true;
}

int main() {
    //la idea va a ser calcular la producción máxima en x tiempo
    // por búsqueda binaria voy a iterar el tiempo para ver si el tiempo n es suficiente para producir.
    int cantidad_maquinas, cantidad_productos;
    ll tiempo;
    ll min = 1, max;
    ll fastest = 100000000000000000;
    cin>>cantidad_maquinas>>cantidad_productos;
    vector<int> maquinas(cantidad_maquinas);
    for (int i = 0; i<cantidad_maquinas; i++) {
        cin>>maquinas[i];
        if (maquinas[i] < fastest)
            fastest = maquinas[i];
    }
    // el tiempo más lento posible (optimizado) sería que la máquina más rápida produzca constantemente pero sola los productos. 
    max = fastest * cantidad_productos;
    while(min < max) {
        tiempo = min + ((max-min) / 2);
        // Ventanas:
        // Si puede producir, entonces estoy en un valor no mínimo o justo el mínimo
        // Si no lo puede producir, tengo que aumentar el mínimo.
        if (puede_producir(maquinas, cantidad_productos, tiempo)) {
            max = tiempo;
        } else {
            min = tiempo + 1;
        }
    }
    cout<<min;
}