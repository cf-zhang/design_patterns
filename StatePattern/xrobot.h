#ifndef XROBOT_H
#define XROBOT_H

#include "robotstate.h"

//#include "communicationwithserver.h"

class XRobot
{

public:
    XRobot();
    ~XRobot();

    void setState(RobotState *state){curState = state;}
    RobotState *getCurState(){return curState;}
    RobotState *getFollowstate(){return followstate;}
    RobotState *getNavistate(){return navistate;}
    RobotState *getStandbystate(){return standbystate;}

    void followBtnClicked();
    void naviBtnClicked();
private:

    RobotState *followstate;
    RobotState *navistate;
    RobotState *standbystate;

    RobotState *curState;

};

#endif // XROBOT_H
