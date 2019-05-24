TARGET := libapue.so
HEADERS := apue.h apue_error.h

CC := gcc
CFLAGS := -std=c11 -Wall -Wextra -Wpedantic -g

LIB_DIR := ~/.local/lib/
INCLUDE_DIR := ~/.local/include/

$(TARGET): apue.o apue_error.o
	$(CC) -shared -o $@ $^
apue_error.o: apue_error.c _apue_types.h _apue_macros.h
	$(CC) $(CFLAGS) -c -fPIC -o $@ $<
apue.o: apue.c
	$(CC) $(CFLAGS) -c -fPIC -o $@ $<

.PHONY: install rebuild clean all
install:
	cp $(TARGET) $(LIB_DIR)
	cp $(HEADERS) $(INCLUDE_DIR)
uninstall:
	rm -f $(addprefix $(LIB_DIR), $(TARGET))
	rm -f $(addprefix $(INCLUDE_DIR), $(HEADERS))
rebuild: clean all
all: $(TARGET)
clean:
	rm -rf *.o *.so
