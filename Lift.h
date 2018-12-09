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

class Lift
{
public:
    Lift();

    virtual ~Lift();

    unsigned int getCurrentLevel() const;

private:
    void ascend(void);

    void decend(void);

    void setCurrentLevel(unsigned int currentLevel);

    unsigned int currentLevel;

    void bing(void);

    liftDoorState doorState;
};


#endif //FANCYLIFT_LIFT_H
