#include "phone_book.hpp"

int	main(void)
{
	// PhoneBook	phone_book;
	std::string	input;
	std::string	data[5];

	while (1)
	{
		std::cout << "Please enter one of this options \033[35m[ADD, SEARCH, EXIT]\033[0m\n";
		std::cout << "\033[1;32mPhoneBook>\033[0m ";
		std::getline(std::cin, input);
		if (input == "ADD")
		{
			std::cout << "Enter Contact Information\n";
			//first name
			std::cout << "First Name: ";
			std::getline(std::cin, data[0]);
			data[0] = is_empty(data[0], "First Name");

			//last name
			std::cout << "Last Name: ";
			std::getline(std::cin, data[1]);
			data[1] = is_empty(data[1], "Last Name");

			//Nickname
			std::cout << "Nickname: ";
			std::getline(std::cin, data[2]);
			data[2] = is_empty(data[2], "Nickname");

			//Nickname
			std::cout << "Phone number: ";
			std::getline(std::cin, data[3]);
			data[3] = is_empty(data[3], "Phone number");

			//Darkest secret
			std::cout << "Darkest secret: ";
			std::getline(std::cin, data[4]);
			data[4] = is_empty(data[4], "Darkest secret");
		}
		else
		{
			std::cout << "\033[31mInvalid input\033[0m\n";
		}
		// else if (input == "SEARCH")
		// {

		// }
		// else if (input == "EXIT")
		// {

		// }
	}
	// parsing(void);
}
