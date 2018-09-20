#ifndef CUP_H
#define CUP_H
#include <iostream>

class Cup
{
public:
    Cup();
    int getVolum(){return volum;}
    void fillCup(int v=10){volum = v;std::cout<<"the cup was filled."<<std::endl;}
    void wasDrank(int w){
        if(volum >= w){
            volum -= w;
        }else{
            fillCup(w-volum);
            volum = 0;
        }
    }
    void pourCup(){
        volum = 0;
        std::cout<<"the cup was poured."<<std::endl;
    }
private:
    int volum;
};

#endif // CUP_H
