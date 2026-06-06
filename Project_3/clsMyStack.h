/*

My Stack Class

*/
#pragma once

#include <iostream>
#include "ClsMyDblLinkedList.h"
using namespace std;

template <class T>

class clsMyStack
{

protected:
    clsDblLinkeList<T> _MyList;

public:
    void push(T Value)
    {
        _MyList.InsertAtBeginning(Value);
    }

    void pop()
    {
        _MyList.DeleteFirstNode();
    }

    void print()
    {
        _MyList.PrintList();
    }

    int size()
    {
        _MyList.size();
    }

    T Top()
    {
        return _MyList.GetItem(size());
    }

    T Bottom()
    {
        return _MyList.GetItem();
    }
};