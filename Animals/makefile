# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -Wall -Wextra -std=c++17

# Source files
SRC = main.cpp animals.cpp zoo.cpp


# Header files
HEADERS = animals.h

# Output executable
TARGET = animals_app

# Default build rule
all: $(TARGET)

# Link and build the final executable
$(TARGET): $(SRC) $(HEADERS)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET)

# Clean up build files
clean:
	rm -f $(TARGET)

# Run the program
run: $(TARGET)
	./$(TARGET)
