#ifndef SINGLETON1_H
#define SINGLETON1_H


class Singleton1
{
public:
    static Singleton1 *getInstance();
private:
    Singleton1();

    static Singleton1 *instance;
};

#endif // SINGLETON1_H
