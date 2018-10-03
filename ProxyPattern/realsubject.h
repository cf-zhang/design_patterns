#ifndef REALSUBJECT_H_
#define REALSUBJECT_H_

#include "subject.h"
class RealSubject:public Subject{
public:
	RealSubject(){
		std::cout<<"create a concreate subject."<<std::endl;
	}
	void request(){
		std::cout<<"real subject is requested."<<std::endl;
	}
	~RealSubject(){
		
	}
};


#endif
