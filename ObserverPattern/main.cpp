#include <iostream>
#include "wetherdata.h"
#include "currentconditionsdisplay.h"
#include "staticsdisplay.h"
#include <unistd.h>
using namespace std;

int main()
{
    WeatherData weatherData;
    CurrentConditionsDisplay *currentCon = new CurrentConditionsDisplay(&weatherData);
    StaticsDisplay *staticDis = new StaticsDisplay(&weatherData);

    weatherData.setMeasurements(1.0,2.3,3.4);
    sleep(5);
    weatherData.setMeasurements(1.3,4.3,4.4);
    sleep(5);
    weatherData.setMeasurements(1.2,3.3,5.4);


    return 0;
}
