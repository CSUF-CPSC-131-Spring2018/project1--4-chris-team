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
		cin >> courseName >> cwid >> grade;
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
	
	for (int i = 0; i <= 50000; i++)
	{
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
	// TO BE COMPLETED

}

