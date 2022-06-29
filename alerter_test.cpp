#include <stdlib.h>
#include "alerter.h"
#include "alerterstub.h"

int main()
{
    setalertertstub(200);
    alertInCelcius(400.5);
    assert(getAlertFailureCount() == 0);

    setalertertstub(500);
    alertInCelcius(303.6);
    assert(getAlertFailureCount() == 1);

    std::cout << alertFailureCount << " alerts failed.\n";
    std::cout << "All is well (maybe!)\n";
    return 0;
}
