#include <gtest/gtest.h>

#include "s21_containers.h"
#include "s21_containersplus.h"

#include <array>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <vector>

class ArrayTest : public testing::Test {
 protected:
  // Здесь создаём объекты для тестов, инициализируем их
};

TEST_F(ArrayTest, NameOfTest_1) {
  // Сразу вызываем тестируемые методы для созданных в классе объектов

  // Сравниваем результаты
}

TEST_F(ArrayTest, NameOfTest_2) {

}

class ListTest : public testing::Test {
 protected:
  // Создание и инициализация объектов для тестов
  s21::List<int> s21_list_int;
  std::list<int> std_list_int;
};

TEST_F(ListTest, PushBack_1) {
  int value = 42;
  // Вызов тестируемых методов
  s21_list_int.push_back(value);
  std_list_int.push_back(value);

  // Сравнение результатов
  EXPECT_EQ(s21_list_int.front(), std_list_int.front());
  EXPECT_EQ(s21_list_int.back(), std_list_int.back());
}

TEST_F(ListTest, PushBack_2) {
  int value_1 = 21;
  int value_2 = 42;
  // Вызов тестируемых методов
  s21_list_int.push_back(value_1);
  s21_list_int.push_back(value_2);
  std_list_int.push_back(value_1);
  std_list_int.push_back(value_2);

  // Сравнение результатов
  EXPECT_EQ(s21_list_int.front(), std_list_int.front());
  EXPECT_EQ(s21_list_int.back(), std_list_int.back());
}

class MapTest : public testing::Test {
 protected:
  // Здесь создаём объекты для тестов, инициализируем их
};

TEST_F(MapTest, NameOfTest_1) {
  // Сразу вызываем тестируемые методы для созданных в классе объектов

  // Сравниваем результаты
}

TEST_F(MapTest, NameOfTest_2) {

}

class MultisetTest : public testing::Test {
 protected:
  // Здесь создаём объекты для тестов, инициализируем их
};

TEST_F(MultisetTest, NameOfTest_1) {
  // Сразу вызываем тестируемые методы для созданных в классе объектов

  // Сравниваем результаты
}

TEST_F(MultisetTest, NameOfTest_2) {

}

class QueueTest : public testing::Test {
 protected:
  // Здесь создаём объекты для тестов, инициализируем их
};

TEST_F(QueueTest, NameOfTest_1) {
  // Сразу вызываем тестируемые методы для созданных в классе объектов

  // Сравниваем результаты
}

TEST_F(QueueTest, NameOfTest_2) {

}

class SetTest : public testing::Test {
 protected:
  // Здесь создаём объекты для тестов, инициализируем их
};

TEST_F(SetTest, NameOfTest_1) {
  // Сразу вызываем тестируемые методы для созданных в классе объектов

  // Сравниваем результаты
}

TEST_F(SetTest, NameOfTest_2) {

}

class StackTest : public testing::Test {
 protected:
  // Здесь создаём объекты для тестов, инициализируем их
};

TEST_F(StackTest, NameOfTest_1) {
  // Сразу вызываем тестируемые методы для созданных в классе объектов

  // Сравниваем результаты
}

TEST_F(StackTest, NameOfTest_2) {

}

class VectorTest : public testing::Test {
 protected:
  // Здесь создаём объекты для тестов, инициализируем их
};

TEST_F(VectorTest, NameOfTest_1) {
  // Сразу вызываем тестируемые методы для созданных в классе объектов

  // Сравниваем результаты
}

TEST_F(VectorTest, NameOfTest_2) {

}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}