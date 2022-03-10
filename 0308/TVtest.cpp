#include <iostream>
#include <string>
#include "TV.h"
using namespace std;

int main(int argc, char const *argv[])
{
    TV tv1 = TV(" ViewSonic");
    tv1.showInfo();
    tv1.setLabel(" AOC");
    tv1.showInfo();
    return 0;
}
