#pragma once
#include <string>

using std::string;

class Employee {
private:
	string jmbg;
	string firstName;
	string lastName;
	string password;
	string role;
public:
	Employee() = default;
	Employee(const string&, const string&, const string&, const string&, const string&);

	string getJmbg() const { return jmbg; };
	string getFirstName() const { return firstName; };
	string getLastName() const { return lastName; };
	string getRole() const { return role; };

	void setJmbg(const string&);
	void setFirstName(const string&);
	void setLastName(const string&);
	void setPassword(const string&);
	void setRole(const string&);
};