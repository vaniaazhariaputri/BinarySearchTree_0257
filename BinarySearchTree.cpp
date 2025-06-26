#include <iostream>
using namespace std;

class Node 
{
public:
    int info;
    Node *leftchild;
    Node *rightchild;

    // Construvtor for the node class
    Node()
    {
        leftchild = nullptr; // Intialieze left hild to null
        right = nullptr; // Intialieze right child to null
    }
};
