#include <iostream>
#include <string>
#include <"student.h">
using namespace std;


// CONSTRUCTOR
Student::Student()
{
  ID = 0;
  GPA = 0;
  Address = "";
  FName = "";
  LName = "";
}

// MODIFICATION MEMBER FUNCTIONS
void Student::setID (const int value)
{
     for(int index=0; index<20; index++)
     {
             value = (rand()%10)+1;
     }
     if(value>0 && value<9999)
             ID = value;
}

void Student::setAddress (const string value)
{
     cout << "Please enter new student's address: ";
     cin >> value;
     if(value != "")
             Address = value;
     else
          cout << "Please enter a valid address!";
}

void Student::setFName (const string value)
{
     cout << "Please enter new student's first name: ";
     cin >> value;
     if(value != "")
              FName = value;
     else
         cout << "Please enter student's first name!";
}

void Student::setLName (const string value)
{
     cout << "Please enter new student's last name: ";
     cin >> value;
     if(value != "")
              LName = value;
     else
         cout << "Please enter student's last name!";
}

void Student::setGPA(const int value)
{
     cout << "Please enter new student's GPA (ex: 3.8): ";
     cin >> value;
     if(value > 0 && value < 4)
              pages = value;
     else
         cout << "Please enter a valid GPA for the student!";
}




// CONSTANT MEMBER FUNCTIONS

int Student::getGPA(void) const
{
  return GPA;
}

int Student::getID(void) const
{
  return ID;
}

string Student::getFName(void) const
{
  return FName;
}

string Student::getLName(void) const
{
  return LName;
}

string Student::getAddress(void) const
{
  return Address;
}


void Student::display(void) const
{
    cout << "ID: " << ID << endl;
    cout << "Name: " << FName << " " << LName << endl;
    cout << "Address: " << Address << endl;
    cout << "GPA: " << GPA << endl;
}
