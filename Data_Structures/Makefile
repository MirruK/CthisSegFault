OBJECTS = test_list.o linked_list.o
FLAGS = -g -Wall
NAME = test_list

build: $(OBJECTS)
	gcc $(OBJECTS) -o $(NAME)

test_list.o: src/test_list.c
	gcc $(FLAGS) -c src/test_list.c

linked_list.o: src/linked_list.c
	gcc $(FLAGS) -c src/linked_list.c

clean:
	rm *.o test_list

run:
	make build -B && ./$(NAME)
