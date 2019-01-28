#include "mainwindow.h"
#include "temperature.h"
#include <boost/algorithm/string.hpp>
#include <QDebug>
#include <QApplication>
#include <iostream>
#include <typeinfo>
using namespace std;

class Gladiolus;
class Renuculus;
class Chrysanthemum;

class Visitor{
public:
    virtual void visit(Gladiolus *f) = 0;
    virtual void visit(Renuculus *f) = 0;
    virtual void visit(Chrysanthemum *f) = 0;
    virtual ~Visitor(){}
};

class Flower{
public:
    virtual void accept(Visitor &) = 0;
    virtual ~Flower(){}
};

class Gladiolus : public Flower{
public:
    virtual void accept(Visitor &v){
        v.visit(this);
    }
};

class Renuculus : public Flower{
public:
    virtual void accept(Visitor &v){
        v.visit(this);
    }
};

class Chrysanthemum : public Flower
{
public:
    virtual void accept(Visitor &v){
        v.visit(this);
    }
};

class StringVal : public Visitor{
    string s;
public:
    operator const string &() { return s;}
    virtual void visit(Gladiolus*){
        s = "Gladious";
    }
    virtual void visit(Renuculus*){
        s = "Renuculus";
    }
    virtual void visit(Chrysanthemum*){
        s = "Chrysanthemum";
    }
};

class Bee : public Visitor{
public:
    virtual void visit(Gladiolus*){
        cout << "Bee and Gladiolus" << endl;
    }
    virtual void visit(Renuculus*){
        cout << "Bee and Renuculus" << endl;
    }
    virtual void visit(Chrysanthemum *){
        cout << "Bee and Chrysanthemum" << endl;
    }
};

struct FlowerGen
{
    Flower *operator()(){
        switch (rand() % 3) {
        default:
        case 0: return new Gladiolus;
        case 1: return new Renuculus;
        case 2: return new Chrysanthemum;
        }
    }
};


int main(int argc, char *argv[])
{
    srand(time(0));
    vector<Flower*> v(10);
    generate(v.begin(), v.end(), FlowerGen());
    vector<Flower*>::iterator it;
    StringVal sval;
    for(it = v.begin(); it != v.end(); it++){
        (*it)->accept(sval);
        cout <<string(sval) << endl;
    }
    Bee bee;
    for(it = v.begin(); it != v.end(); it++){
        (*it)->accept(bee);
    }
}

