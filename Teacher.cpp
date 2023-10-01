#include "Teacher.h"

Teacher::Teacher(string name, int age, string subject) : Person(name, age){
	
	this->subject = subject;
}

string Teacher::getSubject(){
	return subject;
}

void Teacher::setSubject(string subject){
	this->subject = subject;
}

void Teacher::display(){
	cout << "name: " << getName() << endl;
	cout << "age: " << getAge() << endl;
	cout << "subject: " << subject << endl;
	cout << endl;
}