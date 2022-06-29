#include <iostream>
#include <assert.h>

#define MAJORCOLORELEMENT 5  //MAJORCOLORELEMENT defines number of Major Color
#define MINORCOLORELEMENT 5  //MINORCOLORELEMENT defines number of Minor Color

std::string displayColorPairOnConsole(int majorIndex, int minorIndex)
{
    std::string colorPair;
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};

    colorPair = std::to_string(majorIndex * MAJORCOLORELEMENT + minorIndex)  + " | " +  majorColor[majorIndex] + " | " + minorColor[minorIndex] << "\n";

    return colorPair;
}

int printColorMap()
{
    for(int i = 0; i < MAJORCOLORELEMENT; i++)
    {
        for(int j = 0; j < MAJORCOLORELEMENT; j++)
        {
            std::cout << displayColorPairOnConsole(i, j) << std::endl;
        }
    }
    return i * j;
}

int main()
{
    int result = printColorMap();
    assert(result == 25);
    assert(displayColorPairOnConsole(1,1).compare("6 | Red | Orange"));
    assert(displayColorPairOnConsole(2,3).compare("13 | Yellow | Slate"));
    assert(displayColorPairOnConsole(1,0).compare("5 | Red | Blue"));
    
    std::cout << "All is well (maybe!)\n";
    return 0;
}
