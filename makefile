
OBJ_DIR := build
SRC_DIR := src

SRC_DIR_STRUCTURE := $(shell find $(SRC_DIR)/ -type d)
OBJ_DIR_STRUCTURE := $(patsubst $(SRC_DIR)%, $(OBJ_DIR)%, $(SRC_DIR_STRUCTURE))

SRC_FILES := $(shell find $(SRC_DIR) -type f -name '*.cpp')
OBJ_FILES := $(patsubst $(SRC_DIR)/%.cpp,$(OBJ_DIR)/%.o,$(SRC_FILES))

MAIN_FILE := $(OBJ_DIR)/main

LDFLAGS :=
CPPFLAGS :=

CXX =g++
CXXFLAGS = -g -Wall -std=c++14 -D DEBUG

INCLUDEPATHS := -I$(SRC_DIR)/core


$(MAIN_FILE): $(OBJ_FILES) 
	$(CXX) $(LDFLAGS) -o $@ $^

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR_STRUCTURE)
	g++ $(CPPFLAGS) $(CXXFLAGS) $(INCLUDEPATHS) -c  -o $@ $<

$(OBJ_DIR_STRUCTURE):
	$(shell mkdir -p $(OBJ_DIR_STRUCTURE) )
	

.PHONY:clean
clean:
	rm -r $(OBJ_DIR)


.PHONY:run
run:$(MAIN_FILE)
	./$(MAIN_FILE)

