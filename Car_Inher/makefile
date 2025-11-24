CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -O2

SRC = main.cpp car.cpp engine.cpp
OBJ = $(SRC:.cpp=.o)
TARGET = app

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)
