#include <iostream>

using namespace std;

template <class T>
class Linked
{
    struct Node
    {
        T item;
        Node* next;
    };

    Linked(*)
    {
        head = NULL;
        length = 0;
    }//default constructor

    long size() const
    {
        return length;
    }//method size

    void push_front (const T& newItem)
    {
        Node* newHead = new Node;
        newHead -> item = newItem;
        newHead -> next = head;
        head = newHead;
        length++
    }//method push_front


};

int main()
{


}
