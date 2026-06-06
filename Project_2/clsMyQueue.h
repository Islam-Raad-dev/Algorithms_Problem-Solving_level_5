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

    void Reverse()
    {
        _MyList.Reverse();
    }

    T GetItem(T Item)
    {
        return _MyList.GetNode(Item);
    }

    bool UpdateItem(int Index, T NewValue)
    {
        return 0;
    }

    bool InsertAfter(int Index, T Value)
    {
        return 0;
    }

    bool InsetAtFront(T Value)
    {

    }

    bool InsetAtBack(T Value)
    {
        
    }

    void clear()
    {
        _MyList.clear();
    }
};