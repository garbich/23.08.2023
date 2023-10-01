#pragma once
#include <iostream>
using namespace std;

class Person
{
private:
	string name; 
	int age;   

public:
	
	Person(string, int);
	
	string getName();
	int getAge();

	virtual void display();
};

