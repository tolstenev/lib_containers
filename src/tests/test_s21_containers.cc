#include "test_s21_containers.h"

#include "test_s21_list.cc"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}