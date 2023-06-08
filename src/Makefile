NAME		 := s21_containers
NAME+		 := $(NAME)plus
LIB			 := $(NAME).h
LIB+		 := $(NAME+).h

CC			 := gcc
CPP_FLAGS	 := -lstdc++ -std=c++17 -pedantic -Wall -Werror -Wextra
GTEST_FLAGS	 := -lgtest
TEST		 := $(NAME)_unit_test
SRC_TEST	 := $(TEST).cc
TEST_FILE	 := $(TEST).out
RUN_TEST	 := ./$(TEST_FILE)

CONTAINERS   := s21_array \
			    s21_list \
			    s21_map \
			    s21_multiset \
			    s21_queue \
			    s21_set \
			    s21_stack \
			    s21_vector

SRCS		 := $(foreach container, $(CONTAINERS), \
			      $(addprefix $(container)/, $(addsuffix .cc, $(container))))
HDRS		 := $(foreach container, $(CONTAINERS), \
			      $(addprefix $(container)/, $(addsuffix  .h, $(container))))
SRC_FILES	 := $(LIB) $(LIB+) $(SRCS) $(HDRS)


all: test

$(TEST_FILE):	$(SRC_TEST) \
				$(SRC_FILES)
		@clear
		$(CC) $(CPP_FLAGS) $(GTEST_FLAGS) $(SRC_TEST) -o $(TEST_FILE)

test: 			$(TEST_FILE) \
				$(SRC_FILES)
		$(RUN_TEST)

test_array:		$(TEST_FILE) \
				s21_array/s21_array.h \
				s21_array/s21_array.cc
		$(RUN_TEST) --gtest_filter="Array.*"

test_list:		$(TEST_FILE) \
				s21_list/s21_list.h \
				s21_list/s21_list.cc
		$(RUN_TEST) --gtest_filter="List.*"

test_map:		$(TEST_FILE) \
				s21_map/s21_map.h \
				s21_map/s21_map.cc
		$(RUN_TEST) --gtest_filter="Map.*"

test_multiset:	$(TEST_FILE) \
				s21_multiset/s21_multiset.h \
				s21_multiset/s21_multiset.cc
		$(RUN_TEST) --gtest_filter="Multiset.*"

test_queue:		$(TEST_FILE) \
				s21_queue/s21_queue.h \
				s21_queue/s21_queue.cc
		$(RUN_TEST) --gtest_filter="Queue.*"

test_set:		$(TEST_FILE) \
				s21_set/s21_set.h \
				s21_set/s21_set.cc
		$(RUN_TEST) --gtest_filter="Set.*"

test_stack:		$(TEST_FILE) \
				s21_stack/s21_stack.h \
				s21_stack/s21_stack.cc
		$(RUN_TEST) --gtest_filter="Stack.*"

test_vector:	$(TEST_FILE) \
				s21_vector/s21_vector.h \
				s21_vector/s21_vector.cc
		$(RUN_TEST) --gtest_filter="Vector.*"

lint:
		clang-format -i *.h */*.h */*.cc

clean:
		rm -rf $(TEST_FILE)
