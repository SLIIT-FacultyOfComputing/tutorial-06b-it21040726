#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;

    void Student::assignDetails(int sId, char sName[]){
    studentId = sId;
    strcpy(name,sName);
    }

    void Student::display(){
      cout << "---------------------------------" << end1;
      cout << "Student Id\t: " << studentId << end1;
      cout << "Student Name \t: " << name << end1;
    }
