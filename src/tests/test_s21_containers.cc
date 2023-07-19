#include "test_s21_containers.h"

#include "test_s21_array.cc"
#include "test_s21_list.cc"
#include "test_s21_map.cc"
#include "test_s21_multiset.cc"
#include "test_s21_queue.cc"
#include "test_s21_set.cc"
#include "test_s21_stack.cc"
#include "test_s21_vector.cc"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}