#include <iostream>
#include <string>

class Dog
{
	public:
		void	bark(void);
};

void	Dog::bark(void)
{
	std::cout << "Woof!\n";
}

int	main()
{
	Dog	dog_obj;

	dog_obj.bark();
}
