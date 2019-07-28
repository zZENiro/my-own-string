#ifndef MYSTD_H
#define MYSTD_H

namespace myStd
{

static int strlen(const char* str)
{
    int lenght = 0;
    if (str != nullptr)
    {
        lenght += 1;
        while(str != nullptr)
        {
            str++;
            lenght++;
        }
#ifdef DEBUG
        printf("%d", lenght);
#endif // !DEBUG
        return lenght;
    } else {
        return lenght;
    }
}
static int strlen(char* str)
{
    int lenght = 0;
    if (str != nullptr)
    {
        lenght += 1;
        while(str != nullptr)
        {
            str++;
            lenght++;
        }
#ifdef DEBUG
        printf("%d", lenght);
#endif // !DEBUG
        return lenght;
    } else {
        return lenght;
    }
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
