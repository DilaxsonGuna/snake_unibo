# Simple Makefile to always rebuild before running
BUILD_DIR = build
EXEC = $(BUILD_DIR)/SnakeGame

all:
	@cmake -S . -B $(BUILD_DIR)
	@cmake --build $(BUILD_DIR)

run: all
	@$(EXEC)

clean:
	@rm -rf $(BUILD_DIR)
