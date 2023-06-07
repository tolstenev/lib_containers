.PHONY: lint

NAME		:= s21_containers
NAME+		:= $(NAME)plus
LIB			:= $(NAME).h
LIB+		:= $(NAME+).h

CONTAINERS  := s21_vector \
			   s21_list \
			   s21_stack \
			   s21_queue \
			   s21_map \
			   s21_set \
CONTAINERS+ := s21_array \
			   s21_multiset \

CC			:= gcc
CPP_FLAGS	:= -lstdc++ -std=c++17 -pedantic -Wall -Werror -Wextra
GTEST_FLAGS	:= -lgtest
TEST_NAME	:= $(NAME)_unit_test
SRC_TEST	:= $(TEST_NAME).cc

.PHONY: test

test: $(SRC_TEST) $(LIB)
		@clear
		$(CC) $(CPP_FLAGS) $(GTEST_FLAGS) $(SRC_TEST) -o $(TEST_NAME).out
		./$(TEST_NAME).out

lint:
		clang-format -i *.h */*.h */*.cc

clean:
		rm $(TEST_NAME).out