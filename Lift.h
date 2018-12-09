//
// Created by Buffo on 08.12.2018.
//

#ifndef FANCYLIFT_LIFT_H
#define FANCYLIFT_LIFT_H


typedef enum liftDoorState_
{
    LIFT_DOOR_CLOSED,
    LIFT_DOOR_OPEN,
} liftDoorState;

typedef enum liftDirection_
{
    DOWN,
    UP
} liftDirection;

class Lift
{
public:
    Lift();

    virtual ~Lift();

    unsigned int getCurrentLevel() const;

    void call(unsigned int floor, liftDirection direction);

    void process(void);

private:
    void ascend(void);

    void decend(void);

    void setCurrentLevel(unsigned int currentLevel);

    unsigned int currentLevel;

    void bing(void);

    liftDoorState doorState;
};


#endif //FANCYLIFT_LIFT_H
