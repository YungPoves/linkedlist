#include "LinkedList.h"
#include "Node.h"

template <class T> LinkedList<T>::LinkedList() { this->head = nullptr; }
template <class T> LinkedList<T>::LinkedList(const LinkedList<T> &oldList) {
  // Node<T> *temp = new Node<T>(oldList.head);
  Node<T> *temp(oldList.head);

  while (temp != nullptr) {
    this->AddNode(temp);
    temp = temp->next;
  }
}
template <class T> LinkedList<T>::LinkedList(const LinkedList<T> *oldList) {
  Node<T> *temp = new Node<T>(oldList->head);

  while (temp != nullptr){
    this->AddNode(temp);
    temp = temp->next;
  }
}
template <class T> LinkedList<T>::~LinkedList() { this->ClearList(); }

template <class T> void LinkedList<T>::AddNode(T data) {
  Node<T> *newNode = new Node<T>(data);
  newNode->next = head;
  head = newNode;
}

template <class T> void LinkedList<T>::AddNode(Node<T> node) {
  Node<T> *newNode = new Node<T>(node);
  newNode->next = head;
  head = newNode;
}

template <class T> void LinkedList<T>::AppendNode(T data) {
  Node<T> *newNode = new Node<T>(data);

  if (this->head == nullptr) {
    head = newNode;
    return;
  }

  Node<T> *temp = new Node<T>();
  temp = this->head;

  while (temp->next != nullptr) {
    temp = temp->next;
  }
  temp->next = newNode;
}

template <class T> void LinkedList<T>::DeleteHead() {
  if (this->head == nullptr) {
    std::cout << "List is empty." << std::endl;
    return;
  }

  Node<T> *temp = this->head;
  this->head = head->next;
  delete temp;
}

template <class T> void LinkedList<T>::PrintList() {
  Node<T> *temp = new Node<T>();
  temp = this->head;

  std::cout << "HEAD";

  while (temp != nullptr) {
    std::cout << " -> " << temp->data;
    temp = temp->next;
  }
  std::cout << std::endl;
}

template <class T> void LinkedList<T>::ClearList() {
  if (this->head == nullptr)
    return;

  Node<T> *temp = this->head;

  while (temp != nullptr) {
    if (temp != nullptr) {
      this->DeleteHead();
      temp = this->head;
    }
  }
}

template <class T> int LinkedList<T>::GetLength() {
  int count = 1;
  Node<T> *temp = this->head;

  if (temp == nullptr)
    return 0;

  while (temp->next != nullptr) {
    count++;
    temp = temp->next;
  }

  return count;
}

template class LinkedList<int>;
template class LinkedList<std::string>;
template class LinkedList<float>;