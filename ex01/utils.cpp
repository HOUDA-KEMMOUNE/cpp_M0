#include "phone_book.hpp"

std::string	is_empty(std::string data, std::string action)
{
    size_t	    i;
    char        c;
	int	        valid;

    while (1)
    {
        if (data.empty())
        {
            std::cout << "\033[31mInvalid input\033[0m\n";
            std::cout << action << ": ";
            std::getline(std::cin, data);
        }
        else if (action == "First Name" || action == "Last Name")
        {
            i = 0;
            valid = 1;
            while (i < data.length())
            {
                c = data[i];
                if (!std::isalpha(c)) //cause it returns 0 if it's not alpha
                {
                    std::cout << "\033[31mInvalid input [Your input should contain just alphabets !]\033[0m\n";
                    valid = 0;
                    break ;
                }
                i++;
            }
            if (valid == 1)
                return (data);
        }
        else if (action == "Phone number")
        {
            i = 0;
            valid = 1;
            while (i < data.length())
            {
                c = data[i];
                if (!std::isdigit(c)) //cause it returns 0 if it's not digit
                {
                    std::cout << "\033[31mInvalid input [Your input should contain just numbers !]\033[0m\n";
                    valid = 0;
                    break ;
                }
                i++;
            }
            if (valid == 1)
                return (data);
        }
        else
            return (data);

        std::cout << action << ": ";
        std::getline(std::cin, data);
    }
	return (data);
}
