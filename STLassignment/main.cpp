// Elijah Evans
// CIS 1202 201
// April 26, 2024
#include<iostream>
#include "character.h"

int main() {
    try {
        cout << "character('a', 1): ";
        cout << character('a', 1) << endl;
    }
    catch (exception& e) {
        cout << "Error: " << e.what() << endl;
    }

    try {
        cout << "character('a', -1): ";
        cout << character('a', -1) << endl;
    }
    catch (exception& e) {
        cout << e.what() << endl;
    }

    try {
        cout << "character('Z', -1): ";
        cout << character('Z', -1) << endl;
    }
    catch (exception& e) {
        cout << e.what() << endl;
    }

    try {
        cout << "character('?', 5): ";
        cout << character('?', 5) << endl;
    }
    catch (exception& e) {
        cout << e.what() << endl;
    }

    try {
        cout << "character('A', 32): ";
        cout << character('A', 32) << endl;
    }
    catch (exception& e) {
        cout << e.what() << endl;
    }






    return 0;
}