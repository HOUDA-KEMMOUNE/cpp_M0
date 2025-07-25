#include "phone_book.hpp"

int	main(void)
{
	// PhoneBook	phone_book;
	std::string	input;
	std::string	data[5];

	while (1)
	{
		std::cout << "Please enter one of this options [ADD, SEARCH, EXIT]\n";
		std::cout << "\033[1;32mPhoneBook>\033[0m ";
		std::getline(std::cin, input);
		if (input == "ADD")
		{
			std::cout << "Enter Contact Information\n";
			std::cout << "First Name: ";
			std::getline(std::cin, data[0]);
			while (1)
			{
				if (data[0].empty())
					std::cout << "\033[31mInvalid input\033[0m\n";
				else
					break ;
			}
			std::cout << "Last Name: ";
			std::getline(std::cin, data[1]);
			while (1)
			{
				if (data[1].empty())
					std::cout << "\033[31mInvalid input\033[0m\n";
				else
					break ;
			}
			std::cout << "Nickname: ";
			std::getline(std::cin, data[1]);
			while (1)
			{
				if (data[2].empty())
					std::cout << "\033[31mInvalid input\033[0m\n";
				else
					break ;
			}
			std::cout << "Phone number: ";
			std::getline(std::cin, data[1]);
			while (1)
			{
				if (data[3].empty())
					std::cout << "\033[31mInvalid input\033[0m\n";
				else
					break ;
			}
			std::cout << "Darkest secret: ";
			std::getline(std::cin, data[1]);
			while (1)
			{
				if (data[4].empty())
					std::cout << "\033[31mInvalid input\033[0m\n";
				else
					break ;
			}
		}
		else
		{
			std::cout << "fdhjksjfjfdhj\n";
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
