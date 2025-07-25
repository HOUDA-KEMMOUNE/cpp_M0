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

class Gender : public Person
{
	public:
		std::string	sexuality;
};


int	main()
{
	Gender	person1;

	person1.name = "Houda.Kem";
	person1.age = 18;
	person1.sexuality = "Girl";
	person1.setSecret("It's a secret after all HAHA");

	std::cout << "\n";
	std::cout << "The name of person1 is: " << person1.name << std::endl;
	std::cout << "The age of person1 is: " << person1.age << std::endl;
	std::cout << "The sexuality of person1 is: " << person1.sexuality << std::endl;
	std::cout << "The secret of person1 is: " << person1.getSecret() << std::endl;
	std::cout << "\n";
}
