#include"Worker.h"
void Worker:: get_up()
{ 
	
	std::cout << "工人醒了" << std::endl;
}
Worker::Worker(int age1, string sex1, int money1, string name1) :Person(age1, sex1, money1, name1) {}//调用父类的构造函数

