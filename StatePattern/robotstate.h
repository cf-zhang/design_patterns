#ifndef ROBOTSTATE_H
#define ROBOTSTATE_H


class RobotState
{
public:
    virtual void followBtnClicked() = 0;
    virtual void naviBtnClicked() = 0;
};

#endif // ROBOTSTATE_H
