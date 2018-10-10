#include "robotfollowstate.h"
#include "iostream"
RobotFollowState::RobotFollowState(XRobot *robot)
{
    this->robot = robot;
}
void RobotFollowState::followBtnClicked()
{
    std::cout<<"RobotFollowState followBtnClicked. no sense"<<std::endl;

}
void RobotFollowState::naviBtnClicked()
{
    std::cout<<"RobotFollowState naviBtnClicked."<<std::endl;
    robot->setState(robot->getNavistate());

}
