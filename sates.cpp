#include "states.h"
#include "mystd.h"
#include <iostream>


String::String()
{
    _len = 0;
    _size = 0;
    _string = nullptr;
}

String::String(const char* str)
{
    _len = 0;
    _size = 0;
    _string = nullptr;

    _len = myStd::strlen(str);
    _size = _len + 1;
    this->_string = myStd::strcopy(this->_string, str);
}
String::String(char* str)
{
    _len = 0;
    _size = 0;
    _string = nullptr;

    _len = myStd::strlen(str);
    _size = _len + 1;
    this->_string = myStd::strcopy(this->_string, str);
}

String &String::operator= (char * str)
{
    _len = 0;
    _size = 0;
    _string = nullptr;

    this->_len = myStd::strlen(str);
    this->_size = _len + 1;
    this->_string = myStd::strcopy(this->_string, str);

    return *this;
}

String &String::operator= (const char * str)
{
    _len = 0;
    _size = 0;
    _string = nullptr;

    this->_len = myStd::strlen(str);
    this->_size = _len + 1;
    this->_string = myStd::strcopy(this->_string, str);

    return *this;
}

String &String::operator= (String str)
{
    this->_string = str.string();
    this->_size = str.getSize();
    this->_len = str.getLength();

    return *this;
}

String &String::operator+ (const char * str)
{
    int count = myStd::strlen(str);
    char* concat = new char[this->_len + count];

    for(int i = 0; i < this->_len; ++i)
    {
        *(concat + i) = *(this->_string + i);
    }
    for(int i = this->_len; i < this->_len + count; ++i)
    {
        *(concat + i) = *((str) + i - this->_len);
    }

    String str_1(concat);
    return str_1;
}

String &String::operator+ (String str)
{
    int count = str._len;
    char* concat = new char[this->_len + count];

    for(int i = 0; i < this->_len; ++i)
    {
        *(concat + i) = *(this->_string + i);
    }
    for(int i = this->_len; i < this->_len + count; ++i)
    {
        *(concat + i) = *((str._string) + i - this->_len);
    }

    String toReturn;
    toReturn = concat;
    return toReturn;
}

String &String::operator+=(const char * str)
{
    int count = myStd::strlen(str);
    char* concat = new char[this->_len + count];

    for(int i = 0; i < this->_len; ++i)
    {
        *(concat + i) = *(this->_string + i);
    }
    for(int i = this->_len; i < this->_len + count; ++i)
    {
        *(concat + i) = *((str) + i - this->_len);;
    }

    this->_string = concat;
    return *this;
}

String::String(String& str)
{
    this->_string = str.string();
    this->_size = str.getSize();
    this->_len = str.getLength();
}
String::String(const String& str)
{
    this->_string = str._string;
    this->_size = str._size;
    this->_len = str._len;
}

String::~String()
{

}
