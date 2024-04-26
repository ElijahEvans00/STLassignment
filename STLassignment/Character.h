// Elijah Evans
// CIS 1202 201
// April 26, 2024
#pragma once
#ifndef CHARACTER_H
#define CHARACTER_H

#include <stdexcept>
using namespace std;

class invalidCharacterException : public exception {
public:
    const char* what() const throw () { // Throw the invalid char exception
        return "Invalid character exception"; 
    }
};

class invalidRangeException : public exception {
public:
    const char* what() const throw () { // Throw the invalid range exception
        return "Invalid range exception";
    }
};

char character(char start, int offset);

#endif