CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17

TARGET = add_two_numbers
SOURCE = add_two_numbers.cpp

all: $(TARGET)

$(TARGET): $(SOURCE)
	$(CXX) $(CXXFLAGS) $(SOURCE) -o $(TARGET).exe

run: all
	./$(TARGET).exe

clean:
	del $(TARGET).exe