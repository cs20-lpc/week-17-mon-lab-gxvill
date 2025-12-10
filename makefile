SRC = lab18-main.cpp
TARGET = lab18-main
OTHER = GraphMatrix.cpp
FLAGS = -std=c++23
CXX = g++ -Wall -Wextra

$(TARGET): $(SRC)
	$(CXX) $(FLAGS) $< $(OTHER) -o $@

run:
	./$(TARGET)

clean:
	rm -f $(TARGET)



