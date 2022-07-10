#include <iostream>
#include <assert.h>
#include <stdlib.h>
#include "misaligned.hpp"

int main()
{
    int result = printColorMap();
    assert(result == 25);

    std::string expected = "6    | Red      | Orange";
    std::string result = displayColorPairOnConsole(1,1);
    assert(expected.compare(result)== 0);
 
    std::string expected = "13    | Yellow      | Slate";
    std::string result = displayColorPairOnConsole(2,3);
    assert(expected.compare(result)== 0);

   /* assert(displayColorPairOnConsole(1,1).compare("6 | Red | Orange"));
    assert(displayColorPairOnConsole(2,3).compare("13 | Yellow | Slate"));
    assert(displayColorPairOnConsole(1,0).compare("5 | Red | Blue"));
    */
    std::cout << "All is well (maybe!)\n";
    return 0;
}
