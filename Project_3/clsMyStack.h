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

    void Print()
    {
        _MyList.PrintList();
    }

    void Reverse()
    {
        _MyList.Reverse();
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
        _MyList.InsertAtEnd(Value);
    }

    void InsetAtBack(T Value)
    {
        _MyList.InsertAtBeginning(Value);
    }

    void clear()
    {
        _MyList.clear();
    }

    int size()
    {
        return _MyList.size();
    }

    bool IsEmpty()
    {
        return _MyList.IsEmpty();
    }

    T Top()
    {
        return _MyList.GetItem(0);
    }

    T Bottom()
    {
        return _MyList.GetItem(size() - 1);
    }

    T GetItem(int Index)
    {
        return _MyList.GetItem(Index);
    }


};