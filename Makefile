CC := gcc
CFLAGS := -std=c11 -Wall -Wextra -Wpedantic -Iinclude -g
SRC_DIR := src
BIN_DIR := bin
BUILD_DIR := build

TARGETS := \
	$(BIN_DIR)/hello \
	$(BIN_DIR)/formatted_io \
	$(BIN_DIR)/math_ops \
	$(BIN_DIR)/if_else \
	$(BIN_DIR)/switch_menu \
	$(BIN_DIR)/while_loop \
	$(BIN_DIR)/for_loop \
	$(BIN_DIR)/guess_number \
	$(BIN_DIR)/functions_intro \
	$(BIN_DIR)/array_sum \
	$(BIN_DIR)/array_stats \
	$(BIN_DIR)/string_length \
	$(BIN_DIR)/string_copy \
	$(BIN_DIR)/pointer_intro \
	$(BIN_DIR)/swap_demo \
	$(BIN_DIR)/student_struct \
	$(BIN_DIR)/gradebook_file

.PHONY: all clean help dirs run-hello run-if_else run-array_sum run-guess_number

all: dirs $(TARGETS)

dirs:
	mkdir -p $(BIN_DIR) $(BUILD_DIR)

help:
	@echo "Available targets:"
	@echo "  make                 Build all examples"
	@echo "  make clean           Remove built files"
	@echo "  make run-hello       Build and run hello"
	@echo "  make run-if_else     Build and run if_else"
	@echo "  make run-array_sum   Build and run array_sum"
	@echo "  make run-guess_number Build and run guess_number"

$(BIN_DIR)/hello: $(SRC_DIR)/01_basics/01_hello.c
	$(CC) $(CFLAGS) $< -o $@

$(BIN_DIR)/formatted_io: $(SRC_DIR)/01_basics/02_formatted_io.c
	$(CC) $(CFLAGS) $< -o $@

$(BIN_DIR)/math_ops: $(SRC_DIR)/01_basics/03_math_ops.c
	$(CC) $(CFLAGS) $< -o $@

$(BIN_DIR)/if_else: $(SRC_DIR)/02_control_flow/01_if_else.c
	$(CC) $(CFLAGS) $< -o $@

$(BIN_DIR)/switch_menu: $(SRC_DIR)/02_control_flow/02_switch_menu.c
	$(CC) $(CFLAGS) $< -o $@

$(BIN_DIR)/while_loop: $(SRC_DIR)/02_control_flow/03_while_loop.c
	$(CC) $(CFLAGS) $< -o $@

$(BIN_DIR)/for_loop: $(SRC_DIR)/02_control_flow/04_for_loop.c
	$(CC) $(CFLAGS) $< -o $@

$(BIN_DIR)/guess_number: $(SRC_DIR)/02_control_flow/05_guess_number.c
	$(CC) $(CFLAGS) $< -o $@

$(BIN_DIR)/functions_intro: $(SRC_DIR)/03_functions_arrays/01_functions_intro.c
	$(CC) $(CFLAGS) $< -o $@

$(BIN_DIR)/array_sum: $(SRC_DIR)/03_functions_arrays/02_array_sum.c
	$(CC) $(CFLAGS) $< -o $@

$(BIN_DIR)/array_stats: $(SRC_DIR)/03_functions_arrays/03_array_stats.c include/stats.h
	$(CC) $(CFLAGS) $(SRC_DIR)/03_functions_arrays/03_array_stats.c -o $@

$(BIN_DIR)/string_length: $(SRC_DIR)/04_strings_pointers/01_string_length.c
	$(CC) $(CFLAGS) $< -o $@

$(BIN_DIR)/string_copy: $(SRC_DIR)/04_strings_pointers/02_string_copy.c
	$(CC) $(CFLAGS) $< -o $@

$(BIN_DIR)/pointer_intro: $(SRC_DIR)/04_strings_pointers/03_pointer_intro.c
	$(CC) $(CFLAGS) $< -o $@

$(BIN_DIR)/swap_demo: $(SRC_DIR)/04_strings_pointers/04_swap_demo.c
	$(CC) $(CFLAGS) $< -o $@

$(BIN_DIR)/student_struct: $(SRC_DIR)/05_structs_files/01_student_struct.c
	$(CC) $(CFLAGS) $< -o $@

$(BIN_DIR)/gradebook_file: $(SRC_DIR)/05_structs_files/02_gradebook_file.c
	$(CC) $(CFLAGS) $< -o $@

run-hello: $(BIN_DIR)/hello
	./$(BIN_DIR)/hello

run-if_else: $(BIN_DIR)/if_else
	./$(BIN_DIR)/if_else

run-array_sum: $(BIN_DIR)/array_sum
	./$(BIN_DIR)/array_sum

run-guess_number: $(BIN_DIR)/guess_number
	./$(BIN_DIR)/guess_number

clean:
	rm -rf $(BIN_DIR)/* $(BUILD_DIR)/* grades.txt
