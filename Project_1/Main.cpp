/*

Project 1: Double Linked List Class

*/
#include <iostream>
#include "ClsMyDblLinkedList.h"

using namespace std;

int main()
{
    clsDblLinkeList < int > MyDblLinkedList;

    MyDblLinkedList.InsertAtBeginning(5);
    MyDblLinkedList.InsertAtBeginning(4);
    MyDblLinkedList.InsertAtBeginning(3);
    MyDblLinkedList.InsertAtBeginning(2);
    MyDblLinkedList.InsertAtBeginning(1);
    MyDblLinkedList.PrintList();
    
    
    return 0;
}