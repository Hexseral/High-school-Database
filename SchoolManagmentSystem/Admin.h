/** @file Admin.h
 *
 *  @author Jordan Tatum
 *  @bug No known bugs.
 */
// LO6 Encapsulated feilds used in Admin.
#include <iostream>
#include "User.h"
#ifndef ADMIN_H
#define ADMIN_H

using namespace std;

class Admin : public User {          // Admin class inherited from User
private:                             // Access specifier (LO6.)
	bool   done = false;
	string testUsername;
	string testPassword;
	string password;                 // Admin Account Password
	string username;                 // Admin Account Username

public:                              // Access specifier (LO6.)

	void accountCreate();
	void mainMenu();                 // Main menu prompt with login
	void menuLogin();

};
#endif
