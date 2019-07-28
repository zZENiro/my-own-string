#include "mystd.h"

//int myStd::strlen(const char *str)
//{
//    int lenght = 0;
//    if (str != nullptr)
//    {
//        lenght += 1;
//        while(str != nullptr)
//        {
//            str++;
//            lenght++;
//        }
//#ifdef DEBUG
//        printf("%d", lenght);
//#endif // !DEBUG
//        return lenght;
//    } else {
//        return lenght;
//    }
//}

//int myStd::strlen(char *str)
//{
//    int lenght = 0;
//    if (str != nullptr)
//    {
//        lenght += 1;
//        while(str != nullptr)
//        {
//            str++;
//            lenght++;
//        }
//#ifdef DEBUG
//        printf("%d", lenght);
//#endif // !DEBUG
//        return lenght;
//    } else {
//        return lenght;
//    }
//}

//char myStd::strcopy(char *dest, const char *src)
//{
//    int count = strlen(src);
//    delete[] dest;
//    dest = new char[count];

//    for (int i = 0; i < count; ++i) {
//        *(dest + i) = *(src + i);
//    }

//    return *dest;
//}

//char myStd::strcopy(char *dest, char *src)
//{
//    int count = strlen(src);
//    delete[] dest;
//    dest = new char[count];

//    for (int i = 0; i < count; ++i) {
//        *(dest + i) = *(src + i);
//    }

//    return *dest;
//}
