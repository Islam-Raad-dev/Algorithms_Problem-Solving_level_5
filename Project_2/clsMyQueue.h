#pragma once

#include <iostream>
#include "ClsMyDblLinkedList.h"
using namespace std;

template <class T>
class clsMyQueue
{

protected:
    clsDblLinkeList<T> _MyList;

public:
    void push(T Item)
    {
        _MyList.InsertAtEnd(Item);
    }

    void pop()
    {
        _MyList.DeleteFirstNode();
    }

    T front()
    {
    }

    T back()
    {
    }

    int size()
    {
        return _MyList.size();
    }

    bool IsEmpty()
    {
        
    }

    void print()
    {
        _MyList.PrintList();
    }
};