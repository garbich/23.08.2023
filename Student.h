#pragma once
#include "Person.h"
#include <iostream>
using namespace std;

class Student :
    public Person
{

	private:
		int marks[14]; 

	public:
		
		Student(string, int);

		int averageMark();

		void display() override;
};

