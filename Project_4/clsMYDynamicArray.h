#pragma once

#include <iostream>

using namespace std;

template <class T>
class clsMyDynaminArray
{

protected:

    int _Size = 0;
    T* _TempArray;

public:

    T* OriginalArray;

    clsMyDynaminArray(int Size = 0)
    {
       if(Size < 0)
        Size = 0;

        _Size = Size;

        OriginalArray = new T[_Size];
    }

    ~clsMyDynaminArray()
    {
        delete[] OriginalArray;
    }

    bool SetItem(int Index, T Value)
    {
        if(Index >= _Size || _Size < 0)
            return false;

        OriginalArray[Index] = Value;
        return true;
    }

        bool IsEmpty()
    {

    }

    int size()
    {

    }

    void PrintList()
    {

    }



};