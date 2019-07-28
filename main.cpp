#include <iostream>
#include <map>

using namespace std;

int main()
{
    std::map<int, string> abc;
    abc.insert(std::pair<int, string>(1, "Hello"));

    return 0;
}

