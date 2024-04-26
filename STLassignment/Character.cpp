// Elijah Evans
// CIS 1202 201
// April 26, 2024
#include "character.h"
#include <cctype>

char character(char start, int offset) {
    if (!isalpha(start)) { // Check if letter
        throw invalidCharacterException(); // Throws char exception if not
    }

    char result = start + offset;

    if (!isalpha(result) || (isupper(start) && islower(result)) || (islower(start) && isupper(result))) { // Check if letter and is in the valid range
        throw invalidRangeException(); // Throws exception if not
    }

    return result;
}