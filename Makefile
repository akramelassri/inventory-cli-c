CC      := gcc
CFLAGS  := -Wall -Wextra -std=c11 -g

SRCS    := $(wildcard src/*.c)
OBJS    := $(patsubst src/%.c,build/%.o,$(SRCS))

TARGET  := inventory

.PHONY: all clean

all: $(TARGET)

# Link object files into the final binary
$(TARGET): $(OBJS)
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -o $@ $^

# Compile each .c into its corresponding .o under build/
build/%.o: src/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf build $(TARGET)
