
CC=g++
EXAMPLE=1

compile_all:
	$(CC) ./examples/example01_switch.c          -o ./work/example1
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


