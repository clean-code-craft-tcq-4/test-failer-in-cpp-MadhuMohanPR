#include <iostream>
#include <assert.h>
#include <stdlib.h>
#include "tshirts.hpp"

char size(int cms) {
    char sizeName = '\0';
    if(cms < 38) {
        sizeName = 'S';
    } else if(cms > 38 && cms < 42) {
        sizeName = 'M';
    } else if(cms > 42) {
        sizeName = 'L';
    }
    return sizeName;
}
