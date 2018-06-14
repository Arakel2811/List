#include "list.h"
#include <iostream>
#include <assert.h>

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
   if(0 == index) {
      node->next = h;
      if(h){
        h->prev = node;
      } else {
        tail = node;
      }
      node->prev = NULL;
      head = node;
   } else if(length == index) {
        node->next = NULL;
        node->prev = tail;
        tail->next = node;
        tail = node;
   } else {
       Node* prev = head;
       for(int i = 0; i < index - 1 && prev; ++i) {
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
  if(index > length - 1 ) {
    return ;
  }
  if(0 == index) {
    Node* cur_head = head->next;
    cur_head->prev = NULL;
    delete head;
    head = cur_head;
  } else if(length - 1 == index) {
      Node* cur_tail = tail->prev;
      cur_tail->next = NULL;
      Node* old_tail = tail;
      delete old_tail;
      tail = cur_tail;
  } else { 
    Node* k = head;
    for(int i = 0; i < index; ++i) {
      k = k->next;
    }
    Node* prev = k->prev;
    Node* next = k->next;
    next->prev = prev;
    prev->next = next;
    delete k;
  }
  --length;
}

int List::search_by_index(unsigned int index) const {
  if(index > length - 1 ) {
    return -2;
  }
  Node* k = head;
  for(int i = 0; i < index; ++i) {
    k = k->next;
  }
  return k->value; 
}

int List::search_by_value(int value) const
{
  int i = 0;
  Node * n = head;
  while(NULL != n) {
    if(value = n->value) {
      return i;
    }
    n = n->next;
    ++i;
  }
  return -2;
}

void List::set(unsigned int index, int value)
{  
  Node* k = head;
  for(int i = 0; i < index; ++i) {
    k = k->next;
  }
  k->value = value;
}

void List::swap(unsigned int first_index, unsigned int second_index)
{
  if((first_index > length - 1) || (second_index > length - 1)) {
    return;
  }
  Node* k1 = head;
  for(int i = 0; i < first_index; ++i) {
    k1 = k1->next;
  }
  Node* swap1 = k1;
  Node* k2 = head;
  for(int i = 0; i < second_index; ++i) {
    k2 = k2->next;
  }
  Node* swap2 = k2;
  int tmp = swap1->value;
  swap1->value = swap2->value;
  swap2->value = tmp;
}

List& List::operator = (const List& list)
{
  std::cout << "====" << std::endl;
  head = list.head;
  tail = list.tail;
  length = list.length;
  return *this;
}

List::~List()
{
  std::cout << "called Node destructor !!!" << std::endl;
}

void List::print()
{
  Node* node = head;
  for(int i = 0; i < length; ++i) {
    std::cout << i << ") " << node->value << std::endl;
    node = node->next;
  }
}

bool List::push(int value)
{
  Node* new_node = new Node();
  new_node->value = value;
  if(0 == length){
    head  = new_node;
    tail  = new_node;
    ++length;
    return true;
  }
  Node* temp = tail;
  new_node->prev = temp;
  temp->next = new_node;
  tail = new_node;
  ++length;
  if(tail->prev) {
    return true;
  }
  return false;
}

bool List::pop()
{
  if(0 == length) {
    return true;
  }
  if(1 == length) {
    delete head;
    head = NULL;
    tail = NULL;
    --length;
    return true;
  }
  Node* old = tail;
  assert(NULL != old);
  tail = tail->prev;
  tail->next = NULL;
  assert(NULL != tail);
  old->prev = NULL;
  delete old;
  --length;
  if(tail) {
    return true;
  }
  return false;
}
