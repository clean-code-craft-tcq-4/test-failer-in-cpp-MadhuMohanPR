#include <iostream>
#include <assert.h>
#include <stdlib.h>
#include "misaligned.hpp"

int main()
{
    int result = printColorMap();
    assert(result == 25);

    std::string expected = "0    | White      | Blue";
    std::string received = printLine(0, 0);
    assert(expected.compare(received)== 0);

    expected = "10   | Black      | Blue";
    received = printLine(2, 0);
    assert(expected.compare(received)== 0);

   /* assert(displayColorPairOnConsole(1,1).compare("6 | Red | Orange"));
    assert(displayColorPairOnConsole(2,3).compare("13 | Yellow | Slate"));
    assert(displayColorPairOnConsole(1,0).compare("5 | Red | Blue"));
    */
    std::cout << "All is well (maybe!)\n";
    return 0;
}
