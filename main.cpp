#include <iostream>
#include <map>
#include "states.h"
#include "mystd.h"
#include <string>

using namespace std;
using namespace myStd;

int main()
{
    String str;
    String str_1(", goodbye");
    String str_2("Hello");
    str = str_2  + str_1;

    cout << "done";

    return 0;
}

