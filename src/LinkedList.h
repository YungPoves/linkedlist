#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <memory>
#include "Node.h"

template<typename T> class LinkedList
{
  private:
  Node<T> *head;
  std::unique_ptr<Node<T>> n();

  public:
  LinkedList();
  LinkedList(const LinkedList &t);
  LinkedList(const LinkedList *t);
  ~LinkedList();
  void AddNode(T data);
  void AddNode(Node<T> node);
  void AppendNode(T data);
  void DeleteHead();
  void PrintList();
  void ClearList();
  int GetLength();
};

#endif