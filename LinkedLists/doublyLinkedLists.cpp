#include <iostream>
using namespace std;
class Node
{
    public:
    Node *next;
    Node *prev;
    int data;

    Node(int val)
    {
        data = val;
        prev = next = NULL;
    }
};
class Doubly
{
public:
    Node *head;
    Node *tail;
    Doubly()
    {
        head = tail = NULL;
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
            head->prev = newNode;
            head = newNode;
        }
    }
    void pop_front(){
        Node* temp = head;
        head = head->next;
        if(head!= NULL){
            head->prev = NULL;
        }
        temp->next = NULL;
        delete temp;
    }
    void print_list(){
        Node* temp = head;
        while (temp!=NULL)
        {
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<"NULL\n";
    }
};
int main()
{
Doubly d;
d.push_front(10);
d.push_front(23);
d.push_front(34);
d.push_front(50);
d.push_front(20);
d.print_list();
d.pop_front();
d.print_list();
    return 0;
}