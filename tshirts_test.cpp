#include <iostream>
#include <stdlib.h>
#include <assert.h>
#include "tshirts.h"

int main()
{
    assert(size(37) == 'S');
    assert(size(38) == 'S');
    assert(size(38) == 'M');
    assert(size(40) == 'M');
    assert(size(43) == 'L');

    std::cout << "All is well (maybe!)\n";
    return 0;
}
