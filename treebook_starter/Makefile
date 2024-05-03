CXX = g++
CXXFLAGS = -Wall -Werror -Wextra -Wpedantic -std=c++20 -O0

Target = main
SRCS = $(wildcard *.cpp)
OBJS = $(SRCS:.cpp=.o)

all:$(Target)
	
$(Target):$(OBJS)
	$(CXX) $^ -o $@
.PHONY:

clean:
	rm $(Target) $(OBJS)