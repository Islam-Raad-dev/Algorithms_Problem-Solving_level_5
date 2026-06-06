/*

My Dinamic Array Project

*/

#include <iostream>
#include "clsMYDynamicArray.h"

using namespace std;

int main()
{
    clsMyDynaminArray <int> MyDynaminArray(5);

    MyDynaminArray.SetItem(0, 1);
    MyDynaminArray.SetItem(0, 2);
    MyDynaminArray.SetItem(0, 3);
    MyDynaminArray.SetItem(0, 4);
    MyDynaminArray.SetItem(0, 5);

    MyDynaminArray.PrintList();

    cout << "Is Empty : " ; MyDynaminArray.IsEmpty();

    return 0;
}
