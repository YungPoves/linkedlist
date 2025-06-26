#include "LinkedList.h"
#include "Node.h"
#include <iostream>

template <class T> LinkedList<T>::LinkedList() : head(nullptr) {}

template <class T>
LinkedList<T>::LinkedList(const LinkedList<T> &oldList) : head(nullptr) {
  if (oldList.head == nullptr) {
    head = nullptr;
    return;
  }

  Node<T> *temp = oldList.head;

  while (temp != nullptr) {
    PushBack(temp->data);
	temp = temp->next;
  }
}

template <class T> LinkedList<T>::~LinkedList() {
  std::cout << "Deleting list." << std::endl;

  Node<T> *temp = new Node<T>();

  while (head != nullptr) {
    temp = head;
    head = head->next;
    delete temp;
  }

  temp = nullptr;
}

template <class T> void LinkedList<T>::PushFront(const T &value) {
  Node<T> *newNode = new Node<T>(value);
  newNode->next = head;
  head = newNode;

  newNode = nullptr;
}

template <class T> void LinkedList<T>::PushBack(const T &value) {
  Node<T> *newNode = new Node<T>(value);
  Node<T> *temp = new Node<T>();

  if (this->head == nullptr) {
    this->head = new Node<T>(value);
    return;
  }
  temp = this->head;

  while (temp->next != nullptr) {
    temp = temp->next;
  }
  temp->next = newNode;
}

template <class T> void LinkedList<T>::PrintList() {
  Node<T> *temp = new Node<T>();
  temp = this->head;

  std::cout << "HEAD";

  while (temp != nullptr) {
    std::cout << " -> " << temp->data;
    temp = temp->next;
  }
  std::cout << " -> TAIL" << std::endl;
}

template class LinkedList<int>;
template class LinkedList<std::string>;
template class LinkedList<float>;
