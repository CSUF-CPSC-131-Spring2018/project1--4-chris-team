#include <string>
#include <iostream>
#include <fstream>
#include <stdexcept>
#include "Registrar.h"

using namespace std;

// Load information from a text file with the given filename
// THIS FUNCTION IS COMPLETE
void Registrar::readTextfile(string filename) {
	ifstream myfile(filename);

	if (myfile.is_open()) {
		cout << "Successfully opened file " << filename << endl;
		string courseName;
		string cwid;
		char grade;
		while (myfile >> courseName >> cwid >> grade) {
			cout << cwid << " " << grade << endl;
			addLine(courseName, cwid, grade);
		}
		myfile.close();
	}
	else
		throw invalid_argument("Could not open file " + filename);
}

// return Student object corresponding to a given CWID
// getStudent must throw an exception if cwid is invalid
Student& Registrar::getStudent(string cwid) const {
	
	for (int i = 0; i < size; i++) {
		if (ptr[i].getCWID() == cwid)
		{
			return ptr[i];
		}
	}
	
	throw invalid_argument("Invalid cwid!");

	
	// TO BE COMPLETED
}

// process a line from the text file
void Registrar::addLine(string courseName, string cwid, char grade) {
	
	try 
	{
		Student & a = getStudent(cwid);
		a.addCourseGrade(courseName, grade);
	}
	catch(exception &e)
	{
		ptr[size] = Student(cwid);
		ptr[size].addCourseGrade(courseName, grade);
		size++;
	}
	// TO BE COMPLETED
}

Registrar::Registrar()
{
	ptr = new Student[50];
	size = 0;
}

Registrar::Registrar(const Registrar &reg)
{
	ptr = new Student[50];
	size = reg.size;
	for (int i = 0; i < size; i++)
	{
		ptr[i] = reg.ptr[i];
	}
}

Registrar & Registrar::operator=(const Registrar & reg)
{
	if (this != &reg)
	{
		delete[]ptr;
		size = reg.size;
		ptr = new Student[50];
		for (int i = 0; i < size; i++)
		{
			ptr[i] = reg.ptr[i];
		}
	}

	return *this;
}

