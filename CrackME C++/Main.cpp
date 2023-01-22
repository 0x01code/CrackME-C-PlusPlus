#include <iostream>

int main()
{
	std::string password = "MyPassword";
	std::string input;

	std::cout << "Input Password: ";
	std::cin >> input;

	if (password == input)
	{
		std::cout << "Good Job" << std::endl;
	}
	else 
	{
		std::cout << "Password Incorect." << std::endl;
	}

	system("pause");

}