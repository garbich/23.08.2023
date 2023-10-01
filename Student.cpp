#include "Student.h"

Student::Student(string name, int age) : Person(name, age) {

	for (int i = 0; i < 14; i++){

		marks[i] = rand() % 12;
	}
}

int Student::averageMark(){

	int averageMark = 0;

	for (int i = 0; i < 14; i++) {

		averageMark += marks[i];
	}
	return averageMark / 14; 
}

void Student::display(){
	cout << "name: " << getName() << endl;
	cout << "age: " << getAge() << endl;
	cout << "average mark: " << averageMark() << endl;
	cout << endl;
}