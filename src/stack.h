#ifndef STACK_H
#define STACK_H

#include "list.h"
#include "node.h"

class Stack : private List
{
    public:

      /**
       * @brief Default constructor.
       */
      Stack();
      
      /**
       * @brief Constructor with parameters.
       */
      Stack(int value);

      /**
       * @brief Function add element in top of Stack.
       * @param value is value of new element in Stack.
       * @return Fuction return bool.
       */
      bool push(int value);

      /**
       * @brief Function delete element in top of Stack.
       * @ Function returns deleted value.
       */
      int pop();

      /**
       * @brief Function return top value of the Stack.
       * @return Function return int value.
       */
      int peek();

      /**
       * @brief Fuction checks if the Stack empty.
       * @return Function return bool value.
       */
      bool is_empty();
      
      /**
       * @brief Function removes all elements from the stack.
       */
      bool make_empty();

      /**
       * @brief Function print the Stack.
       */
      void print();
      unsigned int get_size();
};

#endif
