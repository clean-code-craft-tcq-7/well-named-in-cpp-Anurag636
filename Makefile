CXX = g++
CXXFLAGS = -Wall -Wextra

# Executables to build by default
all: app tests

# Build the app (main program)
app: ColorPair.o ColorCoder.o main.o
	$(CXX) $(CXXFLAGS) -o app ColorPair.o ColorCoder.o main.o

# Build the test runner
tests: ColorPair.o ColorCoder.o TestColorCoder.o
	$(CXX) $(CXXFLAGS) -o tests ColorPair.o ColorCoder.o TestColorCoder.o

# Compile each .cpp to .o
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up build artifacts
clean:
	rm -f *.o app tests
