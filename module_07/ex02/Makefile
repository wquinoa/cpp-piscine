
NAME = Array 
SRC = main.cpp
OBJ = $(SRC:cpp=o)
CC = clang++
CF = -Wall -Werror -Wextra

.PHONY: all clean fclean re test

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CF) -I. $^ -o $(NAME) 

%.o: %.cpp
	$(CC) $(CF) -c $<

clean:
	@rm -rf $(OBJ)

fclean: clean
	clear
	@rm -rf $(NAME)

test: $(NAME)
	./$(NAME)

re: fclean all