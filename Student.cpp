#include "Student.h"

#include <iostream>

Student::Student() {
//constructor
	courseNum = 0;
	cwid = "";
}

Student::Student(const string &cwid) {
//Used to get access to private variable cwid
	this -> cwid = cwid;
}

string Student::getCWID() {
//Used to return cwid of the student
	return cwid;
}

void Student::addCourseGrade (const string &courseName, char grade) {
	this -> courseName[courseNum] = courseName;
	this -> grade[courseNum] = grade;
	//add courseNum to advance to next grade
	courseNum++;
}

double Student::getGPA() {
	double value = 0.0;
	for(int i = 0; i<courseNum; i++){
		if(grade[i] = 'A'){
			value += 4;
		}
		if(grade[i] = 'B'){
			value += 3;
		}
		if(grade[i] = 'C'){
			value += 2;
		}
		if(grade[i] = 'D'){
			value += 1;
		}
		if(grade[i] = 'F'){
			value += 0;
		}
	}
	//FINISH THIS
	return value/courseNum;
}

// print transcript in this (sample) format:
// TRANSCRIPT FOR CWID=279750343
// CS 121		C
// CS 253		B
// CS 131		B
// GPA = 2.6667
void Student::printTranscript() {
	

}

