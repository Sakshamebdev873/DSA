#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};
class List
{
public:
    Node *head;
    Node *tail;
    List()
    {
        head = tail = NULL;
    }
    void print_list()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL\n";
    }

    void push_front(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }
    // replace x with y
    void swap(int x, int y)
    {
        Node *currX = head;
        Node *currY = head;
        Node *prevX;
        Node *prevY;
        if (x == y)
        {
            return;
        }

        while (currX && currX->data != x)
        {
            prevX = currX;
            currX = currX->next;
        }
        while (currY && currY->data != y)
        {
            prevY = currY;
            currY = currY->next;
        }
        if (!currX && !currY)
        {
            return;
        }
        if (prevX != NULL)
        {
            prevX->next = currY;
        }
        else
        {
            currY = head;
        }
        if (prevY != NULL)
        {
            prevY->next = currX;
        }
        else
        {
            currX = head;
        }

        Node *temp = currY->next;
        currY->next = currX->next;
        currX->next = temp;
    }
};
int main()
{
    List ll;
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.print_list();
    cout << "after" << endl;
    ll.swap(2, 4);
    ll.print_list();
    return 0;
}