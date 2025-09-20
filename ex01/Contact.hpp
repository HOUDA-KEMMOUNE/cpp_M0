# ifndef CONTACT_H
# define CONTACT_H

# include <iostream>
# include <string>
# include <iomanip>

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
		void		set_firstName(std::string fn); //{firstName = fn;}
		void		set_lastName(std::string ln); //{lastName = ln;}
		void		set_nickname(std::string nn); //{nickname = nn;}
		void		set_phone_nbr(std::string pn); //{phone_nbr = pn;}
		void		set_darkest_scrt(std::string ds); //{darkest_scrt = ds;}
		
		//getters
		std::string	get_firstName(void); //{return (firstName);}
		std::string	get_lastName(void); //{return (lastName);}
		std::string	get_nickname(void); //{return (nickname);}
		std::string	get_phone_nbr(void); //{return (phone_nbr);}
		std::string	get_darkest_scrt(void); //{return (darkest_scrt);}
};

# endif