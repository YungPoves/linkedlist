#include "LinkedList.h"
#include "Node.h"
#include <iostream>
#include <string>

int main() {
  LinkedList<int> list;

  list.PushFront(666);
  list.PushFront(4);
  list.PushFront(6);
  list.PushFront(900);
  list.PushFront(2);
  list.PushBack(1);

  LinkedList<int> l2;
  l2.PushBack(9);

  list.PrintList();
  l2.PrintList();

  LinkedList<int> l3(list);
  l3.PushBack(12);
  l3.PrintList();

  std::cout << &list << std::endl;
  std::cout << &l2 << std::endl;
  std::cout << &l3 << std::endl;

  return 0;
}
