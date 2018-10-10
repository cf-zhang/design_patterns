#include "robotnavistate.h"
#include "iostream"
RobotNaviState::RobotNaviState(XRobot *robot)
{
    this->robot = robot;
}
void RobotNaviState::followBtnClicked()
{
    std::cout<<"RobotNaviState followBtnClicked."<<std::endl;
    robot->setState(robot->getFollowstate());

}
void RobotNaviState::naviBtnClicked()
{
    std::cout<<"RobotNaviState naviBtnClicked. no sense"<<std::endl;

}
