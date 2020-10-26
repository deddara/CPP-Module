NAME = array
FLGS = clang++ -Wall -Wextra -Werror
OBJ_DIR = obj/

SRC_FILES = $(wildcard *.cpp)
SRC_O = $(addprefix $(OBJ_DIR), $(SRC_FILES:.cpp=.o))

.PHONY = all clean fclean re

all : $(OBJ_DIR) $(NAME)

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(NAME): $(SRC_O)
	$(FLGS) $(SRC_O) -o $(NAME)

$(SRC_O): $(OBJ_DIR)%.o: %.cpp
	$(FLGS) -c $< -o $@

clean:
	@rm -rf obj
fclean: clean
	@rm -f $(NAME)
re: fclean all
