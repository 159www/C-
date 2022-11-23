#include "Person.h"
#include<iostream>
#include <string>
using namespace std;
void Person::show()//实现成员函数
{
	std::cout << "年龄:" << age << std::endl;
	std::cout << "性别:" << sex << std::endl;
	std::cout << "工资：" << money << std::endl;
}

//参数列表   成员函数(对应阐述)，成员函数(对应阐述)........
Person::Person(int age1, string sex1,int money1,string name1):age(age1),sex(sex1),money(money1),name(name1){}


