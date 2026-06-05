/*

Project 1: Double Linked List Class

*/
#include <iostream>
#include "ClsMyDblLinkedList.h"

using namespace std;

int main()
{
    clsDblLinkeList < int > MyDblLinkedList;

    MyDblLinkedList.InsertAtBeginning(10);
    MyDblLinkedList.InsertAtBeginning(20);
    MyDblLinkedList.InsertAtBeginning(30);
    MyDblLinkedList.InsertAtEnd(40);
    MyDblLinkedList.InsertAtEnd(50);
    MyDblLinkedList.PrintList();

    cout << "Get Item: " << MyDblLinkedList.GetItem(3) << endl;
    
    return 0;
}