#include <iostream>

#include "House.h"
#include "Lift.h"

int main()
{
    Lift fancyLift;

    unsigned int level = fancyLift.getCurrentLevel();

    House pentHouse(fancyLift, 4);

    while(1)
    {
        // lift process

        // sleep 1
    }

    std::cout << "The current level is: " << level << std::endl;

    return 0;
}