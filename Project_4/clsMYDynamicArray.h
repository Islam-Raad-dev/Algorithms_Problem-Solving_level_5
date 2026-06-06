#pragma once

#include <iostream>
#include "clsMyStack.h"

using namespace std;

template <class T>
class clsMyDynaminArray
{
private:

    T _Index;

protected:

    clsMyStack < int > MyStack;

public:

    clsMyDynaminArray(T index)
    {
        _Index = index;
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