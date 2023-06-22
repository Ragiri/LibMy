CC                      =                       gcc
RM                      =                       rm -rvf

OUT                     =                       libmy.so
OUTTESTS                =                       libmy.test

SRCS                    +=                      $(wildcard src/*.c)

SRCSTESTS               +=                      $(wildcard tests/*.c)

CFLAGS                  +=                      -W -Wall -Wextra
CFLAGS                  +=                      -fPIC -O0 -std=c11
CFLAGS                  +=                      -I./include

LDFLAGS                 +=                      -shared -Wl,-soname,$(OUT)

TESTSFLAGS              +=                      -Wl,-rpath=. -L. -lmy
TESTSFLAGS              +=                      -lgcov --coverage

OBJS                    =                       $(SRCS:.c=.o)
OBJSTESTS               =                       $(SRCSTESTS:.c=.o)

GCFILES                 +=                      $(SRCS:.c=.gcno)
GCFILES                 +=                      $(SRCS:.c=.gcda)
GCFILES                 +=                      $(SRCSTESTS:.c=.gcno)
GCFILES                 +=                      $(SRCSTESTS:.c=.gcda)

%.o : %.c
		@printf "[\033[0;33m====\033[0m]% 60s\r" $< | tr " " "."
		@$(CC) $(CFLAGS) -c $< -o $@
		@printf "[\033[0;32m====\033[0m]% 60s\n" $< | tr " " "."

all : $(OBJS)
		@printf "[\033[0;33m====\033[0m]% 60s\r" $(OUT) | tr " " "."
		@$(CC) $(LDFLAGS) -o $(OUT) $(OBJS)
		@printf "[\033[0;32m====\033[0m]% 60s\n" $(OUT) | tr " " "."

clean :
		@printf "[\033[0;33m####\033[0m]% 60s\r" $(OBJS) $(OBJSTESTS) $(GCFILES) | tr " " "."
		@$(RM) $(OBJS) $(OBJSTESTS) $(GCFILES) > /dev/null
		@printf "[\033[0;31m####\033[0m]% 60s\n" $(OBJS) $(OBJSTESTS) $(GCFILES) | tr " " "."

fclean : clean
		@printf "[\033[0;33m####\033[0m]% 60s\r" $(OUT) $(OUTTESTS) | tr " " "."
		@$(RM) $(OUT) $(OUTTESTS) > /dev/null
		@printf "[\033[0;31m####\033[0m]% 60s\n" $(OUT) $(OUTTESTS) | tr " " "."

re : fclean all

tests : CFLAGS += -fprofile-arcs -ftest-coverage
tests : CFLAGS += -g -g3 -ggdb
tests : LDFLAGS += -lgcov --coverage
tests : fclean all $(OBJSTESTS)
tests :
		@printf "[\033[0;32m====\033[0m]% 60s\r" $(OUTTESTS) | tr " " "."
		@$(CC) $(TESTSFLAGS) -o $(OUTTESTS) $(OBJSTESTS)
		@printf "[\033[0;32m====\033[0m]% 60s\n" $(OUTTESTS) | tr " " "."
		@./$(OUTTESTS)

.PHONY : all clean fclean re tests
