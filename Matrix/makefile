CXX = g++
CXXFLAGS = -Wall -std=c++17
TARGET = main
SRCS = main.cpp matrix.cpp car.cpp reader.cpp logger.cpp
OBJS = $(SRCS:.cpp=.o)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)