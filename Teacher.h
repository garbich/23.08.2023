#pragma once
#include "Person.h"
class Teacher :
    public Person
{
private:
	string subject; 

public:
	
	Teacher(string name, int age, string subject);

	string getSubject();

	void setSubject(string subject);

	void display() override;
};

