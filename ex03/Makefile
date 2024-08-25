NAME		=	we_cook_a_triangle

CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++17
INCLUDES	=	-I include

_HEADER		=	Fixed.hpp Point.hpp bsp.hpp
HEADER		=	$(addprefix include/, $(_HEADER))
_FIXED_SRC	=	Fixed.cpp\
				FixedComparisonOperators.cpp\
				FixedArithmeticOperators.cpp\
				FixedIncrementDecrementOperators.cpp\
				FixedStaticFunctions.cpp
FIXED_SRC	=	$(addprefix Fixed/, $(_FIXED_SRC))
_SRC		=	main.cpp\
				Point.cpp\
				bsp.cpp\
				$(FIXED_SRC)
SRC			=	$(addprefix src/, $(_SRC))
OBJ			=	$(SRC:src/%.cpp=bin/%.o)

all: $(NAME)

bin:
	@mkdir -p bin/Fixed

bin/%.o: src/%.cpp $(HEADER) | bin
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re