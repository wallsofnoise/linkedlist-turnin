#include "Node.h" // include node header
#include "Student.h" // allow access to student class

Node::Node(Student* newstudent) { // constructor
  student = newstudent;
}

Node::~Node() { // destructor
  delete &student;
  next = NULL;
}

Student* Node::getStudent() { // get student pointer
  return student;
}

void Node::setNext(Node* newnext) { // set the next pointer to the corresponding node pointer
  next = newnext;
}

Node* Node::getNext() { // get next node pointer
  return next;
}
