#include "phone_book.hpp"

// int	check_str_pure(std::string str, int index)
// {
// 	int	i;
// 	int	check;

//     check = -1;
//     if (index == 1)
//     {
//         i = 0;
//         while (str[i])
//         {
//             if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
//             {
//                 std::cout << "i'm alpha\n";
//                 i++;      
//             }
//             else
//             {
//                 // std::cout << "i'm not alpha\n";
//                 std::cout << "\033[31mInvalid input [Your input should contain just alphabets !]\033[0m\n";
//                 return (check) ;
//             }
//             check = 0;
//         }
//     }
//     else if (index == 2)
//     {
//         i = 0;
//         while (str[i])
//         {
//             if (str[i] >= '0' && str[i] <= '9')
//                 i++;
//             else
//             {
// 		    	std::cout << "\033[31mInvalid input [Your input should contain just numbers !]\033[0m\n";
//                 return (check) ;
//             }
//             check = 1;
//         }
//     }
// 	return (check);
// 	// 0 ==> all alpha | 1 ==> all nbr | -1 not pure
// }

// int	parsing(std::string data, std::string action)
// {
//     // check_str_pure(data, 1);
//     if (action == "First Name" || action == "Last Name")
// 	{
//         if (check_str_pure(data, 1) == -1)
// 		{
// 			// std::cout << "\033[31mInvalid input [Your input should contain just alphabets !]\033[0m\n";
// 			return (0);
// 		}
// 		else
// 			return (1);
// 	}
// 	else if (action == "Phone number")
// 	{
// 		if (check_str_pure(data, 2) == -1)
// 		{
// 			// std::cout << "\033[31mInvalid input [Your input should contain just numbers !]\033[0m\n";
// 			return (0);
// 		}
// 		else
// 			return (1);
// 	}
// 	return (1);
// }

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
