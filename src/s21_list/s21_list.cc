#include "s21_list.h"

#include <iostream>

// Этот файл предназначен для проверки кода в main

int main() {
  s21::List<int> l;

  l.push_back(4);
  l.push_back(8);

  s21::List<int>::iterator it1 = l.begin();
  s21::List<int>::iterator it = l.end();

  std::cout << *it1 << std::endl;
  std::cout << *it << std::endl;

  return 0;
}