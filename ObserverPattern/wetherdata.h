#ifndef WETHERDATA_H
#define WETHERDATA_H
#include "subject.h"
#include <vector>
#include <algorithm>
#include "observer.h"
class WeatherData:public Subject{
public:
    WeatherData(){
        observers.clear();
    }
    void registerObserver(Observer *o){
        observers.push_back(o);
    }
    void removeObserver(Observer *o){
//        std::vector<Observer>::iterator i;
        size_t i;
        for(i = 0; i < observers.size(); i++)
        {
            if(&observers[i] == &o)
                observers.pop_back();
        }
    }
    void notifyObserver(){
        size_t i;
        for(i = 0; i < observers.size(); i++){

            observers[i]->update(temperature,humidity,pressure);
        }
    }

    float getTemperature(){
        return temperature;
    }
    float getHumidity(){
        return humidity;
    }
    float getPresser(){
        return pressure;
    }
    void measurementChanged(){
        notifyObserver();
    }
    void setMeasurements(float temperature, float humidity, float pressure){
        this->temperature = temperature;
        this->humidity = humidity;
        this->pressure = pressure;
        measurementChanged();
    }
private:
    std::vector<Observer*> observers;
    float temperature;
    float humidity;
    float pressure;
};
#endif // WETHERDATA_H
