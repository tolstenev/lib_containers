#include <gtest/gtest.h>
#include "s21_containers.h"
#include "s21_containersplus.h"

// Все тесты на контейнер должны начинаться с одного и того же названия.
// Например, Array. Это нужно для того, чтобы они были объединены в один
// test suite и их можно было раздельно запускать make test_array
TEST(Array, EmptyTest1) {

}

TEST(Array, EmptyTest2) {

}

TEST(List, EmptyTest) {

}

TEST(Map, EmptyTest) {

}

TEST(Multiset, EmptyTest) {

}

TEST(Queue, EmptyTest) {

}

TEST(Set, EmptyTest) {

}

TEST(Stack, EmptyTest) {

}

TEST(Vector, EmptyTest) {

}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}