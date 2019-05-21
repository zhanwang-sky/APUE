CC := gcc
AR := ar
CFLAGS := -std=c11 -Wall -Wextra -Wpedantic -g
TARGET := libapue.a

$(TARGET): apue.o apue_error.o
	$(AR) -rc $@ $^
apue_error.o: apue_error.c _apue_types.h _apue_macros.h
	$(CC) $(CFLAGS) -c $< -o $@
apue.o: apue.c
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: rebuild clean all
rebuild: clean all
all: $(TARGET)
clean:
	rm -rf *.o *.a
