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

    T GetItem(int Index)
    {
        return _MyList.GetItem(Index);
    }

    void UpdateItem(int Index, T NewValue)
    {
        _MyList.UpdateItem(Index, NewValue);
    }

    void InsertAfter(int Index, T NewValue)
    {
        _MyList.InsertAfter(Index, NewValue);
    }

    void InsetAtFront(T Value)
    {
        _MyList.InsertAtBeginning(Value);
    }

    bool InsetAtBack(T Value)
    {
        _MyList.InsertAtEnd(Value);
    }

    void clear()
    {
        _MyList.clear();
    }
};