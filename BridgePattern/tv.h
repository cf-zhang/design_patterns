#ifndef TV_H
#define TV_H


class TV
{
public:
    TV();
    virtual void on() = 0;
    virtual void off() = 0;
    virtual void turnChannel(int channel)=0;

};
#endif // TV_H
