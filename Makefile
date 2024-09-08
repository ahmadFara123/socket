CXX= g++

CXXFLAGS= -Wall -Wextra -std=c++17 -g


# Executable name
EXE= socket

SRCS= main.cpp socket.cpp

DEPS= socket.h

OBJS= $(SRCS:.cpp=.o)


$(EXE): $(OBJS)
	$(CXX) $(CFLAGS) -o $@  $(OBJS)

%.o : %.cpp $(DEPS)
	$(CXX) $(CXXFLAGS) -c $< -o $@


clean:
	rm -f $(OBJS) $(EXEC)

.PHONY: clean