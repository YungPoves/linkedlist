#include "LinkedList.h"
#include "Node.h"
#include <iostream>
#include <string>

int main() {
  LinkedList<int> intList;
  LinkedList<std::string> *strList = new LinkedList<std::string>();
  LinkedList<float> *floatList = new LinkedList<float>();

  intList.AppendNode(4);
  intList.AddNode(34);
  intList.AddNode(89);
  intList.AddNode(3);
  intList.AddNode(3000);
  intList.AppendNode(45);
  intList.PrintList();

  LinkedList<int> t1(intList);
  t1.PrintList();

  return 0;
}
