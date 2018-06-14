#include <list.h>
#include <limits.h>
#include <cstddef>
#include <assert.h>
#include <iostream>
#include <string>
#include <stdio.h>

void test_add()
{
  std::cout << "---------testing add()---------" << std::endl;
  List list;
  unsigned int i0 = 0;
  int v0 = 10;
  list.add(i0, v0);
  int r0 = list.search_by_index(i0);
  assert(v0 == r0);
  std::cout << "first add pass" << std::endl;

  unsigned int i1 = 1;
  int v1 = 20;
  list.add(i1, v1);
  int r1 = list.search_by_index(i1);
  assert(v1 == r1);
  std::cout << "add to the end pass" << std::endl;

  int v3 = 30;
  list.add(i1, v3);
  int r3=list.search_by_index(i1);
  assert(v3 == r3);
  std::cout << "add between two nodes pass" << std::endl;

  int v4 = 30;
  list.add(i0, v4);
  int r4=list.search_by_index(i0);
  assert(v4 == r4);
  std::cout << "add to the beginning pass" << std::endl;

  unsigned int i_wrong = 30;
  list.add(i_wrong, v4);
  std::cout << "add to the wrong index pass" << std::endl;

  std::cout << "add pass" << std::endl;
}

int main()
{
  test_add();
  return 0;
}






























//void test_remove()
//{
//  std::cout << "======testing remove()=======" << std::endl;
//  List list;
//  int v = 0;
//  int v1 = 1;
//  int v2 = 2;
//  int v3 = 3;
//  int v4 = 4;
//  list.add(0, v);
//  list.add(1, v1);
//  list.add(2, v2);
//  list.add(3, v3);
//  list.add(4, v+4);
//  unsigned int i1 = 1;
//  list.add(i1, v4);
//  // 0, 4, 1, 2, 3, 4
//  list.remove(i1);
//  //    // 0, 1, 2, 3, 4
//  int r1 = list.get(i1);
//  assert(v1 == r1);
//  std::cout << "remove from middle of the list pass" << std::endl;
//
//  list.remove(0i);
//  // 1, 2, 3, 4
//  int r0 = list.get_first();
//  assert(v1 == r0); 
//  std::cout << "remove from the start pass" << std::endl;
//
//  list.remove(3);
//  // 1, 2, 3
//  int r2 = list.get_last();
//  assert(v3 == r2); 
//  std::cout << "remove from end pass" << std::endl;
//
//  unsigned int i_wrong = 20;
//  assert(false == list.remove(i_wrong));
//  std::cout << "remove from wrong index pass" << std::endl;
//}
//

