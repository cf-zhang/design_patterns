#include "mainwindow.h"
#include "temperature.h"
#include <boost/algorithm/string.hpp>
#include <QDebug>
#include <QApplication>
#include <iostream>
#include <typeinfo>
#include <sstream>
using namespace std;

class Beignet;
class Cruller;

class PastryVisitor {
public:
    void visitBeignet(Beignet &beignet){
        std::cout<<"visit beignet"<<std::endl;
    }
    void visitCruller(Cruller &cruller){
        std::cout<<"visit cruller"<<std::endl;
    }
};



class Pastry
{
public:
    virtual void accept(PastryVisitor visitor) = 0;
};

class Beignet : public Pastry {
public:
    void accept(PastryVisitor visitor) {
      visitor.visitBeignet(*this);
    }
};

class Cruller : public Pastry {
public:
    void accept(PastryVisitor visitor) {
      visitor.visitCruller(*this);
    }
};
int main(int argc, char *argv[])
{
    Beignet b;
    Cruller c;

    PastryVisitor visitor;
    b.accept(visitor);
    c.accept(visitor);

    return 0;
}


