#ifndef STATICSDISPLAY_H
#define STATICSDISPLAY_H
#include "observer.h"
#include "displayelement.h"
#include "subject.h"


class StaticsDisplay:public Observer,public DisplayElement{
public:
    StaticsDisplay(Subject *weatherData){
        this->weatherData = weatherData;
        weatherData->registerObserver(this);
    }
    void update(float temp, float humidity, float pressure)
    {
        this->temperature = temp;
        this->humidity = humidity;
        this->pressure = pressure;
        this->display();
    }
    void display(){
        std::cout<<"in currentconditiondisplay current conditions: temp "<<temperature<<" humidity: "<<humidity<<" pressure: "<<pressure<<std::endl;
    }
private:
    Subject *weatherData;
    float temperature;
    float humidity;
    float pressure;
};
#endif // STATICSDISPLAY_H
