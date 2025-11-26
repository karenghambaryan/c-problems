CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -O2

# Executable name
TARGET = program

# Source files
SRCS = main.cpp class.cpp

# Object files
OBJS = $(SRCS:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

%.o: %.cpp class.h
	$(CXX) $(CXXFLAGS) -c $<

clean:
	rm -f $(OBJS) $(TARGET)
