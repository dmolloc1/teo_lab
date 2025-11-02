#include <iostream> 

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