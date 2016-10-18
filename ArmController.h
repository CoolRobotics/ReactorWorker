#include "Servo.h"

class ArmController {
  public:
    ArmController();
    void setup();
    void dropDown();
    bool isDropDownFinish();
    void liftUp();
    bool isLiftedUp();
    void dropDownAtReactor();
    bool isDropDownAtReactorDone();
    void dropDownMoreAtReactor();
    bool isDropDownMoreAtReactorDone();

  private:
    int lowerLimitSwitchPin;
    int upperLimitSwitchPin;
    Servo armServo;
};
