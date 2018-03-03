
CC=g++
EXAMPLE=1

compile_all:
	$(CC) ./examples/example01_hello-world.c                  -o ./work/example1
	$(CC) ./examples/example02_F-C-table.c                    -o ./work/example2
	$(CC) ./examples/example03_F-C-table-float.c              -o ./work/example3
	$(CC) ./examples/example04_file-copying.c                 -o ./work/example4
	$(CC) ./examples/example05_character-counting.c           -o ./work/example5
	$(CC) ./examples/example06_line-counting.c                -o ./work/example6
	$(CC) ./examples/example07_word-counting.c                -o ./work/example7
	$(CC) ./examples/example08_arrays.c                       -o ./work/example8
	$(CC) ./examples/example09_functions.c                    -o ./work/example9
	$(CC) ./examples/example10_character-arrays.c             -o ./work/example10
	$(CC) ./examples/example11_external-variables-and-scope.c -o ./work/example11
run:
	./work/example$(EXAMPLE)
clean:
	if test ! -d work; \
	then mkdir work; \
	else echo "work exists"; \
	fi
	rm -r ./work
	mkdir ./work
clean_work:
	rm -r ./work
all: clean compile_all run


