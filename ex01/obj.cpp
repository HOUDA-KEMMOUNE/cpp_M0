#include <iostream>
#include <string>

class Book
{
	public:
		std::string	title;
		std::string	author;
		int			year;
		Book(std::string a, std::string b, int c);
};

Book::Book(std::string a, std::string b, int c)
{
	std::cout << a << ", " << b << ", " <<  c << std::endl;
}

int	main()
{
	Book	book_obj1("Matilda", "Roald Dahl", 1988);
	Book	book_obj2("The Giving Tree", "Shel Silverstein", 1964);
}
