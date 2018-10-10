#ifndef SQUEAK_H
#define SQUEAK_H
class Squeak:public QuackBehavior{
public:
    void quack(){
        std::cout<<"Squeak."<<std::endl;
    }
};
#endif // SQUEAK_H
