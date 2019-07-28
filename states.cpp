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
