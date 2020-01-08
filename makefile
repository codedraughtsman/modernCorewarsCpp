
OBJ_DIR := build
SRC_DIR := src
SRC_FILES := $(wildcard $(SRC_DIR)/*.cpp)
OBJ_FILES := $(patsubst $(SRC_DIR)/%.cpp,$(OBJ_DIR)/%.o,$(SRC_FILES))

MAIN_FILE := $(OBJ_DIR)/main

LDFLAGS :=
CPPFLAGS :=

CXX =g++
CXXFLAGS = -g -Wall -std=c++14 -D DEBUG



$(MAIN_FILE): $(OBJ_FILES) 
	$(CXX) $(LDFLAGS) -o $@ $^

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(shell mkdir -p $(OBJ_DIR))
	g++ $(CPPFLAGS) $(CXXFLAGS) -c -o $@ $<


.PHONY:clean
clean:
	rm $(OBJ_FILES) $(MAIN_FILE)
	rmdir $(OBJ_DIR)

.PHONY:run
run:$(MAIN_FILE)
	./$(MAIN_FILE)

