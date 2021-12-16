/** @file Course.h
 *
 *  @author Jordan Tatum
 *  @bug No known bugs.
 */
// LO6 Encapsulated feilds used in Course.
#include <iostream>
#ifndef COURSE_H
#define COURSE_H
using namespace std;

class Course {							// Course class
private:                                // Access specifier
	string newGradeLevel;               // Level of course
	string newClassroom;                // Room number of class 
	string newTeacher;                  // Teacher of Coursetest 
public:
	// Default Constructor
	Course();

	// LO1 B: Overloaded Constructor 
	Course(string, string, string);

	// Acessor functions
	string getGradeLevel() const;
	string getClassroom() const;
	string getTeacher() const;

	// Mutator Function
	void setGradeLevel(string);
	void setClassroom(string);
	void setTeacher(string);
};
#endif