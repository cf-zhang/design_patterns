#ifndef ROBOTNAVISTATE_H
#define ROBOTNAVISTATE_H
#include "xrobot.h"
#include "robotstate.h"

class RobotNaviState : public RobotState
{
public:
    RobotNaviState(XRobot *robot);

    void followBtnClicked();
    void naviBtnClicked();
    void resetBtnClicked();
    void abnormalityHasOccurred();
    void switchToManualModeEventOccurred();
private:
    XRobot *robot;
};

#endif // ROBOTNAVISTATUS_H
