#include"linkedlist.h"

LinkedList::LinkedList()
{
    head = NULL;

}

void LinkedList::addNode(int data)
{

    if (head == NULL)
    {
        Node* p;
        p = new Node;
        p->value = data;
        p->numOcurrances = 1;
        p->next = NULL;
        head = p;
        head->next = NULL;
    }
    else
    {
        Node* p;
        p = new Node;
        p->value = data;
        p->numOcurrances = 1;
        p->next = NULL;
        Node* a = head;
        while (a->next != NULL && a->value != data)
        {
            a = a->next;
        }
        if (a->value == data)
            a->numOcurrances++;
        else
            a->next = p;
    }
}

void LinkedList::deleteNode(int data)
{
    Node* a = head;
    int num = a->value;
    if (data == num)
    {
        head = head->next;
        delete a;
    }
    else
    {
        Node* temp = a;
        while (num != data && a != NULL)
        {
            temp = a;
            a = a->next;

            num = a->value;
        }
        if (num == data)
        {
            temp->next = a->next;

            delete a;

        }

    }
}
void LinkedList::printList()
{
    Node* a = head;
    while (a != NULL)
    {
        cout << "val: " << a->value <<
            endl << "num of occ: " << a->numOcurrances << endl;
        a = a->next;
    }

}

int LinkedList::sum()
{
    int Sum = 0;
    Node* a = head;
    while (a != NULL)
    {
        Sum += a->value;
        a = a->next;
    }
    return Sum;
}








