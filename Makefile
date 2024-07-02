CC=gcc
CFLAGS=-Wextra -std=c11
SOURCES=src/*.c lib/*.c
BUILD_DIR=bin
EXE=$(BUILD_DIR)/quik

quik:
	@ mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) $(SOURCES) -o $(EXE)

.PHONY: clean

clean: $(BUILD_DIR)
	@ rm -rf $(BUILD_DIR)

