#include "Person.h"
#pragma once
 class  Worker:public Person //�����๫�м̳�����
{
	 
public:
	//virtual void get_up() override; //��д����Person���麯��get_up
	void get_up();
	Worker(int age1, string sex1, int money1, string name1) ;
};

