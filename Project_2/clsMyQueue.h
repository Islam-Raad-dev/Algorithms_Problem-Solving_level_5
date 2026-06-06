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
        return _MyList.GetItem(0);
    }

    T back()
    {
        return _MyList.GetItem(size() - 1);
    }

    int size()
    {
        return _MyList.size();
    }

    bool IsEmpty()
    {
        return _MyList.IsEmpty();
    }

    void print()
    {
        _MyList.PrintList();
    }
};