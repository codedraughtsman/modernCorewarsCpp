
OBJ_DIR := build
SRC_DIR := src

RUNNER_DIR := $(SRC_DIR)/commandLine
CORE_DIR := $(SRC_DIR)/core
TESTER_DIR := $(SRC_DIR)/tests

SRC_DIR_STRUCTURE := $(shell find $(SRC_DIR)/ -type d)
OBJ_DIR_STRUCTURE := $(patsubst $(SRC_DIR)%, $(OBJ_DIR)%, $(SRC_DIR_STRUCTURE))

CORE_SRC_FILES := $(shell find $(CORE_DIR) -type f -name '*.cpp')
CORE_OBJ_FILES := $(patsubst $(SRC_DIR)/%.cpp,$(OBJ_DIR)/%.o,$(CORE_SRC_FILES))

RUNNER_SRC_FILES := $(shell find $(RUNNER_DIR) -type f -name '*.cpp')
RUNNER_OBJ_FILES := $(patsubst $(SRC_DIR)/%.cpp,$(OBJ_DIR)/%.o,$(RUNNER_SRC_FILES))

TESTER_SRC_FILES := $(shell find $(TESTER_DIR) -type f -name '*.cpp')
TESTER_OBJ_FILES := $(patsubst $(SRC_DIR)/%.cpp,$(OBJ_DIR)/%.o,$(TESTER_SRC_FILES))


RUNNER_MAIN_FILE := $(OBJ_DIR)/main
TEST_MAIN_FILE := $(OBJ_DIR)/testRunner

LDFLAGS :=
CPPFLAGS :=

CXX =g++
CXXFLAGS = -g -Wall -std=c++14 -D DEBUG

INCLUDEPATHS := -I$(SRC_DIR)/core


.PHONY:all
all:$(RUNNER_MAIN_FILE) $(TEST_MAIN_FILE)
	

$(RUNNER_MAIN_FILE): $(CORE_OBJ_FILES) $(RUNNER_OBJ_FILES)
	$(CXX) $(LDFLAGS) -o $@ $^

$(TEST_MAIN_FILE):$(CORE_OBJ_FILES) $(TESTER_OBJ_FILES)
	$(CXX) $(LDFLAGS) -o $@ $^

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR_STRUCTURE)
	g++ $(CPPFLAGS) $(CXXFLAGS) $(INCLUDEPATHS) -c  -o $@ $<

$(OBJ_DIR_STRUCTURE):
	$(shell mkdir -p $(OBJ_DIR_STRUCTURE) )
	

.PHONY:clean
clean:
	rm -r $(OBJ_DIR)


.PHONY:run
run:$(RUNNER_MAIN_FILE)
	./$(RUNNER_MAIN_FILE)

.PHONY:test
test:$(TEST_MAIN_FILE)
	./$(TEST_MAIN_FILE)
