
NAME = convert 
SRC = $(addsuffix .cpp, ex00)
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
	@rm -rf $(OBJ)

fclean: clean
	clear
	@rm -rf $(NAME)

test: $(NAME)
	@for i in $(TESTS); do \
		echo "\\033[33minput\\033[0m  :" $$i; \
		./$(NAME) $$i; \
		echo ; \
	done

re: fclean all