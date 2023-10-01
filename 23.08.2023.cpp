#include <iostream>
#include "Person.h"
#include "Student.h"
#include "Teacher.h"
using namespace std;

int main()
{
	srand(time(NULL));

	Person* person[5];

	person[0] = new Student("Vasya", 15);
	person[1] = new Student("Vova", 16);
	person[2] = new Student("Andriy", 14);
	person[3] = new Teacher("Misha", 30, "Math");
	person[4] = new Teacher("Stepan", 54, "Sport");


	person[0]->display();
	person[1]->display();
	person[2]->display();
	person[3]->display();
	person[4]->display();
}

