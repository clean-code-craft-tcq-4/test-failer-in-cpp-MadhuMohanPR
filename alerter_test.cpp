#include <iostream>
#include <assert.h>.
#include <stdlib.h>
#include "alerter.hpp"
#include "alerterstub.hpp"

int alertertstub = 0;

void setalertertstub(int alertstub)
{
   alertertstub = alertstub;
}

int networkAlertStub(float celcius)
{
    std::cout << "ALERT: Temperature is " << celcius << " celcius.\n";
    // Return 200 for ok
    // Return 500 for not-ok
    // stub always succeeds and returns 200
    return alertertstub;
}

int main()
{
    setalertertstub(200);
    alertInCelcius(400.5);
    assert(getAlertFailureCount() == 0);

    setalertertstub(500);
    alertInCelcius(303.6);
    assert(getAlertFailureCount() == 1);

    std::cout << getAlertFailureCount() << " alerts failed.\n";
    std::cout << "All is well (maybe!)\n";
    return 0;
}
