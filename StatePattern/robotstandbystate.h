#ifndef ROBOTSTANDBYSTATE_H
#define ROBOTSTANDBYSTATE_H

#include "xrobot.h"
#include "robotstate.h"
class RobotStandbyState : public RobotState
{
public:
    RobotStandbyState(XRobot *robot);

    void followBtnClicked();
    void naviBtnClicked();
private:
    XRobot *robot;
};

#endif // ROBOTSTANDBYSTATE_H
