#ifndef ROBOTFOLLOWSTATE_H
#define ROBOTFOLLOWSTATE_H
#include "xrobot.h"
#include "robotstate.h"

class RobotFollowState : public RobotState
{
public:
    RobotFollowState(XRobot *robot);

    void followBtnClicked();
    void naviBtnClicked();
    void resetBtnClicked();
    void abnormalityHasOccurred();
    void switchToManualModeEventOccurred();
private:
    XRobot *robot;
};

#endif // ROBOTFOLLOWSTATE_H
