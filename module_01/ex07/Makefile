
NAME = sed
SRC = $(addsuffix .cpp, $(NAME))
OBJ = $(SRC:cpp=o)
CC = clang++
CF = -Wall -Werror -Wextra

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CF) -I. $^ -o $(NAME)

%.o: %.cpp
	$(CC) $(CF) -c $<

clean:
	@rm $(OBJ)

fclean: clean
	@rm $(NAME)

re: fclean all