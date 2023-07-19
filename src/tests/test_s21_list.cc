#include "test_s21_containers.h"

class ListTest : public testing::Test {
 protected:
  // Создание и инициализация объектов для тестов
  s21::List<int> s21_list_int;
  std::list<int> std_list_int;
};

TEST_F(ListTest, PushBack) {
  int value = 42;
  // Вызов тестируемых методов
  s21_list_int.push_back(value);
  std_list_int.push_back(value);

  // Сравнение результатов
  EXPECT_EQ(s21_list_int.front(), std_list_int.front());
  EXPECT_EQ(s21_list_int.back(), std_list_int.back());
}