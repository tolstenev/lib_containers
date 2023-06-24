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

ARRAY_FILES    := s21_array/s21_array.cc \
 				  s21_array/s21_array.h

LIST_FILES     := s21_list/s21_list.cc \
 				  s21_list/s21_list.h

MAP_FILES      := s21_map/s21_map.cc \
 				  s21_map/s21_map.h

MULTISET_FILES := s21_multiset/s21_multiset.cc \
 				  s21_multiset/s21_multiset.h

QUEUE_FILES    := s21_queue/s21_queue.cc \
 				  s21_queue/s21_queue.h

SET_FILES      := s21_set/s21_set.cc \
 				  s21_set/s21_set.h

STACK_FILES    := s21_stack/s21_stack.cc \
 				  s21_stack/s21_stack.h

VECTOR_FILES   := s21_vector/s21_vector.cc \
 				  s21_vector/s21_vector.h

all: test

$(TEST_FILE): $(SRC_TEST) $(SRC_FILES)
		@clear
		$(CC) $(CPP_FLAGS) $(GTEST_FLAGS) $< -o $@

test: $(TEST_FILE) $(SRC_FILES)
		$(RUN_TEST)

test_array: $(TEST_FILE) $(ARRAY_FILES)
		$(RUN_TEST) --gtest_filter="Array.*"

test_list: $(TEST_FILE) $(LIST_FILES)
		$(RUN_TEST) --gtest_filter="List.*"

test_map: $(TEST_FILE) $(MAP_FILES)
		$(RUN_TEST) --gtest_filter="Map.*"

test_multiset: $(TEST_FILE) $(MULTISET_FILES)
		$(RUN_TEST) --gtest_filter="Multiset.*"

test_queue: $(TEST_FILE) $(QUEUE_FILES)
		$(RUN_TEST) --gtest_filter="Queue.*"

test_set: $(TEST_FILE) $(SET_FILES)
		$(RUN_TEST) --gtest_filter="Set.*"

test_stack: $(TEST_FILE) $(STACK_FILES)
		$(RUN_TEST) --gtest_filter="Stack.*"

test_vector: $(TEST_FILE) $(VECTOR_FILES)
		$(RUN_TEST) --gtest_filter="Vector.*"

main_array: $(ARRAY_FILES)
		$(CC) $(CPP_FLAGS) $< -o $@
		./$@

main_list: $(LIST_FILES)
		$(CC) $(CPP_FLAGS) $< -o $@
		./$@

main_map: $(MAP_FILES)
		$(CC) $(CPP_FLAGS) $< -o $@
		./$@

main_multiset: $(MULTISET_FILES)
		$(CC) $(CPP_FLAGS) $< -o $@
		./$@

main_queue: $(QUEUE_FILES)
		$(CC) $(CPP_FLAGS) $< -o $@
		./$@

main_set: $(SET_FILES)
		$(CC) $(CPP_FLAGS) $< -o $@
		./$@

main_stack: $(STACK_FILES)
		$(CC) $(CPP_FLAGS) $< -o $@
		./$@

main_vector: $(VECTOR_FILES)
		$(CC) $(CPP_FLAGS) $< -o $@
		./$@

lint:
		clang-format -i *.h */*.h */*.cc

clean:
		rm -rf $(TEST_FILE) main_array main_list main_map main_multiset main_queue main_set main_stack main_vector