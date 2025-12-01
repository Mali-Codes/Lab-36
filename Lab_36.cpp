#include <iostream>
#include <fstream>
#include <string>
#include "IntBinaryTree.h"
using namespace std;

void pullFromFile(IntBinaryTree& tree, const string& filename) {
    ifstream inFile("codes.txt");

    if (!inFile) {
        cout << "file not open" << endl;
        return;
    }

    string code;
    while (inFile >> code) {
        tree.insertNode(code);
    }
}

void printMenu() {
    cout << "\n== CODE MENU ==\n";
    cout << "1. Add code\n";
    cout << "2. Delete code\n";
    cout << "3. Search for code\n";
    cout << "4. Modify code\n";
    cout << "5. Display all codes\n";
    cout << "0. Quit\n";
}

int main() {
    IntBinaryTree tree;
    ifstream inFile("codes.txt");

    // pullFromFile(tree, "codes.txt");
    // cout << "After pulling from file, traversal: " << endl;
    // tree.displayInOrder();

    int choice = -1;
    string code, newCode;

    do {
        printMenu();
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:  // add
                cout << "Enter code to add: ";
                cin >> code;
                tree.insertNode(code);
                cout << "Added " << code << endl;
                break;

            case 2:  // delete
                cout << "Enter code to delete: ";
                cin >> code;
                tree.remove(code);
                cout << "Delete attempted for " << code << endl;
                break;

            case 3:  // search
                cout << "Enter code to search: ";
                cin >> code;
                if (tree.searchNode(code))
                    cout << code << " found\n";
                else
                    cout << code << " not found.\n";
                break;

            case 4:  // modify
                cout << "Enter existing code to modify: ";
                cin >> code;
                if (tree.searchNode(code)) {
                    cout << "Enter new code: ";
                    cin >> newCode;
                    tree.remove(code);
                    tree.insertNode(newCode);
                    cout << "Updated " << code << " → " << newCode << endl;
                } else {
                    cout << "Code not found.\n";
                }
                break;

            case 5:  // display
                cout << "\nCodes (in order):\n";
                tree.displayInOrder();
                break;
            }

    } while (choice != 0);

    return 0;

}

