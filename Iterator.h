#ifndef ITERATOR_H
#define ITERATOR_H

#include <iostream>
#include "Node.h"

using namespace std;

template<typename T>

class Iterator {
    private:
        Node<T>* it;      //el iterador sera de la clase Node
    public:
        Iterator(Node<T>* node=nullptr){
            it=node;
        }
        void operator=(Node<T>* node){
		    it=node;
    	}
    	Node<T>* operator++(){
    		it= it->getNext();
            return it;
    	}
    	T operator*(){
    		return it->getElem();
    	}
    	bool operator==(Node<T>* node){
    		return it==node;
    	}
    	bool operator!=(Node<T>* node){
    		return it!=node;
    	}
};

#endif