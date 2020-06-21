#include <iostream>
#include "LinkedList.h"

using namespace std;

int main()
{
    LinkedList<int> l;
    
    l.pushBack(2);    //insertamos los nodos
    l.pushBack(3);
    l.pushBack(4);
    l.pushBack(5);
    l.pushFront(7);
    
    l.print();
    
    //l.pop(2);   //removemos indicando la posicion
    l.popFront();
    l.popBack();
    
    l.print();

    return 0;
}