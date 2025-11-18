# Define the compiler and flags
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17 -pedantic

# Define the target executable name
TARGET = chess_program

# Define the source files
SOURCES = main.cpp Chess.cpp

# Define the object files (automatically generated from sources)
OBJECTS = $(SOURCES:.cpp=.o)

# --- PHONY Targets ---
.PHONY: all clean

# Default target: builds the executable
all: $(TARGET)

# Rule to link the object files into the final executable
$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $(OBJECTS) -o $(TARGET)

# Rule to compile a .cpp file into a .o file
# This is an implicit rule, but defining it explicitly ensures clarity.
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Cleanup target: removes the generated object files and the executable
clean:
	rm -f $(OBJECTS) $(TARGET)