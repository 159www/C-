#include "Person.h"
#include<iostream>
#include <string>
using namespace std;
void Person::show()//ʵ�ֳ�Ա����
{
	std::cout << "����:" << age << std::endl;
	std::cout << "�Ա�:" << sex << std::endl;
	std::cout << "���ʣ�" << money << std::endl;
}

//�����б�   ��Ա����(��Ӧ����)����Ա����(��Ӧ����)........
Person::Person(int age1, string sex1,int money1,string name1):age(age1),sex(sex1),money(money1),name(name1){}


