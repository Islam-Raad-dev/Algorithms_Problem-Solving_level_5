/*

Dinamic Array Project
                             
*/

#include <iostream>
#include "clsMYDynamicArray.h"

using namespace std;

int main()
{
    clsMyDynaminArray <int> MyDynaminArray(5);

    MyDynaminArray.SetItem(0, 1);
    MyDynaminArray.SetItem(1, 2);
    MyDynaminArray.SetItem(2, 3);
    MyDynaminArray.SetItem(3, 4);
    MyDynaminArray.SetItem(4, 5);

    MyDynaminArray.PrintList();


    cout << "\nIs Empty : " << MyDynaminArray.IsEmpty();


    cout << "\nSize : " << MyDynaminArray.size() << endl;

    return 0;
}
