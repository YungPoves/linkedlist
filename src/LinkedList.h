#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"

template <typename T> class LinkedList {
private:
  Node<T> *head;

public:
  LinkedList();
  LinkedList(const LinkedList &oldList);
  ~LinkedList();
  LinkedList &operator=(const LinkedList &t);
  void PushFront(const T &value);
  void PushBack(const T &value);
  void PrintList();
};

#endif