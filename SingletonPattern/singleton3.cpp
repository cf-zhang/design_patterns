#include "singleton3.h"

#include <mutex>
Singleton3 *Singleton3::instance = nullptr;


Singleton3::Singleton3()
{

}
Singleton3 *Singleton3::getInstance()
{
    static std::mutex m;
    m.lock();
    if(nullptr == instance){
        instance = new Singleton3;
    }
    m.unlock();
    return instance;
}
