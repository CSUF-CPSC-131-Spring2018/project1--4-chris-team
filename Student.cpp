#include "Student.h"

#include <iostream>
#include <iomanip>

Student::Student() {
	courseNum = 0;
	cwid = " ";
	// TO BE COMPLETED

}

Student::Student(const string &cwid) {
	this->cwid = cwid;
	courseNum = 0;
	// TO BE COMPLETED

}

string Student::getCWID() {
	
	return cwid;
	// TO BE COMPLETED
}

void Student::addCourseGrade (const string &courseName, char grade) {
	
	this->courseName[courseNum] = courseName;
	this->grade[courseNum] = grade;
	courseNum++;
	// TO BE COMPLETED

}

double Student::getGPA() {
	
	double value = 0.0;
	for (int i = 0; i < courseNum; i++) {
		if (grade[i] = 'A') {
			value += 4;
		}
		else if (grade[i] = 'B') {
			value += 3;
		}
		else if (grade[i] = 'C') {
			value += 2;
		}
		else if (grade[i] = 'D') {
			value += 1;
		}
		else if (grade[i] = 'F') {
			value += 0;
		}
	}
	return (double)value / courseNum;
	
	
	// TO BE COMPLETED

}

// print transcript in this (sample) format:
// TRANSCRIPT FOR CWID=279750343
// CS 121		C
// CS 253		B
// CS 131		B
// GPA = 2.6667
void Student::printTranscript() {
	double value = 0.0;
	cout << "TRANSCRIPT FOR CWID=" << cwid;
	for (int i = 0; i < courseNum; i++) {
		cout << endl << courseName[i] << "	" << grade[i];
		value += 4 - (grade[i] - 'A');
	}
	cout << "GPA = " << getGPA()<<endl;
	
	// TO BE COMPLETED

}
