CXX = g++
CXXFLAGS = -Wall -Werror -Wextra -Wpedantic -std=c++20 

Target = main
SRCS = $(wildcard ./*.cpp)
OBJS = $(SRCS:.cpp=.o)

LDFLAGS =
LDLIBS =  

all:$(Target)

$(Target):$(OBJS)
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $(LDLIBS) -o $@ $^

%.o:%.cpp
	$(CXX) $(CXXFLAGS) -o $@ -c $<

.PHONY:

clean:
	rm *.o $(Target)