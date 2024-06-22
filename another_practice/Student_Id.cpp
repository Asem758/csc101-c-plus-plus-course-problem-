#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <algorithm>
#include <ctime>
#include <cmath>
#include <string>
#include <cstdlib>
using namespace std;

class Student
{
private:
	int ID;
	string name;

public:
	Student();
	Student(int ID, string name);
	void setStudent(int ID, string name);
	int getID();
	string getName();
	void print();
};
Student::Student()
{
	ID = 0;
	name = "";
}
Student::Student(int ID, string name)
{
	this->ID = ID;
	this->name = name;
}

void Student::setStudent(int ID, string name)
{
	this->ID = ID;
	this->name = name;
}

int Student::getID()
{
	return ID;
}

string Student::getName()
{
	return name;
}


void Student::print()
{
	cout << "ID : " << ID << endl;
	cout << "Name : " << name << endl;
}
int main()
{
	Student s;
	int ID;
	string name;

	cout << "Enter ID ";
	cin >> ID;
	cout << "Enter name ";
	cin >> name;
	s.setStudent(ID, name);
	s.print();
	return 0;
}
/* I was thinking this added somewhere would do the part for classes registered, but it doesn't and just crashes the program.
int const size = 1000;
	int i = 0;
	char x[size];
	cout << "enter your courses";
	cin.getline(x, size);
	while (x[i] != '/0') {
		cout << x[i];
			i++;
	}
	cout << endl;
*/
