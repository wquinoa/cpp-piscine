
NAME = ex01 
SRC = $(addsuffix .cpp, $(NAME))
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
	@rm $(OBJ)

fclean: clean
	@rm $(NAME)

test: $(NAME)
	./$(NAME)

re: fclean all