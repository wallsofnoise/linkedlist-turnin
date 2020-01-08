#include <iostream>
#include <string.h> // for strcpy()
#include "Student.h" // allow access to student class
#include "Node.h" // allow access to node class

using namespace std;

// name: rose hall
// date: 01.08.20
// project: linked lists pt 1. create a node class for someone else to use with a basic set of functions. this main will demonstrate that the functions work.

int main() {
  // char arrays for test strings
  char* testString1 = new char[500];
  strcpy(testString1,"if this prints, student 1 has been successfully created and accessed successfully via getStudent() in a node.");
  char* testString2 = new char[500];
  strcpy(testString2,"if this prints, student 2 has been successfully created in a second node, and the node has been successfully assigned and accessed by getNext() and setNext()");
  
  Student* testStu1 = new Student(testString1); // create first student
  Student* testStu2 = new Student(testString2); // create second student

  Node* testNode1 = new Node(testStu1); // create first node
  Node* testNode2 = new Node(testStu2); // create second node

  testNode1->setNext(testNode2); // set next node of node 1 to the second test node

  cout << testNode1->getStudent()->getTestString() << endl; // print the test string in the first student

  cout << testNode1->getNext()->getStudent()->getTestString() << endl; // print the test string in the second student

  delete testNode1->getNext();
}
