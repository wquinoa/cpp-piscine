
NAME = ex02 
SRC = $(addsuffix .cpp, $(NAME))
OBJ = $(SRC:cpp=o)
CC = clang++
CF = -Wall -Werror -Wextra

.PHONY: all clean fclean re test

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CF) main.cpp -I. $^ -o $(NAME)

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