/** @file Admin.cpp
 *  @brief Admin functions for main menu prompt
 *
 *  Basic functions to build for creating an admin account.
 *
 *  @author Jordan Tatum
 *  @bug No known bugs.
 */
#include "Admin.h"
#include <string>

void Admin::accountCreate() {
	cout << "============= Create an Account =============\n" << endl;
	cout << "\tNew Admin Name: ";
	getline(cin, this->username);
	cout << "\tNew Admin Password: ";
	getline(cin, this->password);
}

void Admin::menuLogin() {

	cout << "\n============== Account Login  ==============" << endl;

	while (done == false) {
		cout << "\n\tAdmin Username: ";
		getline(cin, testUsername);
		cout << "\tAdmin Password: ";
		getline(cin, testPassword);
		if (testUsername == username && testPassword == password) {
			done = true;
		}
		else {
			cout << "\n\tFailed Login Attempt, Please Try again.\t\n";
		}
	}
}

void Admin::mainMenu() {
	// Main Menu Prompt
	std::cout << "\n" << std::string(75, '=') << std::endl;
	cout << "\n\tWelcome, " << username << "\n" << endl;
	cout << "======= School Database Managment System =======\n" << endl;
	cout << "\t 1. \tView All Students in School." << endl;
	cout << "\t 2. \tView All Teachers in School." << endl;
	cout << "\t 3. \tView All Courses in School." << endl;
	std::cout << "\n" << std::string(60, '=') << "\n" << std::endl;
	cout << "\t 4. \tAdd a new Student Profile in the System." << endl;
	cout << "\t 5. \tAdd a new Teacher Profile in the System." << endl;
	cout << "\t 6. \tAdd a new Course in the System." << endl;
	std::cout << "\n" << std::string(60, '=') << "\n" << std::endl;
	cout << "\t 7. \tRemove a Student Profile from the System." << endl;
	cout << "\t 8. \tRemove a Teacher Profile from the System." << endl;
	cout << "\t 9. \tRemove a Course from the System." << endl;
	std::cout << "\n" << std::string(60, '=') << "\n" << std::endl;
	cout << "\t 10. \tQuit." << endl;
	std::cout << "\n" << std::string(60, '=') << "\n" << std::endl;
}