#include "s21_list.h"

#include <iostream>
#include <list>

// Этот файл предназначен для проверки кода в main

int main() {
  s21::List<int> l;
  std::list<int> sl;

  l.push_back(4);
  sl.push_back(4);

//  s21::List<int>::iterator it1 = l.begin();
//  s21::List<int>::iterator it = l.end();
//
//  std::cout << *it1 << std::endl;
//  std::cout << *it << std::endl;

  std::cout << sl.front() << std::endl;
  std::cout << l.front() << std::endl;

  return 0;
}