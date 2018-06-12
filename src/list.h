#ifndef LIST_H
#define LIST_H
#include "node.h"

class List
{
    private:
      Node* head;
      Node* tail;
      int length;
    public:
      /**
       * @brief Default constructor of class List. 
       */
      List();

      /**
       * @brief Constructor with parameters of class List.
       */
      List(int value);

      /**
       * @brief Copy constructor of class List.
       */
      List(List& list);

      /**
       * @brief Function add adds an element in List.
       * @param index is an index of List
       * @param value is value of element.
       */
      void add(unsigned int index, int value);

      /**
       * @brief Function removes an element in list by index.
       * @param index is an index of list.
       */
      void remove(unsigned int index);

      /**
      * @brief Function search an element by index.
      * @param index is an index of element.
      * @return Function returns value of element.
      */
      int search_by_index(unsigned int index);
      
      /**
       * @brief Function search an element by value.
       * @param value is the value of element.
       * @return Function returns index of element.
       */
      unsigned int search_by_value(int value);
      
      /**
       * @brief Function sets the value by index
       * @param index is an index of List
       * @param value is value of element.
       */
      void set(unsigned int index, int value);

      /**
       * @brief Function changes the values of first_index and second_index
       * @param first_index is an index of List
       * @param second_index is an index of List.
       */
      void swap(unsigned int first_index, unsigned int second_index);
     
      /**
       * @brief Default constructor of class List. 
       */
      List& operator = (const List& list);
     
      /**
       * @brief Default constructor of class List. 
       */
      ~List();
};
#endif


















