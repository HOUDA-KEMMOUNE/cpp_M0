#include <iostream>
#include <string>

class Person
{
	private:
		std::string	secret;
	public:
		std::string	name;
		int			age;
		void	setSecret(std::string s)
		{
			secret = s;
		}
		std::string	getSecret(void)
		{
			return (secret);
		}
};


int	main()
{
	Person	person1;

	person1.name = "Houda.Kem";
	person1.age = 18;
	person1.setSecret("It's a secret after all HAHA");
	std::cout << "The secret of person1 is: " << person1.getSecret() << std::endl;
}
