CC = gcc
CFLAGS = -Wall -Wextra -Werror -pedantic -std=c99 -g
LDFLAGS = -lm

TARGET = git-study

all: $(TARGET)

$(TARGET): src/main.o
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)

src/%.o: src/%.c src/%.h
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f src/*.o $(TARGET)
