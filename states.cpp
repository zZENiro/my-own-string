#include "states.h"

String::String()
{
    _len = 0;
    _size = 0;
    _string = nullptr;
}

String::String(const char* str)
{
    _len = strlen(str);
    _size = _len + 1;
    _string = new char[_size];
    strcopy(_string, str);
}
String::String(char* str)
{
    _len = strlen(str);
    _size = _len + 1;
    _string = new char[_size];
    strcopy(_string, str);
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

char String::strcopy(char* dest, const char* src)
{
    int count = strlen(src);
    delete[] dest;
    dest = new char[count];

    for (int i = 0; i < count; ++i) {
        *(dest + i) = *(src + i);
    }

    return *dest;
}
char String::strcopy(char* dest, char* src)
{
    int count = strlen(src);
    delete[] dest;
    dest = new char[count];

    for (int i = 0; i < count; ++i) {
        *(dest + i) = *(src + i);
    }

    return *dest;
}

int String::strlen(const char* str)
{
    int lenght = 0;
    while(str != nullptr)
    {
        str++;
        lenght++;
    }
    _len = lenght;

#ifdef DEBUG
    printf("%d", lenght);
#endif // !DEBUG

    return lenght;
}
int String::strlen(char *str) {
    int lenght = 0;
    while(str != nullptr)
    {
        str++;
        lenght++;
    }
    _len = lenght;

#ifdef DEBUG
    printf("%d", lenght);
#endif // !DEBUG

    return lenght;
}

String::~String()
{
    if (this->_string != nullptr) {
        delete[] this->_string;
        this->_string = nullptr;
    }
}
