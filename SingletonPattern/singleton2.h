#ifndef SINGLETON2_H
#define SINGLETON2_H


class Singleton2
{
public:
    static Singleton2* getInstance();
private:
    static Singleton2 *instance;

    Singleton2();
};

#endif // SINGLETON2_H
