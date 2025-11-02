#include <iostream> 
using namespace std;

template <class T>
class Node {
private:
    T data;//Informacion que contiene que puede ser de cualquier tipo
    Node* next;//Puntero al siguiente nodo
public:
    //En una lista enlazada simple solo se puede recorrer en una direccion
    Node(T d){
        data = d;
        next = nullptr;
    }
    //getters y setters
    T getData() {
        return data;
    }
    Node* getNext() {
        return next;
    }
    void setNext(Node* n) {
        next = n;
    }
        
};

template <class T>
class List {
private:
    Node<T>* head;//Primer nodo
    Node<T>* tail;//Ultimo nodo
public:
    List() {
        head = nullptr;
        tail = nullptr;
    }

    //Destructor de una lista
    ~List() {
        Node<T>* actual = head;//Puntero que recorre la lista
        Node<T>* pivot = nullptr;//Puntero que guarda el siguiente nodo
        
        //Despues de recorrer cada nodo se guarda el siguiente en pivot y se elimina el actual
        while (actual != nullptr) {
            pivot = actual->getNext();
            delete actual;
            actual = pivot;
        }
    }

    void insert(T nod){
        //Si es el primer elemento se coloca su puntero en head y tail
        Node<T>* chain = new Node(nod);

        if (head == nullptr) {
            head = chain;
            tail = chain;
            return;
        } 
        //Si ya hay elementos se coloca al final 
        tail->setNext(chain);
        tail = chain;
    }

    //Se coloca const para asegurarse que no se alteren los valores de la lista
    void print () const{
        Node<T>* pivot = head;
        //Recorre la lista desde el head usando un pivote
        while (pivot != nullptr) {
            cout << pivot->getData() << " ";

            pivot = pivot->getNext();
        }
        cout << endl;
    }

};
