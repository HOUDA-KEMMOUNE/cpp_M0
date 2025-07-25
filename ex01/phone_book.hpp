#ifndef PHONE_BOOK_H
#define PHONE_BOOK_H

# include <iostream>
# include <string>

class	Contact
{
	private:
		std::string	firstName;
		std::string	lastName;
		std::string	nickname;
		std::string	phone_nbr;
		std::string	darkest_scrt;

	public:
		//setters
		void		set_firstName(std::string fn) {firstName = fn;}
		void		set_lastName(std::string ln) {lastName = ln;}
		void		set_nickname(std::string nn) {nickname = nn;}
		void		set_phone_nbr(std::string pn) {phone_nbr = pn;}
		void		set_darkest_scrt(std::string ds) {darkest_scrt = ds;}
		
		//getters
		std::string	get_firstName(void) {return (firstName);}
		std::string	get_lastName(void) {return (lastName);}
		std::string	get_nickname(void) {return (nickname);}
		std::string	get_phone_nbr(void) {return (phone_nbr);}
		std::string	get_darkest_scrt(void) {return (darkest_scrt);}
};

class PhoneBook
{
	private:
		Contact	contacts[7];
		int		count;
		
	public:
		void	set_count(void) {count = 0;}
		void	set_contact(Contact c)
		{
			if (count < 8)
				contacts[count] = c;
		}
		// PhoneBook(Contact c)
		// {
		// 	if (count < 8)
		// 		contacts[count] = c;
		// }
		void	add_contact(Contact c);
		void	search_contact(Contact c);
		void	exit_contact(Contact c);
	};
	

#endif
