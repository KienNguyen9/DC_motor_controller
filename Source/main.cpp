#include "motor.h"
#include "feedback.h"
#include "motorcontroller.h"

int main()
{
    //set up
    double voltage, max_current;
    std::cout << "Enter voltage: " << '\n';
    std::cin >> voltage;
    std::cout << "Enter max current: " << '\n';
    std::cin >> max_current;

    DC_Motor motor1(12,2);

    double dataReadFromHeatSensor;
    double dataReadFromLoadSensor;
    Feedback_System feedback(&dataReadFromHeatSensor , &dataReadFromLoadSensor);

    Motor_Controller motor_controller(voltage, max_current, &motor1, &feedback);

    //loop
    while (1)
    {
        motor_controller.checkStop();
    }
    

    return 0;
}
