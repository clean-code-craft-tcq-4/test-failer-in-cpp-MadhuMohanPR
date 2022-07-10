#include <iostream>
#include <assert.h>
#include <iomanip>
#include "misaligned.hpp"
using namespace std;

#define MAJORCOLORELEMENT 5  //MAJORCOLORELEMENT defines number of Major Color
#define MINORCOLORELEMENT 5  //MINORCOLORELEMENT defines number of Minor Color

std::string displayColorPairOnConsole(int majorIndex, int minorIndex)
{
    std::ostringstream colorPair;
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};

    colorPair<<left<<setw(4)<<(majorColorIdx * MAJORCOLORELEMENT + minorColorIdx ) << " | " <<left<<setw(10)<< majorColor[majorColorIdx] << " | " << minorColor[minorColorIdx]<<"\0";

    return colorPair.str();
}

int printColorMap()
{
    int i = 0, j = 0;
    for(i = 0; i < MAJORCOLORELEMENT; i++)
    {
        for(j = 0; j < MAJORCOLORELEMENT; j++)
        {
            std::cout << displayColorPairOnConsole(i, j) << std::endl;
        }
    }
    return i * j;
}
