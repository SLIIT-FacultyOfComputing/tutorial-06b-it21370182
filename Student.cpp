#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;
// Assign studentId and name
void Student::assignDetails(int studentid, char sname[]) {
  studentId=studentid;
  strcpy(name,sname);
}

// Display StudentId and Name
void Student::display() {
  cout<<"Student Id"<<"\t\t"<<"Name"<<endl;
  cout<<"==============================\n";
  cout<<studentId<<"\t\t"<<name;
}

