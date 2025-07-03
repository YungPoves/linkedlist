#include "LinkedList.h"
#include "Node.h"
#include <iostream>

template <class T> LinkedList<T>::LinkedList() : head(nullptr), size(0) {}

template <class T>
LinkedList<T>::LinkedList(const LinkedList<T> &oldList) : head(nullptr), size(0) {
  if (oldList.head == nullptr) {
    head = nullptr;
    size = oldList.size;

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

template <class T>
LinkedList<T> &LinkedList<T>::operator=(const LinkedList<T> &t) {
  if (t.head == nullptr) {
    return *this;
  }

  Node<T> *temp = new Node<T>();
  temp = t.head;

  while (temp != nullptr) {
    this->PushBack(temp->data);
    temp = temp->next;
  }

  return *this;
}

template <class T> void LinkedList<T>::PushFront(const T &value) {
  Node<T> *newNode = new Node<T>(value);

  if (this->head == nullptr) {
    this->head = newNode;
    size++;

    return;
  }

  newNode->next = head;
  head = newNode;
  size++;

  newNode = nullptr;
}

template <class T> void LinkedList<T>::PushBack(const T &value) {
  Node<T> *newNode = new Node<T>(value);
  Node<T> *temp = new Node<T>();

  if (this->head == nullptr) {
    this->head = new Node<T>(value);
    size++;

    return;
  }
  temp = this->head;

  while (temp->next != nullptr) {
    temp = temp->next;
  }
  temp->next = newNode;
  size++;
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
