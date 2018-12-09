#include <iostream>

#include "House.h"
#include "Lift.h"

int main()
{
    Lift fancyLift;

    unsigned int level = fancyLift.getCurrentLevel();

    House pentHouse(fancyLift, 4);

    std::cout << "The current level is: " << level << std::endl;

    return 0;
}