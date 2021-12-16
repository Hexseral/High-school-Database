/** @file Course.cpp
 *
 *  @author Jordan Tatum
 *  @bug No known bugs.
 */
#include "Course.h"
#include <vector>
#include <string>

 // Default Constructor 
Course::Course() {
	newGradeLevel = " ";
}

// LO1 B: Overloaded Constructor LO1 C: Initization list (not really practical just demo)
Course::Course(string teach, string grade, string classroom) :newTeacher(teach),
newGradeLevel(grade), newClassroom(classroom) {
}

string Course::getTeacher() const {
	return newTeacher;
}

string Course::getGradeLevel() const {
	return newGradeLevel;
}

string Course::getClassroom() const {
	return newClassroom;
}

void Course::setTeacher(string teach) {
	newGradeLevel = teach;
}

void Course::setGradeLevel(string grade) {
	newGradeLevel = grade;
}

void Course::setClassroom(string classroom) {
	newClassroom = classroom;
}

void fillCourseVector(vector<Course>& newmyCourses)
{
	string Teacher;
	string GradeLevel;
	string Classroom;

	cout << "\n\tHow many Courses would you like to create? \t";
	int classSize;
	cin >> classSize;

	// flushes the newline out of buffer for getline to work after int input
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	for (int i = 0; i < classSize; i++) {

		cout << "\tCourse Teacher: ";
		getline(cin, Teacher);
		cout << "\tCourse Grade (9 - 12): ";
		getline(cin, GradeLevel);
		cout << "\tCourse Classroom: (4 Digit Rooom) ";
		getline(cin, Classroom);

		Course newCourse(Teacher, GradeLevel, Classroom);
		newmyCourses.push_back(newCourse);
		cout << endl;
	}
	cout << endl;
}

void printCourseVector(const vector<Course>& newmyCourses) {

	unsigned int size = newmyCourses.size();

	for (unsigned int i = 0; i < size; i++) {
		cout << "\tCourse Teacher: " << newmyCourses[i].getTeacher() << endl;
		cout << "\tCourse Grade: " << newmyCourses[i].getGradeLevel() << endl;
		cout << "\tCourse Classroom: " << newmyCourses[i].getClassroom() << "\n" << endl;
	}

}