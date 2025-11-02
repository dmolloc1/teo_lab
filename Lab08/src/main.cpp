#include "../include/List.h"
#include "../include/Node.h"

#include <iostream>
using namespace std;

int main() {
    //Secuencia de edades
    List<int> lista1;

    lista1.insert(30);
    lista1.insert(18);
    lista1.insert(86);

    cout << "Elementos lista de edades: ";
    lista1.print();

    //Secuencia de palabras
    List<string> lista2;

    lista2.insert("Hola");
    lista2.insert("Buenos dias");
    lista2.insert("Un gusto");

    cout << "Elementos lista string: ";
    lista2.print();

    //Secuencia de números decimales
    List<double> lista3;
    lista3.insert(3.14);
    lista3.insert(2.71);
    lista3.insert(1.41);

    cout << "Elementos lista de decimales: ";
    lista3.print();

    // Secuencia de caracteres
    List<char> lista4;
    lista4.insert('a');
    lista4.insert('X');
    lista4.insert('9');

    cout << "Elementos lista de caracteres: ";
    lista4.print();

    return 0;
}
