#include "List.h"
using namespace std;

int main() {
    List<int> lista1;

    lista1.insert(30);
    lista1.insert(18);
    lista1.insert(86);

    cout << "Elementos lista de edades: ";
    lista1.print();

    List<string> lista2;

    lista2.insert("Hola");
    lista2.insert("Buenos dias");
    lista2.insert("Un gusto");

    cout << "Elementos lista string: ";
    lista1.print();

    return 0;
}
