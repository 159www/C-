#pragma once
#include<string.h>
#include<iostream>
using namespace std;
class Person
{ 
	
private:  //私有成员变量
	int age;
	string sex;
	string name;
	int money;
public:  //公有成员函数向外提供访问私有变量的接口
	void show();
	Person(int age, string sex,int money,string name);//构造函数声明
	virtual void get_up()=0;//声明虚函数
	
};
