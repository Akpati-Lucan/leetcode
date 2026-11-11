CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17

TARGET = two_sum
SOURCE = two_sum.cpp

all: $(TARGET)

$(TARGET): $(SOURCE)
	$(CXX) $(CXXFLAGS) $(SOURCE) -o $(TARGET).exe

run: all
	./$(TARGET).exe

clean:
	del $(TARGET).exe