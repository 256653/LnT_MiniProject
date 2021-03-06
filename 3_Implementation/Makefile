# Name of the Project
PROJECT_NAME = game  

# Output directory
BUILD = build

# to select OS
ifdef OS
	RM = del/q
	FixPath = $(subst /,\,$1)
	EXEC = exe
else
	ifeq ($(shell uname), Linux)
		RM = rm -rf
		FixPath = $1
			EXEC = out
	endif
endif

# All source code files
SRC = project_main.c\
src/tictactoe.c\
src/guessnumber.c

# All test source files
TEST_SRC = test/test.c\
unity/unity.c\
src/tictactoe.c\
src/guessnumber.c

TEST_OUTPUT = build/Test_game.out

# All include folders with header files

INC = -Iinc\
-Iunity

#Library Inlcudes
#if working with CUnit 
#INCLUDE_LIBS = -lcunit
INCLUDE_LIBS =

# Project Output name
PROJECT_OUTPUT = build/game.out

# Document files
DOCUMENTATION_OUTPUT = documentation/html

# Default target built
$(PROJECT_NAME):all

# Run the target even if the matching name exists
.PHONY: run clean test doc all

all: $(SRC) $(BUILD)
	gcc $(SRC)  $(INC) -o $(PROJECT_OUTPUT)

# Call `make run` to run the application
run:$(PROJECT_NAME)
	./$(PROJECT_OUTPUT)

# Document the code using Doxygen
#doc:
#	make -C ./documentation

# Build and run the unit tests
test:$(BUILD)
	gcc $(TEST_SRC)  $(INC) -o $(TEST_OUTPUT)
	./$(TEST_OUTPUT)
#Coverage
coverageCheck:$(BUILD)
	g++ -fprofile-arcs -ftest-coverage -fPIC -O0 $(TEST_SRC)  $(INC) -o $(TEST_OUTPUT)
	./$(TEST_OUTPUT)

cppcheck:
	cppcheck --enable=all $(SRC)

# Remove all the built files, invoke by `make clean`
clean:
	rm -rf $(BUILD) $(DOCUMENTATION_OUTPUT)

# Create new build folder if not present
$(BUILD):
	mkdir build
