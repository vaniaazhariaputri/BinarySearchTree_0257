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
        rightchild = nullptr; // Intialieze right child to null
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

        // Step 1: Allocate memory for the new node
        Node *newNode = new Node();

        // Step 2: Assign value to the data field of new node
        newNode->info = x;

        // Step 3: Make the left and right child of the new node point to NULL
        newNode->leftchild = nullptr;
        newNode->rightchild = nullptr;

        // Step 4: Locate the node which will be the parent of the nodee to be inserted
        Node *parent = nullptr;
        Node *currentNode = nullptr;
        search(x, parent, currentNode);

        // Step 5: If parent is NULL (Tree is empty)
        if (parent == nullptr)
        {
            // 5a: Mark the new node as ROOT
            ROOT =newNode;

            // 5b: Exit
            return;
        }

        // Step 6: If the values in the data field new node is less than that of parent
        if (x < parent->info)
        {
            // 6a: Make the left child of parent poin the new node
            parent->leftchild = newNode;

            // 6b: Exit
            return;
        }
    
    }