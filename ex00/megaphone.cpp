#include <iostream>
#include <string>

int	check_str(char c)
{
	if ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'))
		return (1); //the character should be upper (TODO)
	else
		return (0); //should do nothing
}

int	is_space(char c)
{
	if (c == '\0')
		return (-1);
	if ((c >= 9 && c <= 13) || c == 32)
		return (1); //is space
	else
		return (0); //isn't space
}

int	end_of_word(char *ret)
{
	int	i;

	i = 0;
	while (ret)
	{
		if ((is_space(ret[i]) == 0) && (is_space(ret[i + 1]) == 1 || is_space(ret[i + 1]) == -1)) 
		{
			if (is_space(ret[i]) == 0 && is_space(ret[i + 1]) == -1)
				break ;
			else
			{
				i++;
				while ((is_space(ret[i]) == 1 || is_space(ret[i]) == -1))
				{
					if (is_space(ret[i]) == -1)
						break ;
					else
					{
						i++;
					}
				}
			}
		}
		i++;
	}
}

char	*skip_spaces(char *str)
{
	int		i;
	// int		start;
	char	*ret;

	i = 0;
	while (is_space(*str) == 1 || is_space(*str) == -1)
	{
		if (is_space(*str) == -1)
			break ;
		i++;
		str++;
	}
	i = 0;
	ret = str;
	// while (ret)
	// {
	// 	if ((is_space(ret[i]) == 0) && (is_space(ret[i + 1]) == 1 || is_space(ret[i + 1]) == -1)) 
	// 	{
	// 		if (is_space(ret[i]) == 0 && is_space(ret[i + 1]) == -1)
	// 			break ;
	// 		else
	// 		{
	// 			i++;
	// 			while ((is_space(ret[i]) == 1 || is_space(ret[i]) == -1))
	// 			{
	// 				if (is_space(ret[i]) == -1)
	// 					break ;
	// 				else
	// 				{
	// 					i++;
	// 				}
	// 			}
	// 		}
	// 	}
	// 	i++;
	// }
	std::cout << "ret ==" << ret << "|" << std::endl;

	return (ret);
}

// char	*skip_spaces(char *str)
// {
// 	int		i;
// 	int		start;
// 	char	*ret;

// 	i = 0;
// 	while (str[i])
// 	{
// 		while (is_space(str[i]) == 1 || is_space(str[i]) == -1)
// 		{
// 			if (is_space(str[i]) == -1)
// 				break ;
// 			i++;
// 		}
// 		start = i;
// 		std::cout << "start => " << start << std::endl;
// 		if ((is_space(str[i]) == 0) && (is_space(str[i + 1]) == 1 || is_space(str[i + 1]) == -1)) 
// 		{
// 			if (is_space(str[i]) == 0 && is_space(str[i + 1]) == -1)
// 				break ;
// 			else
// 			{
// 				i++;
// 				while ((is_space(str[i]) == 1 || is_space(str[i]) == -1))
// 				{
// 					if (is_space(str[i]) == -1)
// 						break ;
// 					else
// 						i++;
// 				}
// 			}
// 		}
// 		i++;
// 	}
// 	// ret = str[5];
// 	std::cout << "ret ==" << ret << "|" << std::endl;

// 	return (ret);
// }

void	str_upper(char *str)
{
	int	i;

	i = 0;
	str = skip_spaces(str);
	while (str[i])
	{
		if (check_str(str[i]) == 1)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	// (void)av;
	int		i;
	// char	*str;
	// int	j;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
	{
		i = 1;
		while (av[i])
		{
			// skip_spaces(av[i]);
			str_upper(av[i]); //TODO
			std::cout << av[i];
			if (av[i + 1] != NULL)
				std::cout << " ";
			i++;
		}
		std::cout << std::endl;
	}
}
