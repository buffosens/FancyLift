//
// Created by Buffo on 09.12.2018.
//

#ifndef FANCYLIFT_HOUSE_H
#define FANCYLIFT_HOUSE_H

#include "Lift.h"

class House
{
public:
    House(Lift newLift, unsigned int maxLevel);

private:
    Lift lift;
    unsigned int maxLevel;
};


#endif //FANCYLIFT_HOUSE_H
