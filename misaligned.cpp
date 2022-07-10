#include <assert.h>
#include <iomanip>
#include "misaligned.hpp"
using namespace std;

#define MAJORCOLORELEMENT 5  //MAJORCOLORELEMENT defines number of Major Color
#define MINORCOLORELEMENT 5  //MINORCOLORELEMENT defines number of Minor Color

std::string displayColorPairOnConsole(int majorIndex, int minorIndex)
{
    std::ostringstream a;
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};

    a<<left<<setw(4)<<(majorIndex * MAJORCOLORELEMENT + minorIndex ) << " | " <<left<<setw(10)<< majorColor[majorIndex] << " | " << minorColor[minorIndex]<<"\0";

    return a.str();
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
