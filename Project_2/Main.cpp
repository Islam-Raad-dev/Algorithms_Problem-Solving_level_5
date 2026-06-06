/*

My Queue Class

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

    MyQueue.size();
    MyQueue.front();
    MyQueue.back();

    MyQueue.pop();

    MyQueue.print();

    return 0;
}