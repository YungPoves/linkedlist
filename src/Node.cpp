#include "Node.h"

template <class T> Node<T>::Node(T data) : data(data), next(nullptr) {}

template <class T> Node<T>::Node(const Node<T> &oldNode) {
  this->data = oldNode.data;
}

template <class T> Node<T>::~Node<T>() {
  delete next;
  next = nullptr;
}

template class Node<int>;
template class Node<std::string>;
template class Node<float>;
