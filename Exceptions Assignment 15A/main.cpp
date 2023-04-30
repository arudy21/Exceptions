//  Alex Rudy
//  April 30
//  Exceptions Assignment 15A

#include <iostream>
#include <string>
using namespace std;

class invalidCharacterException{};
class invalidRangeException{};

char character(char start, int offset)
{
    if((start < 65 || start > 90) && (start < 97 || start > 122))
        throw invalidCharacterException();
    
    int n = start + offset;
    
    if((n < 65 || n > 90) && (n < 97 || n > 122))
        throw invalidRangeException();
    
    return char(n);
}

