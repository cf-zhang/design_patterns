#ifndef SINGLETON3_H
#define SINGLETON3_H

class Singleton3
{
public:
    static Singleton3 *getInstance();
private:
    Singleton3();

    static Singleton3 *instance;

};

#endif // SINGLETON3_H
