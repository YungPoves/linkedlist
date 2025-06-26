#include "Node.h"

template <class T> Node<T>::Node() : next(nullptr) {}

template <class T> Node<T>::Node(T data) : data(data), next(nullptr) {}

template <class T> Node<T>::Node(const Node<T> &oldNode) {
  data = oldNode.data;
  next = nullptr;
  *this = oldNode;
}

template class Node<int>;
template class Node<std::string>;
template class Node<float>;
