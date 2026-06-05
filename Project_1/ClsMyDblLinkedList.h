#pragma once

template <class T>
class clsDblLinkeList
{

public:

    class Node
    {
    public:
        T Value;
        Node *Next;
        Node *Prev;
    };

    Node *Head = NULL;

    void InsertAtBeginning(T Value)
    {
        Node *NewNode = new Node();
        NewNode->Value = Value;
        NewNode->Next = Head;
        NewNode->Prev = NULL;

        if (Head != NULL)
        {
            Head->Prev = NewNode;
        }

        Head = NewNode;
    }

    void PrintList()
    {
        Node *Current = Head;

        while (Current != NULL)
        {
            cout << Current->Value << " ";
            Current = Current->Next;
        }

        cout << endl;
    }

    Node *Find(T Value)
    {
        Node *Current = Head;
        
        while (Current != NULL)
        {
            if (Current->Value == Value)
            {
                return Current;
            }
            Current = Current->Next;
        }
        return NULL;
    }

    void InsertAfter(Node *Current, T Value)
    {
        Node *NewNode = new Node();
        NewNode->Value = Value;
        NewNode->Next = Current->Next;
        NewNode->Prev = Current;

        if (Current->Next != NULL)
        {
            Current->Next->Prev = NewNode;
        }

        Current->Next = NewNode;
    }

    void InsertAtEnd(Node *&Head, int Value)
    {

        Node *NewNode = new Node();
        NewNode->Value = Value;
        NewNode->Next = NULL;

        if (Head == NULL)
        {
            NewNode->Prev = NULL;
            Head = NewNode;
        }
        else
        {
            Node *Current = Head;
            while (Current->Next != NULL)
            {
                Current = Current->Next;
            }

            Current->Next = NewNode;
            NewNode->Prev = Current;
        }
    }

    Node *DeleteNode(Node *&Head, Node *&NodeToDelete)
    {
        if (Head == NULL || NodeToDelete == NULL)
        {
            return NULL;
        }

        if (Head == NodeToDelete)
        {
            Head = NodeToDelete->Next;
        }

        if (NodeToDelete->Next != NULL)
        {
            NodeToDelete->Next->Prev = NodeToDelete->Prev;
        }

        if (NodeToDelete->Prev != NULL)
        {
            NodeToDelete->Prev->Next = NodeToDelete->Next;
        }

        delete NodeToDelete;
        return NULL;
    }

    void DeleteFirstNode(Node *&Head)
    {
        if (Head == NULL)
        {
            return;
        }

        Node *Temp = Head;
        Head = Head->Next;

        if (Head != NULL)
        {
            Head->Prev = NULL;
        }

        delete Temp;
    }

    void DeleteLastNode(Node *&Head)
    {
        if (Head == NULL)
        {
            return;
        }

        Node *Current = Head;
        while (Current->Next != NULL)
        {
            Current = Current->Next;
        }

        if (Current->Prev != NULL)
        {
            Current->Prev->Next = NULL;
        }
        else
        {
            Head = NULL;
        }

        delete Current;
    }


};