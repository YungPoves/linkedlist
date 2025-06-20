#include "Node.h"

template <class T> Node<T>::Node() : next(nullptr) {}
template <class T> Node<T>::Node(T data) {
  this->data = data;
  this->next = nullptr;
}
template <class T> Node<T>::Node(const Node<T> &oldNode) {
  this->data = oldNode.data;
}
template <class T> Node<T>::Node(const Node<T> *oldNode) {
  this->data = oldNode->data;
  this->next = oldNode->next;
}

template <class T> Node<T>::~Node<T>() {}

// template <class T> void Node<T>::PrintNode() { std::cout << this->data; }

// template <class T> Node<T> &Node<T>::operator=(const Node &other) {
//   if (next != nullptr)
//     delete next;
//   if (other != nullptr) {

//   }
// }

template class Node<int>;
template class Node<std::string>;
template class Node<float>;