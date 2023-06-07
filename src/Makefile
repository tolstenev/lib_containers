NAME		:= s21_containers
NAME+		:= $(NAME)plus
LIB			:= $(NAME).h
LIB+		:= $(NAME+).h

CC			:= gcc
CPP_FLAGS	:= -lstdc++ -std=c++17 -pedantic -Wall -Werror -Wextra
GTEST_FLAGS	:= -lgtest
TEST_NAME	:= $(NAME)_unit_test
SRC_TEST	:= $(TEST_NAME).cc

SRCS	    := s21_vector/s21_vector.cc \
			   s21_list/s21_list.cc \
			   s21_stack/s21_stack.cc \
			   s21_queue/s21_queue.cc \
			   s21_map/s21_map.cc \
			   s21_set/s21_set.cc \
			   s21_array/s21_array.cc \
			   s21_multiset/s21_multiset.cc
HDRS	    := s21_vector/s21_vector.h \
			   s21_list/s21_list.h \
			   s21_stack/s21_stack.h \
			   s21_queue/s21_queue.h \
			   s21_map/s21_map.h \
			   s21_set/s21_set.h \
			   s21_array/s21_array.h \
			   s21_multiset/s21_multiset.h


test: $(SRC_TEST) $(SRCS) $(HDRS)
		@clear
		$(CC) $(CPP_FLAGS) $(GTEST_FLAGS) $(SRC_TEST) -o $(TEST_NAME).out
		./$(TEST_NAME).out

lint:
		clang-format -i *.h */*.h */*.cc

clean:
		rm $(TEST_NAME).out
