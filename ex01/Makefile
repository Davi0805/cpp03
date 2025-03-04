CXX = c++
CXXFLAGS = -std=c++98 -Wall -Wextra -Werror

OUTPUT = ex01

SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(OUTPUT)

$(OUTPUT): $(OBJS)
	$(CXX) $(OBJS) -o $(OUTPUT)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(OUTPUT)

re: fclean all

.PHONY: all clean
