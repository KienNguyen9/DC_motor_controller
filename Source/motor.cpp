

#include "motor.h"

DC_Motor::DC_Motor(double voltage, double max_current)
{
    Voltage = voltage;
    Max_Current = max_current;
    Speed = 0;
    Motor_Status = Stop;
}

void DC_Motor::setSpeed(double speed)
{
    Speed = speed;
}

void DC_Motor::setDirection(Direction direction)
{
    Motor_Direction = direction;
}

void DC_Motor::startRunning()
{
    Motor_Status = Running;
}

void DC_Motor::stopRunning()
{
    Motor_Status = Stop;
}

bool DC_Motor::isRunning()
{
    return (Motor_Status == Running);
}
