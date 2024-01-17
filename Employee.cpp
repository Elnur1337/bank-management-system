#include <iostream>
#include <functional>
#include <stdexcept>

#include "Employee.h"
#include "checkIfAll.h"
#include "hash.h"

Employee::Employee(const string& jmbgInput, const string& firstNameInput, const string& lastNameInput, const string& passwordInput, const string& roleInput)
{
	size_t hashPassword = hash(passwordInput);

	if (!(jmbgInput.size() == 13)) {
		std::cout << "nema 13\n";
		throw std::invalid_argument("Jmbg mora imati 13 karaktera!");
	}
	if (
		!checkIfAll<string, std::function<bool(char)>>(jmbgInput, [](char el) {
			if (el >= 48 && el <= 57) {
				return true;
			}
			return false;
			}
		)
		) {
		throw std::invalid_argument("Jmbg mora biti sacinjen samo od brojeva!");
	}
	
	jmbg = jmbgInput;
	firstName = firstNameInput;
	lastName = lastNameInput;
	password = hashPassword;
	role = roleInput;

}
