# Makefile

# Compiler
CXX = g++
# Compiler flags
CXXFLAGS = -Wall -Wextra -std=c++17
# Target executable name
TARGET = main
# Source files
SRC = main.cpp
# Object files
OBJ = $(SRC:.cpp=.o)

# Default rule
all: $(TARGET)

# Rule to build the target
$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Rule to clean up build files
clean:
	rm -f $(TARGET) $(OBJ)

