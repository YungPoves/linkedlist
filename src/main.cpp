#include "LinkedList.h"
#include "Node.h"
#include <iostream>
#include <string>

int main() {
  LinkedList<int> l1;

  l1.PushFront(666);
  l1.PushFront(4);
  l1.PushFront(6);
  l1.PushFront(900);
  l1.PushFront(2);
  l1.PushBack(1);

  LinkedList<int> l2;
  l2.PushBack(9);

  LinkedList<int> l3(l1);
  l3.PushBack(12);

  LinkedList<int> l4;
  l4.PushFront(999);

  LinkedList<int> l5;
  l5 = l3;
  l5.PushFront(22);

  std::cout << "l1: " << &l1 << std::endl;
  l1.PrintList();
  std::cout << "l2: " << &l2 << std::endl;
  l2.PrintList();
  std::cout << "l3: " << &l3 << std::endl;
  l3.PrintList();
  std::cout << "l4: " << &l4 << std::endl;
  l4.PrintList();
  std::cout << "l5: " << &l5 << std::endl;
  l5.PrintList();
 
  return 0;
}
