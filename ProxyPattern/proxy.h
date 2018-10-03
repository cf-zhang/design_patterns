#ifndef PROXY_H_
#define PROXY_H_
#include "subject.h"
#include "realsubject.h"
class Proxy:public Subject{

public:
	Proxy(){
		m_pRealSubject = new RealSubject();
	}
	~Proxy(){
		delete m_pRealSubject;
	}

	void request();

private:
	void afterRequest(){
		std::cout<<"do some work after request."<<std::endl;
	}
	void preRequest(){
		
		std::cout<<"do some work before request."<<std::endl;
	}
	RealSubject *m_pRealSubject;
		
};
void Proxy::request(){
		preRequest();
		m_pRealSubject->request();
		afterRequest();
	}
#endif
