CC = gcc

INC = .

# upozornuje na vsetky warningy, pedantny kod a podla normy ansi
FLAGS = -Wall -std=gnu99 -pedantic

STATIC = -static

OUTPUT = -o

RM = rm

# ----------------------------------------------------------------------

all: project

project: project.o person.o basic.o
	# tu maka linker
	$(CC) project.o person.o basic.o $(OUTPUT) project

project.o: project.c person.h basic.h
	# tu maka kompilator
	$(CC) $(FLAGS) -I$(INC) -c project.c

person.o: person.c person.h
	# tu maka kompilator
	$(CC) $(FLAGS) -I$(INC) -c person.c

basic.o: basic.c basic.h
	# tu maka kompilator
	$(CC) $(FLAGS) -I$(INC) -c basic.c

# ----------------------------------------------------------------------

# ak za dvojbodku neuvediem nic, tak je to "toto bolo zmenene, tak to
# spusti"
clean:
	@$(RM) project.o person.o basic.o project

run:
	@echo "Running program..."; \
	./project
