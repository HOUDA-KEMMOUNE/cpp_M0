#include "phone_book.hpp"

int	main(void)
{
	PhoneBook	phone_book;
	static int	count;
	std::string	search_inp;
	int			contact_id;
	std::string	input;
	std::string	data[5];

	while (1)
	{
		std::cout << "\nPlease enter one of this options \033[35m[ADD, SEARCH, EXIT]\033[0m\n";
		std::cout << "\033[1;32mPhoneBook>\033[0m ";
		std::getline(std::cin, input);
		if (input == "ADD")
		{
			// count = 0;
			std::cout << "\033[35mEnter Contact Information\033[0m\n";

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
			
			if (count == 8)
				count = 0;
			phone_book.set_count(count);
			phone_book.set_contact(data[0], data[1], data[2], data[3], data[4]);
			std::cout << "\033[1;32mContact Added Successfully !\033[0m\n";
			count++;
		}
		else if (input == "SEARCH")
		{
			std::cout << "\033[35mEnter Contact ID [From 1 to 8]\033[0m\n";
			std::cout << "\033[35m-> (The 9th contact becomes the first ...etc)\033[0m\n";
			std::cout << "\033[35m-> (Enter 0 to exit from the SEARCH)\033[0m\n";
			std::cout << "\033[35m==> ID: \033[0m";
			std::getline(std::cin, search_inp);
			if (search_inp == "0")
				continue ;
			else if (search_inp == "1")
			{
				contact_id = 0;
				std::cout << "count: " << count << "\n";
				if (contact_id >= count)
					std::cout << "\033[31mWe don't have this contact in the list yet :/\033[0m\n";
				else
				{
					phone_book.get_contact(contact_id);
					continue ;
				}
			}
			else if (search_inp == "2")
			{
				contact_id = 1;
				if (contact_id >= count)
					std::cout << "\033[31mWe don't have this contact in the list yet :/\033[0m\n";
				else
				{
					phone_book.get_contact(contact_id);
					continue ;
				}
			}
			else if (search_inp == "3")
			{
				contact_id = 2;
				if (contact_id >= count)
					std::cout << "\033[31mWe don't have this contact in the list yet :/\033[0m\n";
				else
				{
					phone_book.get_contact(contact_id);
					continue ;
				}
			}
			else if (search_inp == "4")
			{
				contact_id = 3;
				if (contact_id >= count)
					std::cout << "\033[31mWe don't have this contact in the list yet :/\033[0m\n";
				else
				{
					phone_book.get_contact(contact_id);
					continue ;
				}
			}
			else if (search_inp == "5")
			{
				contact_id = 4;
				if (contact_id >= count)
					std::cout << "\033[31mWe don't have this contact in the list yet :/\033[0m\n";
				else
				{
					phone_book.get_contact(contact_id);
					continue ;
				}
			}
			else if (search_inp == "6")
			{
				contact_id = 5;
				if (contact_id >= count)
					std::cout << "\033[31mWe don't have this contact in the list yet :/\033[0m\n";
				else
				{
					phone_book.get_contact(contact_id);
					continue ;
				}
			}
			else if (search_inp == "7")
			{
				contact_id = 6;
				if (contact_id >= count)
					std::cout << "\033[31mWe don't have this contact in the list yet :/\033[0m\n";
				else
				{
					phone_book.get_contact(contact_id);
					continue ;
				}
			}
			else if (search_inp == "8")
			{
				contact_id = 7;
				if (contact_id >= count)
					std::cout << "\033[31mWe don't have this contact in the list yet :/\033[0m\n";
				else
				{
					phone_book.get_contact(contact_id);
					continue ;
				}
			}
			else
				std::cout << "\033[31mInvalid input: Enter Contact ID [From 1 to 8]\033[0m\n";
		}
		else if (input == "EXIT")
			return (0);
		else
			std::cout << "\033[31mInvalid input\033[0m\n";
	}
	// parsing(void);
}
