#include <list.h>
#include <limits.h>
#include <cstddef>
#include <assert.h>
#include <iostream>
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

void test_search_by_index()
{
    std::cout << "---------testing search_by_index()---------" << std::endl;
    int element1 = 25;
    int element2 = 45;
    List list;
    list.add(0, element1);
    list.add(1, element2);

    int resault1 = list.search_by_index(0);
    int resault2 = list.search_by_index(1);
    
    assert(element1 == resault1);
    std::cout << "testing search_by_index() function for element1 argument pass" << std::endl; 
    assert(element2 == resault2);
    std::cout << "testing search_by_index() function for element2 argument pass" << std::endl;  
}

void test_search_by_value()
{
    std::cout << "---------testing search_by_value()---------" << std::endl;
    int element1 = 0;
    int element2 = 1;
    List list;
    list.add(element1, 25);
    list.add(element2, 45);

    int resault1 = list.search_by_value(25);
    int resault2 = list.search_by_value(45);

    assert(element1 == resault1);
    std::cout << "testing search_by_value() function for element1 argument pass" << std::endl;
    assert(element2 == resault2);
    std::cout << "testing search_by_value() function for element2 argument pass" << std::endl;
    
}

void test_swap()
{
    std::cout << "---------testing swap()---------" << std::endl;
    List list;
    list.add(0, 25);
    list.add(1, 50);
    int element1 = list.search_by_index(0);
    int element2 = list.search_by_index(1);
    list.swap(0,1);
    int resault1 = list.search_by_index(0);
    int resault2 = list.search_by_index(1);
    assert(element1 == resault2);
    std::cout << "testing swap() function for element1 and resault2 pass" << std::endl;
    assert(element2 == resault1);
    std::cout << "testing swap() function for element2 and resault1 pass" << std::endl;
}

int main()
{
    test_add();
    test_search_by_index();
    test_search_by_value();
    test_swap();
    return 0;
}

