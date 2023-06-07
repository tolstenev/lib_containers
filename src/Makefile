NAME		:= s21_containers
NAME+		:= $(NAME)plus
LIB			:= $(NAME).h
LIB+		:= $(NAME+).h

CC			:= gcc
CPP_FLAGS	:= -lstdc++ -std=c++17 -pedantic -Wall -Werror -Wextra
GTEST_FLAGS	:= -lgtest
TEST		:= $(NAME)_unit_test
SRC_TEST	:= $(TEST).cc

CONTAINERS  := s21_vector \
			   s21_list \
			   s21_stack \
			   s21_queue \
			   s21_map \
			   s21_set \
			   s21_array \
			   s21_multiset

SRCS		:= $(foreach container, $(CONTAINERS), \
			     $(addprefix $(container)/, $(addsuffix .cc, $(container))))
HDRS		:= $(foreach container, $(CONTAINERS), \
			     $(addprefix $(container)/, $(addsuffix  .h, $(container))))
SRC_FILES	:= $(SRCS) $(HDRS)

all: test

compile_test: $(SRC_TEST) $(FILES)
		@clear
		$(CC) $(CPP_FLAGS) $(GTEST_FLAGS) $(SRC_TEST) -o $(TEST).out

test: compile_test
		./$(TEST).out

test_array: compile_test
		./$(TEST).out --gtest_filter="Array.*"

test_list: compile_test
		./$(TEST).out --gtest_filter="List.*"

test_map: compile_test
		./$(TEST).out --gtest_filter="Map.*"

test_multiset: compile_test
		./$(TEST).out --gtest_filter="Multiset.*"

test_queue: compile_test
		./$(TEST).out --gtest_filter="Queue.*"

test_set: compile_test
		./$(TEST).out --gtest_filter="Set.*"

test_stack: compile_test
		./$(TEST).out --gtest_filter="Stack.*"

test_vector: compile_test
		./$(TEST).out --gtest_filter="Vector.*"

lint:
		clang-format -i *.h */*.h */*.cc

clean:
		rm $(TEST).out
