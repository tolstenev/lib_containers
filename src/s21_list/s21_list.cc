#include "s21_list.h"
#include <iostream>

int main() {
  s21::List<int> l;

  l.push_back(4);
  l.push_back(8);
  l.push_back(15);

  std::cout << *(l.end_->next->data) << std::endl;
  std::cout << *(l.end_->next->next->data) << std::endl;
  std::cout << *(l.end_->next->next->next->data) << std::endl;

  return 0;
}