#include "Person.h"
#pragma once
 class  Worker:public Person //工人类公有继承人类
{
	 
public:
	//virtual void get_up() override; //重写基类Person的虚函数get_up
	void get_up();
	Worker(int age1, string sex1, int money1, string name1) ;
};

