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

class BinaryTree
{
public:
    Node *ROOT;

    BinaryTree()
    {
        ROOT = nullptr; // Intialieze ROT to null
    }

    void insert()
    {
        int x;
        cout << "Masukkan nilai: ";
        cin >> x;

    }
};
