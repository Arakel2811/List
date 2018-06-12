#include "list.h"


List::List()
{
    head = NULL;
    tail = NULL;
    length = 0;
}

List::List(int value)
{
  //Node* node = new Node();
}

List::List(List& list)
{

}

void List::add(unsigned int index, int value)
{
    Node* node = new Node();
    node->value = value;
    node->next = this->head;
    this->head = node;
    this->length++;
}

void List::remove(unsigned int index)
{
  
}

unsigned int List::search_by_index(int value)
{

}

int List::search_by_value(unsigned int index)
{

}

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
    
}


