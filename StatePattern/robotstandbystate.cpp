#include "robotstandbystate.h"
#include "iostream"
RobotStandbyState::RobotStandbyState(XRobot *robot)
{
    this->robot = robot;
}

void RobotStandbyState::followBtnClicked()
{
    std::cout<<"RobotStandbyState followBtnClicked."<<std::endl;

    robot->setState(robot->getFollowstate());
}
void RobotStandbyState::naviBtnClicked()
{

    std::cout<<"RobotStandbyState naviBtnClicked."<<std::endl;
    robot->setState(robot->getNavistate());

}


