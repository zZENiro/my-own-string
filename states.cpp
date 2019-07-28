#include "states.h"
#include "mystd.h"

String::String()
{
    _len = 0;
    _size = 0;
    _string = nullptr;
}

String::String(const char* str)
{
    _len = myStd::strlen(str);
    _size = _len + 1;
    myStd::strcopy(_string, str);
}
String::String(char* str)
{
    _len = myStd::strlen(str);
    _size = _len + 1;
    myStd::strcopy(_string, str);
}

String &String::operator=(char * str)
{
    this->_len = myStd::strlen(str);
    this->_size = _len + 1;
    myStd::strcopy(this->_string, str);

    return *this;
}

String &String::operator=(const char * str)
{
    this->_len = myStd::strlen(str);
    this->_size = _len + 1;
    myStd::strcopy(this->_string, str);

    return *this;
}

String &String::operator=(String str)
{
    this->_string = str.string();
    this->_size = str.getSize();
    this->_len = str.getLength();

    return *this;
}

String &String::operator+(const char * str)
{
    int count = myStd::strlen(str);
    char* concat = new char[this->_len + count];

    for(int i = 0; i < this->_len; ++i)
    {
        *(concat + i) = *(this->_string + i);
    }
    for(int i = this->_len + 1; i < this->_len + count; ++i)
    {
        *(concat + i) = *(str + i);
    }

    delete[] this->_string;
    this->_string = concat;

    return *this;
}

String &String::operator+=(const char *)
{

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
    if (this->_string != nullptr) {
        delete[] this->_string;
        this->_string = nullptr;
    }
}

