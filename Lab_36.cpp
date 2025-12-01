#include <iostream>
#include "IntBinaryTree.h"
using namespace std;

int main() {
    IntBinaryTree tree;

    tree.insertNode("Apple");
    tree.insertNode("Banana");
    tree.insertNode("Cherry");
    tree.insertNode("Lemon");

    cout << "traversal: " << endl;
    tree.displayInOrder();

    cout << "search for Banana: " 
         << (tree.searchNode("Banana") ? "Found" : "Not Found") << endl;
         
    return 0;
}