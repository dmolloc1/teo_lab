#include <iostream> 
using namespace std;

template <class T>
class Node {
private:
    T data;
    Node* next;

    Node(T d){
        data = d;
        next = nullptr;
    }

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
    Node<T>* head;
    Node<T>* tail;
public:
    List() {
        head = nullptr;
        tail = nullptr;
    }
    
    void insert(T nod){
        if (head == nullptr) {
            head = new Node<T>(nod);
            tail = *head;
            return;
        } 
            
        Node<T>* chain = new Node<T>(nod);
        tail->setNext(chain);
        tail = *chain;
    }

};
