#pragma once

#include <iostream>
#include "clsMyStack.h"

using namespace std;

template <class T>
class clsMyDynaminArray
{
private:

    T _Value;

protected:

    clsMyStack < int > MyStack;

public:

    clsMyDynaminArray(T vlaue)
    {
        _Value = vlaue;
    }

    void SetItem(int Index, T Value)
    {

    }

    void PrintList()
    {

    }

    bool IsEmpty()
    {

    }

    int size()
    {

    }

};