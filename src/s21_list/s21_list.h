#ifndef LIB_CONTAINERS_S21_LIST_H
#define LIB_CONTAINERS_S21_LIST_H

namespace s21 {
template <typename T>
class List {
public:
  using value_type = T;
  using reference = T&;
  using const_reference = const T&;

  List() {
    end_ = new ListNode;
    end_->data = nullptr;
    end_->prev = end_;
    end_->next = end_;
  }
  ~List() {  // Временное решение, течёт. Переписать, когда будет итератор листа
    delete end_;
  }

  void push_back(value_type data) {
    ListNode *last_node = end_->prev;
    ListNode *node = new ListNode;
    node->data = new value_type;
    *(node->data) = data;
    node->prev = last_node;
    node->next = end_;
    end_->prev = node;
    last_node->next = node;
  }

//private:
  struct ListNode {
    value_type *data;
    ListNode *prev;
    ListNode *next;
  };
  ListNode *end_;

};  // class List
}  // namespace s21

#endif //LIB_CONTAINERS_S21_LIST_H
