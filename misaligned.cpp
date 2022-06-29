#include <stdlib.h>
#include "misaligned.h"

#define MAJORCOLORELEMENT 5  //MAJORCOLORELEMENT defines number of Major Color
#define MINORCOLORELEMENT 5  //MINORCOLORELEMENT defines number of Minor Color

std::string displayColorPairOnConsole(int majorIndex, int minorIndex)
{
    std::string colorPair;
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};

    colorPair = std::to_string(majorIndex * MAJORCOLORELEMENT + minorIndex)  + " | " +  (majorColor[majorIndex]) + " | " + (minorColor[minorIndex]);

    return colorPair;
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
