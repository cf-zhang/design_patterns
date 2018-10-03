#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#include "proxy.h"
int main(int argc, char** argv) {
	std::cout<<"hello world."<<std::endl;
	Proxy proxy;
	proxy.request();
	return 0;
}
