NAME		:= s21_containers
NAME+		:= $(NAME)plus
LIB			:= $(NAME).h
LIB+		:= $(NAME+).h

CC			:= gcc
CPP_FLAGS	:= -lstdc++ -std=c++17 -pedantic -Wall -Werror -Wextra
GTEST_FLAGS	:= -lgtest
TEST_NAME	:= $(NAME)_unit_test
SRC_TEST	:= $(TEST_NAME).cc

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

test: $(SRC_TEST) $(FILES)
		@clear
		$(CC) $(CPP_FLAGS) $(GTEST_FLAGS) $(SRC_TEST) -o $(TEST_NAME).out
		./$(TEST_NAME).out

lint:
		clang-format -i *.h */*.h */*.cc

clean:
		rm $(TEST_NAME).out
