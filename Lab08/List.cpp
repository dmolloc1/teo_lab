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
        
};
