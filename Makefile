CXX=g++
CXXFLAGS=-g -Wall -std=c++11
TARGET=morphology
#LDLIBS
all: $(TARGET)
$(TARGET): $(TARGET).o
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(TARGET).cpp morphology.tables.cpp morphology.tables.ru.cpp
clean:
	rm -f  $(TARGET) $(TARGET).o
