
OBJ_DIR := .
SRC_DIR := .
SRC_FILES := $(wildcard $(SRC_DIR)/*.cpp)
OBJ_FILES := $(patsubst $(SRC_DIR)/%.cpp,$(OBJ_DIR)/%.o,$(SRC_FILES))

LDFLAGS :=
CPPFLAGS :=

CXX =g++
CXXFLAGS = -g -Wall -std=c++14 -D DEBUG

.PHONY:test
test:main
	./main

main: $(OBJ_FILES) 
	$(CXX) $(LDFLAGS) -o $@ $^

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	g++ $(CPPFLAGS) $(CXXFLAGS) -c -o $@ $<


.PHONY:clean
clean:
	rm $(OBJ_FILES)

