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
static char strcopy(char* dest, const char* src)
{
    int count = strlen(src);
    delete[] dest;
    dest = new char[count];

    for (int i = 0; i < count; ++i) {
        *(dest + i) = *(src + i);
    }

    return *dest;
}
static char strcopy(char* dest, char* src)
{
    int count = strlen(src);
    delete[] dest;
    dest = new char[count];

    for (int i = 0; i < count; ++i) {
        *(dest + i) = *(src + i);
    }

    return *dest;
}

}

#endif // MYSTD_H
