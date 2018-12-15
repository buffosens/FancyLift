//
// Created by Buffo on 14.12.2018.
//

#ifndef FANCYLIFT_COMMAND_H
#define FANCYLIFT_COMMAND_H

enum class function
{
    IRIS_ON=0,
    IRIS_OFF=1,
    SET_UART=10,
};

enum class readWrite
{
    READ=0,
    WRITE=1
};

class Command
{
public:
    Command(function funcIn, readWrite readIn, unsigned int idx);
    ~Command();
    unsigned int index;
    function func;
    readWrite read;
};


#endif //FANCYLIFT_COMMAND_H
