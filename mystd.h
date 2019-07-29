#ifndef MYSTD_H
#define MYSTD_H

namespace myStd
{

static int strlen(const char* str)
{
    int len = 0;
    for (len = 0; str[len]; (len)++);
    return len;
}
static int strlen(char* str)
{
    int len = 0;
    for (len = 0; str[len]; (len)++);
    return len;
}
static char* strcopy(char* dest, const char* src) // копирую строки
{
    int count = strlen(src); // нахожу длину
    delete[] dest;
    dest = new char[count]; // выделяю новую область в памяти для массива dest
                                       // и получаю такое...

    for (int i = 0; i < count; ++i) {
        *(dest + i) = *(src + i);
    }

    return dest;                  // потом возваращается массив dest, в который я копировал const char* src
                                      // и далее программа работает некорректно, т.к. считает ещё и непечатаемые
                                      // символы
}
static char* strcopy(char* dest, char* src)
{
    int count = strlen(src);
    delete[] dest;
    dest = new char[count];

    for (int i = 0; i < count; ++i) {
        *(dest + i) = *(src + i);
    }

    return dest;
}
}

#endif // MYSTD_H
