DIR_C		=	C/src/
DIR_CPP		=	C++/src/

NAME_C		=	exec_c
NAME_CPP	=	exec_cpp

SRC_C		= 	$(DIR_C)main.c
SRC_CPP		= 	$(DIR_CPP)main.cpp \
				$(DIR_CPP)basics.cpp

OBJ_C		=	$(SRC_C:.c=.o)
OBJ_CPP		=	$(SRC_CPP:.cpp=.o)

CC = gcc
CXX = g++
CFLAGS = -Wall -Wextra -Wshadow
CXXFLAGS = -Wall -Wextra -Wshadow -I./include


.PHONY: all clean

all: $(NAME_C) $(NAME_CPP)

$(NAME_C): $(OBJ_C)
	$(CC) $(OBJ_C) -o $(NAME_C)
	@echo "\033[32m=========(   C COMPILED   )=========\033[0m"

$(NAME_CPP): $(OBJ_CPP)
	$(CXX) $(OBJ_CPP) -o $(NAME_CPP)
	@echo "\033[32m=========(   CPP COMPILED   )=========\033[0m"

clean:
	rm -f $(OBJ_C)
	rm -f $(OBJ_CPP)
	@echo "\033[34m=========(   CLEANED   )=========\033[0m"

fclean:
	rm -f $(OBJ_C)
	rm -f $(OBJ_CPP)
	rm -f $(NAME_C)
	rm -f $(NAME_CPP)
	@echo "\033[34m=========(   CLEANED   )=========\033[0m"

re: fclean all