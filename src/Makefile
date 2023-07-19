NAME              := s21_containers
NAME+             := $(NAME)plus
LIB               := $(NAME).h
LIB+              := $(NAME+).h

CC                := gcc
CPP_FLAGS         := -lstdc++ -std=c++17 -pedantic
WARN_FLAGS        := -Wall -Werror -Wextra
CPP_FLAGS         += $(WARN_FLAGS)
GTEST_FLAGS       := -lgtest

HDRS              := s21_array/s21_array.h \
                     s21_list/s21_list.h \
                     s21_map/s21_map.h \
                     s21_multiset/s21_multiset.h \
                     s21_queue/s21_queue.h \
                     s21_set/s21_set.h \
                     s21_stack/s21_stack.h \
                     s21_vector/s21_vector.h

SRC_FILES         := $(LIB) $(LIB+) $(HDRS)

ARRAY_HEADER      := s21_array/s21_array.h
LIST_HEADER       := s21_list/s21_list.h
MAP_HEADER        := s21_map/s21_map.h
MULTISET_HEADER   := s21_multiset/s21_multiset.h
QUEUE_HEADER      := s21_queue/s21_queue.h
SET_HEADER        := s21_set/s21_set.h
STACK_HEADER      := s21_stack/s21_stack.h
VECTOR_HEADER     := s21_vector/s21_vector.h

ARRAY_FILES       := $(ARRAY_HEADER:.h=.cc)    $(ARRAY_HEADER)
LIST_FILES        := $(LIST_HEADER:.h=.cc)     $(LIST_HEADER)
MAP_FILES         := $(MAP_HEADER:.h=.cc)      $(MAP_HEADER)
MULTISET_FILES    := $(MULTISET_HEADER:.h=.cc) $(MULTISET_HEADER)
QUEUE_FILES       := $(QUEUE_HEADER:.h=.cc)    $(QUEUE_HEADER)
SET_FILES         := $(SET_HEADER:.h=.cc)      $(SET_HEADER)
STACK_FILES       := $(STACK_HEADER:.h=.cc)    $(STACK_HEADER)
VECTOR_FILES      := $(VECTOR_HEADER:.h=.cc)   $(VECTOR_HEADER)

TEST              := test_$(NAME)
SRC_TEST_FILE     := $(TEST).cc
EXEC_TEST_FILE    := $(TEST).out
RUN_TEST          := ./$(EXEC_TEST_FILE)

all: test

$(EXEC_TEST_FILE): $(SRC_TEST_FILE) $(SRC_FILES)
		@clear
		$(CC) $(CPP_FLAGS) $(GTEST_FLAGS) $< -o $@

test: $(EXEC_TEST_FILE) $(SRC_FILES) $(SRC_TEST_FILE)
		$(RUN_TEST)

test_array: $(EXEC_TEST_FILE) $(ARRAY_HEADER) $(SRC_TEST_FILE)
		$(RUN_TEST) --gtest_filter="ArrayTest.*"

test_list: $(EXEC_TEST_FILE) $(LIST_HEADER) $(SRC_TEST_FILE)
		$(RUN_TEST) --gtest_filter="ListTest.*"

test_map: $(EXEC_TEST_FILE) $(MAP_HEADER) $(SRC_TEST_FILE)
		$(RUN_TEST) --gtest_filter="MapTest.*"

test_multiset: $(EXEC_TEST_FILE) $(MULTISET_HEADER) $(SRC_TEST_FILE)
		$(RUN_TEST) --gtest_filter="MultisetTest.*"

test_queue: $(EXEC_TEST_FILE) $(QUEUE_HEADER) $(SRC_TEST_FILE)
		$(RUN_TEST) --gtest_filter="QueueTest.*"

test_set: $(EXEC_TEST_FILE) $(SET_HEADER) $(SRC_TEST_FILE)
		$(RUN_TEST) --gtest_filter="SetTest.*"

test_stack: $(EXEC_TEST_FILE) $(STACK_HEADER) $(SRC_TEST_FILE)
		$(RUN_TEST) --gtest_filter="StackTest.*"

test_vector: $(EXEC_TEST_FILE) $(VECTOR_HEADER) $(SRC_TEST_FILE)
		$(RUN_TEST) --gtest_filter="VectorTest.*"

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
		rm -rf $(EXEC_TEST_FILE) a.out */a.out main_array main_list main_map main_multiset main_queue main_set main_stack main_vector
