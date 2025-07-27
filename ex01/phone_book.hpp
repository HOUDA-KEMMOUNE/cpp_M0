#ifndef PHONE_BOOK_H
#define PHONE_BOOK_H

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
		Contact	contacts[8];
		int		count;
		
	public:
		void	set_count(int c) {count = c;}
		int		get_count(void) {return (count);}
		void	set_contact(std::string fn, std::string ln, std::string nn, std::string pn, std::string ds)
		{
				if (count == 8)
					count = 0;
				if (count < 8)
				{
					contacts[count].set_firstName(fn);
					contacts[count].set_lastName(ln);
					contacts[count].set_nickname(nn);
					contacts[count].set_phone_nbr(pn);
					contacts[count].set_darkest_scrt(ds);
				}
		}
		std::string	get_fn(int i)
		{
			std::string	first_nm = contacts[i].get_firstName();
			return (first_nm);
		}
		std::string	get_ln(int i)
		{
			std::string	last_nm = contacts[i].get_lastName();
			return (last_nm);
		}
		std::string	get_nn(int i)
		{
			std::string	nickname = contacts[i].get_nickname();
			return (nickname);
		}
};

//------------utils----------------
std::string	is_empty(std::string data, std::string action);
void		have_search_contact(int i, PhoneBook phone_book);

#endif
