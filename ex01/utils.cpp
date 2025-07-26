#include "phone_book.hpp"

int	check_str_pure(std::string str, int index)
{
	int	i;
	int	check;

    check = -1;
    if (index == 1)
    {
        i = 0;
        while (str[i])
        {
            if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
            {
                std::cout << "i'm alpha\n";
                i++;      
            }
            else
            {
                // std::cout << "i'm not alpha\n";
                std::cout << "\033[31mInvalid input [Your input should contain just alphabets !]\033[0m\n";
                return (check) ;
            }
            check = 0;
        }
    }
    else if (index == 2)
    {
        i = 0;
        while (str[i])
        {
            if (str[i] >= '0' && str[i] <= '9')
                i++;
            else
            {
		    	std::cout << "\033[31mInvalid input [Your input should contain just numbers !]\033[0m\n";
                return (check) ;
            }
            check = 1;
        }
    }
	return (check);
	// 0 ==> all alpha | 1 ==> all nbr | -1 not pure
}

int	parsing(std::string data, std::string action)
{
    // check_str_pure(data, 1);
    if (action == "First Name" || action == "Last Name")
	{
        if (check_str_pure(data, 1) == -1)
		{
			// std::cout << "\033[31mInvalid input [Your input should contain just alphabets !]\033[0m\n";
			return (0);
		}
		else
			return (1);
	}
	else if (action == "Phone number")
	{
		if (check_str_pure(data, 2) == -1)
		{
			// std::cout << "\033[31mInvalid input [Your input should contain just numbers !]\033[0m\n";
			return (0);
		}
		else
			return (1);
	}
	return (1);
}

std::string	is_empty(std::string data, std::string action)
{
    int	i;
	// int	check;

    while (1)
    {
        if (data.empty())
        {
            std::cout << "\033[31mInvalid input\033[0m\n";
            std::cout << action << ": ";
            std::getline(std::cin, data);
        }
        else if (action == "First Name" || action == "Last Name" || action == "Phone number")
        {
            if (action == "First Name" || action == "Last Name")
            {
                i = 0;
                while (data[i])
                {
                    if ((data[i] >= 'a' && data[i] <= 'z') || (data[i] >= 'A' && data[i] <= 'Z'))
                    {
                        // std::cout << "i'm alpha\n";
                        i++;      
                    }
                    else
                    {
                        // std::cout << "i'm not alpha\n";
                        std::cout << "\033[31mInvalid input [Your input should contain just alphabets !]\033[0m\n";
                    }
                }
            }
            else
            {
                 i = 0;
                while (data[i])
                {
                    if (data[i] >= '0' && data[i] <= '9')
                        i++;
                    else
                    {
		            	std::cout << "\033[31mInvalid input [Your input should contain just numbers !]\033[0m\n";
                    }
                }
            }
            std::cout << action << ": ";
            std::getline(std::cin, data);
        }
        else
            break ;
    }
	// while (data.empty() || parsing(data, action) == 0)
	// {
	// 	if (data.empty())
	// 	{
	// 		std::cout << "\033[31mInvalid input\033[0m\n";
	// 		std::cout << action;
	// 		std::getline(std::cin, data);
	// 	}
    //     else if (parsing(data, action) == 0)
    //     {
    //         std::cout << action;
	// 		std::getline(std::cin, data);
    //     }
	// 	else
	// 		break ;
	// }
	return (data);
}
