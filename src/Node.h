#ifndef NODE_H
#define NODE_H

#include <iostream>

template <typename T> class Node {
public:
  T data;
  Node *next;
  Node<T>();
  Node<T>(T data);
  Node<T>(const Node<T> &oldNode);
  Node<T>(const Node<T> *oldNode);
  ~Node<T>();
  void PrintNode();
  // Node<T> &operator=(const Node &other);
  // Node &operator=(T *other);
};

#endif
