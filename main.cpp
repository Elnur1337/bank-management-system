#include <iostream>
#include <vector>
#include "Employee.h"

int main() {
	try
	{
		Employee e("1234567890122", "", "", "", "");
	}
	catch (const std::invalid_argument& e)
	{
		std::cout << e.what();
	}

	return 0;
}