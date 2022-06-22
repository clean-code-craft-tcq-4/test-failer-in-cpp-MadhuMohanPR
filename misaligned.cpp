#include <iostream>
#include <assert.h>

int printColorMap() {
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    int i = 0, j = 0;
    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= 5; j++) {
            std::cout << (i-1) * 5 + j << " | " << majorColor[i-1] << " | " << minorColor[j-1] << "\n";
        }
    }
    return i * j;
}

int main() {
    int result = printColorMap();
    assert(result == 25);
    std::cout << "All is well (maybe!)\n";
    return 0;
}
