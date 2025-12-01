#include <iostream>
#include <fstream>
#include <string>
#include "IntBinaryTree.h"
using namespace std;

void pullFromFile(IntBinaryTree& tree, const string& filename) {
    ifstream inFile("minicodes.txt");

    if (!inFile) {
        cout << "file not open" << endl;
        return;
    }

    string code;
    while (inFile >> code) {
        tree.insertNode(code);
    }
}

int main() {
    IntBinaryTree tree;

    // tree.insertNode("Apple");
    // tree.insertNode("Banana");
    // tree.insertNode("Cherry");
    // tree.insertNode("Lemon");

    // cout << "traversal: " << endl;
    // tree.displayInOrder();

    // cout << "search for Banana: " 
    //      << (tree.searchNode("Banana") ? "Found" : "Not Found") << endl;

    
    ifstream inFile("codes.txt");

    pullFromFile(tree, "codes.txt");
    cout << "After pulling from file, traversal: " << endl;
    tree.displayInOrder();
    return 0;

}

