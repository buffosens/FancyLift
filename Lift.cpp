//
// Created by Buffo on 08.12.2018.
//

#include <iostream>

#include "Lift.h"

Lift::Lift()
{
    Lift::currentLevel = 0;
}

Lift::~Lift()
{

}

unsigned int Lift::getCurrentLevel() const
{
    return currentLevel;
}

void Lift::setCurrentLevel(unsigned int currentLevel)
{
    Lift::currentLevel = currentLevel;
}

void Lift::ascend(void)
{
    Lift:currentLevel++;
}

void Lift::decend(void)
{
    Lift::currentLevel--;
}

void Lift::bing(void)
{
    std::cout << "Bing!" << std::endl;
}
