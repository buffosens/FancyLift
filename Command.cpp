//
// Created by Buffo on 14.12.2018.
//

#include "Command.h"

Command::Command(function funcIn, readWrite readIn, unsigned int idx) :
    func(funcIn),
    read(readIn),
    index(idx)
{

}

Command::~Command()
{

}

