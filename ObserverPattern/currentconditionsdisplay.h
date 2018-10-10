#ifndef CURRENTCONDITIONSDISPLAY_H
#define CURRENTCONDITIONSDISPLAY_H
#include "observer.h"
#include "displayelement.h"
#include "subject.h"
#include "wetherdata.h"
class CurrentConditionsDisplay:public Observer,public DisplayElement{
public:
    CurrentConditionsDisplay(Subject *weatherData){
        this->weatherData = weatherData;
        this->weatherData->registerObserver(this);
    }
    void update(float temp, float humidity, float pressure)
    {
        pressure = pressure;
        this->temperature = temp;
        this->humidity = humidity;
        this->display();
    }
    void display(){
        std::cout<<"in currentconditiondisplay current conditions: temp "<<temperature<<" humidity: "<<humidity<<std::endl;
    }
private:
    Subject *weatherData;
    float temperature;
    float humidity;
};
#endif // CURRENTCONDITIONSDISPLAY_H
