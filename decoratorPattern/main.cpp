#include <iostream>
#include "beverage.h" 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#include "beverage.h"
#include "espresso.h"
#include "mocha.h"
#include "whip.h"
int main(int argc, char** argv) {
	Beverage *drink = new Espresso();
	std::cout<<"hello world"<<std::endl;
	std::cout<<drink->getdescript()<<" : "<<drink->cost()<<std::endl;
	
	drink = new Whip(drink);
	std::cout<<drink->getdescript()<<std::endl;
	drink = new Mocha(drink);
	std::cout<<drink->getdescript()<<std::endl;
	std::cout<<drink->getdescript()<<" : "<<drink->cost()<<std::endl;
	
	
	return 0;
}
