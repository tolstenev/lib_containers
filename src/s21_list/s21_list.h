#ifndef LIB_CONTAINERS_S21_LIST_H
#define LIB_CONTAINERS_S21_LIST_H

namespace s21 {

template <typename T>
struct ListNode {
 public:
  using value_type = T;

  value_type *data_{};
  ListNode *prev_{};
  ListNode *next_{};
};

template <typename T>
class List {
  class ListIterator;

 public:  // class List
  using value_type = T;
  using reference = T &;
  using const_reference = const T &;
  using iterator = ListIterator;
  using node = ListNode<T>;

  List();
  ~List();

  void push_back(const_reference data);

  const_reference front();
  const_reference back();

  iterator begin();
  iterator end();

 private:  // class List
  node *end_{};

  class ListIterator {
   public:  // class ListIterator
    friend node;
    ListIterator() = default;
    explicit ListIterator(node *p) : ptr_(p){};
    ListIterator(const ListIterator &other) : ptr_(other.ptr_){};

    reference operator*() { return *(ptr_->data_); }

   private:  // class ListIterator
    node *ptr_{};
  };  // class ListIterator
};    // class List

template <typename T>
List<T>::List() {
  end_ = new node;
  end_->data_ = nullptr;
  end_->prev_ = end_;
  end_->next_ = end_;
}

template <class value_type>
List<value_type>::~List() {  // Временное решение, течёт. Переписать, когда
  // будет итератор листа
  if (this->end_) delete end_;
}

template <class value_type>
void List<value_type>::push_back(const_reference data) {
  node *last_node = end_->prev_;
  auto *new_node = new node;
  new_node->data_ = new value_type;
  *(new_node->data_) = data;
  new_node->prev_ = last_node;
  new_node->next_ = end_;
  end_->prev_ = new_node;
  last_node->next_ = new_node;
}

template <class value_type>
typename List<value_type>::iterator List<value_type>::begin() {
  return iterator(end_->next_);
}

template <class value_type>
typename List<value_type>::iterator List<value_type>::end() {
  return iterator(end_->prev_);
}

template <class value_type>
typename List<value_type>::const_reference List<value_type>::front() {
  return *((end_->next_)->data_);
}

template <class value_type>
typename List<value_type>::const_reference List<value_type>::back() {
  return *((end_->prev_)->data_);
}

}  // namespace s21

#endif  // LIB_CONTAINERS_S21_LIST_H
