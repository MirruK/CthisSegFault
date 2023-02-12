TARGETFILE = $(cmd_args)
OBJECTS = test_$(TARGETFILE).o $(TARGETFILE).o
FLAGS = -g -Wall
NAME = test_$(TARGETFILE)

build: $(OBJECTS)
	gcc $(OBJECTS) -o $(NAME)

test_$(TARGETFILE).o: src/test_$(TARGETFILE).c
	gcc $(FLAGS) -c src/test_$(TARGETFILE).c

$(TARGETFILE).o: src/$(TARGETFILE).c
	gcc $(FLAGS) -c src/$(TARGETFILE).c

clean:
	rm *.o test_$(TARGETFILE)

run:
	make build -B && ./$(NAME)
