#include <stdlib.h>
#include "alerter.h"

int main()
{
    alertInCelcius(400.5);
    assert(alertFailureCount == 0);

    alertInCelcius(303.6);
    assert(alertFailureCount == 1);

    std::cout << alertFailureCount << " alerts failed.\n";
    std::cout << "All is well (maybe!)\n";
    return 0;
}
