# Compiler and flags
CXX = g++
CXXFLAGS = -std=c++17 -Wall -O2

# Main file and executable
SRC = main.cpp
TARGET = main

# Input/output
INPUT = input.txt
OUTPUT = output.txt

# Default target to compile and run
run: $(TARGET)
	@echo "Compiling and running..."
	./$(TARGET) < $(INPUT) > $(OUTPUT)
	@cat $(OUTPUT)

# Compile target
$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

# Clean compiled files
clean:
	rm -f $(TARGET) $(OUTPUT)
