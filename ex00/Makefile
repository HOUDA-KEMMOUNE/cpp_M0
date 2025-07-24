NAME = megaphone

CPP = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = megaphone.cpp

all: $(NAME)

$(NAME) = $(SRC)
	$(CPP) $(CPPFLAGS) $(SRC) -o $(NAME)

clean:
	rm megaphone.o

fclean: clean
	rm megaphone

re: fclean all
