#ifndef QUEUE_H
#define QUEUE_H
#include "list.h"



class Queue :private List
{
    public:
        /**
         * @brief Default constructor.
         */
        Queue();

        /**
         * @brief Constructor with parameters.
         */
        Queue(int value);

        /**
         * @brief Function add element to the Queue.
         * @param value is a new value.
         */
        void push_back(int value);

        /**
         * @brief Function remove the first element and return it.
         */
        int pop_front();

        /**
         * @brief Function deletes all elements of the Queue.
         */
        void make_empty();

        /**
         * @brief Function return first element of the Queue.
         */
        int front();

        /**
         * @brief Function return last element of the Queue.
         */
        int back();
        /**
         * Function return size of Queue.
         */
        int get_size();

        /**
         * @brief Function check if the Queue is empty.
         */
        bool is_empty();

        /**
         * @brief Function print all elements in Queue.
         */
        void print();
};
#endif
