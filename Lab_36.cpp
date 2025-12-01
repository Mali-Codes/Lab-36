#include <iostream>
#include <fstream>
#include <string>
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

    
    ifstream inFile("minicodes.txt");

    if (!inFile) {
        cout << "Unable to open file minicodes.txt";
        return 1;
    }   else {
        cout << "file opened goooood" << endl;   
    }

    return 0;

}