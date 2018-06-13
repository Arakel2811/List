#include "list.h"
#include  <iostream>


int main()
{
  List a;
  a.add(0,54);
  a.print();
  std::cout<< "------------add--------------" <<std::endl;

  a.add(1,5);
  a.print();
  std::cout<< "------------add--------------" <<std::endl;

  a.add(2, 123);
  a.print();
  std::cout<< "------------add----------" <<std::endl;

  a.add(2, 1);
  a.print();
  std::cout<< "-------------add-------------" <<std::endl;

  a.remove(3);
  a.print();
  std::cout<< "---------remove-------------" <<std::endl;

  int k =  a.search_by_index(2);
  std::cout<< k <<"-----search_by_index-------" <<std::endl;

  int l = a.search_by_value(54);
  std::cout<< l << "------search_by_value------" <<std::endl;

  a.set(0,66);
  int m = a.search_by_index(0);
  a.print();
  std::cout<< m << "------set------" <<std::endl;

  a.swap(0,2);
  a.print();
  std::cout<< "----------swap-----------" <<std::endl;

  return 0;
}
