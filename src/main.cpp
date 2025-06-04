#include "LinkedList.h"
#include "Node.h"
#include <iostream>
#include <string>

int main() {
  LinkedList<int> intList;
  LinkedList<std::string> strList;
  LinkedList<float> floatList;
  LinkedList<int> *t1 = new LinkedList<int>();

  intList.AppendNode(4);
  intList.AddNode(34);
  intList.AddNode(89);
  intList.AddNode(3);
  intList.AddNode(3000);
  intList.AppendNode(45);
  intList.PrintList();

  strList.AppendNode("4");
  strList.AddNode("34");
  strList.AddNode("89");
  strList.AddNode("3");
  strList.AddNode("3000");
  strList.AppendNode("45");
  std::cout << "strList: ";
  strList.PrintList();

  LinkedList<std::string> *t2 = new LinkedList<std::string>(strList);
  std::cout << "*t2: ";
  t2->PrintList();

  t1->AddNode(15);
  t1->AddNode(234);
  t1->AddNode(1345);
  t1->AddNode(24);
  t1->AppendNode(124);
  t1->PrintList();

  LinkedList<int> *t3 = new LinkedList<int>(t1);
  t3->PrintList();
  t3->DeleteHead();

  return 0;
}
