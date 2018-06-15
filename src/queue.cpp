#include "list.h"
#include "queue.h"
#include <iostream>

Queue::Queue()
{

}

Queue::Queue(int value) : List(value)
{

}

void Queue::push_back(int value)
{
    List::push(value);
}

int Queue::pop_front()
{
    int first = List::get_head();
    List::remove(0);
    return first;
}

void Queue::make_empty()
{
    while(!is_empty()) {
      List::pop();
    }
}

int Queue::front()
{
    return List::get_head();
}

int Queue::back()
{
    return List::get_tail();
}

int Queue::get_size()
{
    return List::get_size();
}

bool Queue::is_empty()
{
    bool resault = (NULL == head);
    return resault;
}

void Queue::print()
{
    List::print();
}

