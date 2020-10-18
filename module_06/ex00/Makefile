
NAME = ex00 
SRC = $(addsuffix .cpp, $(NAME))
OBJ = $(SRC:cpp=o)
CC = clang++
CF = -Wall -Werror -Wextra
TESTS = 42 0 123.123 -2147483650 nan -inff

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
	@for i in $(TESTS); do \
		echo "\\033[33minput\\033[0m  :" $$i; \
		./$(NAME) $$i; \
		echo ; \
	done

re: fclean all