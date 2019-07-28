#ifndef STATES_H
#define STATES_H

#define DEBUG

#include <iostream>

using namespace std;

class String
{
    // properties
    int _len;
    char* _string;
    int _size;

    // methods
    int strlen(const char* str);
    char strcopy(char* dest, char* src);

public:
    // ctor of ini
    String();

    // ctor of copy
    String(String& str);

    // ctor with data
    String(const char* str);

    int getSize() { return this->countElems; }
    char string() { return *_string; }

};

#endif // STATES_H
