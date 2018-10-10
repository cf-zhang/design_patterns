#include <iostream>
#include "xrobot.h"
using namespace std;

int main()
{
    XRobot *robot = new XRobot;
    robot->followBtnClicked();
    robot->followBtnClicked();
    robot->naviBtnClicked();
    robot->followBtnClicked();

    return 0;
}
