NAME = PhoneBook

CPP = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = *.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CPP) $(CPPFLAGS) $(SRC) -o $@

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all
