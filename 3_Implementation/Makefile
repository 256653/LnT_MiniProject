PROJECT_NAME = game

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

SRC = Implementation/project_main.c\
Implementation/src/tictactoe.c\
Implementation/src/game2.c\

SRC2 = Implementation/src/tictactoe.c\
Implementation/src/game2.c\

TEST_SRC = Implementation/test/test.c\
Implementation/unity/unity.c

INC_H = Implementation/inc
INC_T = Implementation/unity

all.exe :
		gcc $(SRC) -I $(INC_H) -I $(INC_T) -o $(PROJECT_NAME).exe

test :
		gcc $(SRC2) $(TEST_SRC) -I $(INC_H) -I $(INC_T) -o testf.exe



run : $(PROJECT_NAME).exe
			$(PROJECT_NAME).exe
			
cppcheck:
		cppcheck --enable=all $(SRC)
		
clean :
		del /q *.exe