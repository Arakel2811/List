#include <iostream>
#include "stack.h"



Stack::Stack()
{
    
}

Stack::Stack(int value) : List(value)
{
    
}

bool Stack::push(int value)
{
    return List::push(value);
}

int Stack::pop()
{
    int value = head->value;
    List::pop();
    return value;
}

int Stack::peek()
{
   return head->value;
}

bool Stack::is_empty()
{
    bool resault = (NULL == head);
    return resault;
}

bool Stack:: make_empty()
{
    while(!is_empty()) {
        List::pop();
    }
}

void Stack::print()
{
    List::print(); 
}

unsigned int Stack::get_size()
{
    List::get_size();
}

