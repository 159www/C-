#pragma once
#include<string.h>
#include<iostream>
using namespace std;
class Person
{ 
	
private:  //˽�г�Ա����
	int age;
	string sex;
	string name;
	int money;
public:  //���г�Ա���������ṩ����˽�б����Ľӿ�
	void show();
	Person(int age, string sex,int money,string name);//���캯������
	virtual void get_up()=0;//�����麯��
	
};
