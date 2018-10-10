#include "xrobot.h"
#include "robotabnormalstate.h"
#include "robotfollowpausestate.h"
#include "robotfollowstate.h"
#include "robotmanualstate.h"
#include "robotnavipausestate.h"
#include "robotnavistate.h"
#include "robotstandbystate.h"

XRobot::XRobot()
{

    followstate         = new RobotFollowState(this);
    navistate           = new RobotNaviState(this);
    standbystate        = new RobotStandbyState(this);

    curState = getStandbystate();

}
XRobot::~XRobot(){
}

void XRobot::followBtnClicked(){
    curState->followBtnClicked();
}
void XRobot::naviBtnClicked(){
    curState->naviBtnClicked();
}
