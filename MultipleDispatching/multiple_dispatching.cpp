#include "mainwindow.h"
#include "temperature.h"
#include <boost/algorithm/string.hpp>
#include <QDebug>
#include <QApplication>
#include <iostream>
#include <typeinfo>
using namespace std;
class Paper;
class Scissors;
class Rock;

enum Outcome{WIN,LOSE,DRAW};

ostream& operator <<(ostream &os, const Outcome out){
    switch (out) {
    default:
    case WIN: return os << "WIN";
    case LOSE: return os << "LOSE";
    case DRAW: return os << "DRAW";
    }
}

class Item
{
public:
    virtual Outcome compete(const Item *) = 0;
    virtual Outcome eval(const Paper *) const = 0;
    virtual Outcome eval(const Scissors *) const = 0;
    virtual Outcome eval(const Rock *) const = 0;
    virtual ostream& print(ostream &os) const = 0;
    virtual ~Item(){}
    friend ostream& operator << (ostream &os, const Item *it){
        return it->print(os);
    }
};

class Paper : public Item{
public:
    Outcome compete(const Item *it){return it->eval(this);}
    Outcome eval(const Paper *) const {return DRAW;}
    Outcome eval(const Scissors *) const {return WIN;}
    Outcome eval(const Rock *) const {return LOSE;}
    ostream& print(ostream &os) const { return os << "Paper  ";}
};


class Rock : public Item{
public:
    Outcome compete(const Item *it){return it->eval(this);}
    Outcome eval(const Paper *) const {return DRAW;}
    Outcome eval(const Scissors *) const {return WIN;}
    Outcome eval(const Rock *) const {return LOSE;}
    ostream& print(ostream &os) const { return os << "Paper  ";}
};


class Scissors : public Item{
public:
    Outcome compete(const Item *it){return it->eval(this);}
    Outcome eval(const Paper *) const {return DRAW;}
    Outcome eval(const Scissors *) const {return WIN;}
    Outcome eval(const Rock *) const {return LOSE;}
    ostream& print(ostream &os) const { return os << "Rock  ";}
};

struct ItemGen
{
    Item *operator()(){
        switch (rand() % 3) {
        default:
        case 0: return new Scissors;
        case 1: return new Paper;
        case 2: return new Rock;
        }
    }
};

struct Compete
{
    Outcome operator()(Item *a, Item *b){
        cout << a << "\t" << b << "\t";
        return a->compete(b);
    }
};

int main(int argc, char *argv[])
{
    srand(time(0));
    const int sz = 20;
    vector<Item*> v(sz*2);
    generate(v.begin(), v.end(), ItemGen());
    transform(v.begin(), v.begin() + sz, v.begin() + sz, ostream_iterator<Outcome>(cout, "\n"), Compete());
}

