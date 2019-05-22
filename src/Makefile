TARGET := libapue.a
HEADERS := apue_error.h apue.h

CC := gcc
AR := ar
CFLAGS := -std=c11 -Wall -Wextra -Wpedantic -g

$(TARGET): apue.o apue_error.o
	$(AR) -rc $@ $^
apue_error.o: apue_error.c _apue_types.h _apue_macros.h
	$(CC) $(CFLAGS) -c -o $@ $<
apue.o: apue.c
	$(CC) $(CFLAGS) -c -o $@ $<

.PHONY: install rebuild clean all
install:
	cp $(TARGET) ~/.local/lib/
	cp $(HEADERS) ~/.local/include/
rebuild: clean all
all: $(TARGET)
clean:
	rm -rf *.o *.a
