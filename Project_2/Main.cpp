/*

Queue Project
                           
*/
#include <iostream>
#include "clsMyQueue.h"

using namespace std;

int main()
{
    clsMyQueue<int> MyQueue;

    MyQueue.push(10);
    MyQueue.push(20);
    MyQueue.push(30);
    MyQueue.push(40);

    cout << "Queue Item: "; MyQueue.print();

    cout << "Size : " << MyQueue.size() << endl;
    cout << "Front : " << MyQueue.front() << endl;
    cout << "Back : " << MyQueue.back() << endl;

    MyQueue.pop();
    cout << "POP : "; MyQueue.print();

    cout << "Reverse : " ; MyQueue.Reverse();

    return 0;
}