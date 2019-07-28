#ifndef STATES_H
#define STATES_H

#include <iostream>
#include "mystd.h"

using namespace std;

class String
{
    // properties
    int _len;
    char* _string;
    int _size;


public:
    // ctor of ini
    String();

    // ctor of copy
    String(String& str);
    String (const String& str);

    // ctor with data
    String(const char* str);
    String (char* str);

    int getSize() { return this->_size; }
    int getLength() { return this->_len; }
    char* string() { return _string; }

    String& operator= (char*);
    String& operator= (const char*);
    String& operator= (String);
    String& operator+ (const char* );
    String& operator+=(const char* );

    ~String();
};

#endif // STATES_H
