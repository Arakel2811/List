#include "list.h"
#include <iostream>


List::List()
{
    head = NULL;
    tail = NULL;
    length = 0;
}

List::List(int value)
{
  Node* node = new Node();
  node->value = value;
  head = tail = node;
  length = 1;
}

List::List(List& list)
{
  Node* node = list.head;
  Node* first = new Node();
  Node* current = first;
  while(node){
    current->value = node->value;
    current->next = node->next;
    current->prev = node->prev;
    node = node->next;
    ++length;  
  }
  head = first;
  tail = current;
}

void List::add(unsigned int index, int value)
{
    Node* h = head;
    Node* node = new Node();
    node->value = value;
    Node* last = new Node();
    if(0 == index) {
         node->next = h;
         h->prev = node;
         node->prev = NULL;
         head = node;
    } else if(length - 1 == index) {
        for(int i = 0; i <= length - 1; ++i) {
            last = h->next;
        }
        last->next = node;
        node->prev = last;
        node->next = NULL;
    }else {
      Node* prev = head;
      for(int i = 0; i < index && prev; ++i) {
        prev = prev->next;
      }
      Node* next = prev->next;
      prev->next = node;
      node->prev = prev;
      node->next = next;
      next->prev = node;
    }
    ++length;
}

void List::remove(unsigned int index)
{
  
}

//unsigned int List::search_by_index(int value)
//{
//
//}
//
//int List::search_by_value(unsigned int index)
//{
//
//}
//
void List::set(unsigned int index, int value)
{
  
}

void List::swap(unsigned int first_index, unsigned int second_index)
{

}

List& List::operator = (const List& list)
{

}

List::~List()
{
    delete head;
    delete tail;    
}

void List::print()
{
  Node* node = head;
  for(int i = 0; i < length; ++i) {
      std::cout << i << ") " << node->value << std::endl;
      node = node->next;
  }
}
