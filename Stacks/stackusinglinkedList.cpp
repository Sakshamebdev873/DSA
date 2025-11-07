#include <iostream>
using namespace std;

template <class T>
class Node
{
public:
    T data;
    Node *next;
    Node(T val)
    {
        data = val;
        next = NULL;
    }
};
template <class T>
class Stack
{
public:
    Node<T> *head;
    Stack()
    {
        head = NULL;
    }
    void push(T val)
    {
        Node<T>* newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }
    void pop(){
        Node<T>* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    T top(){
        return head->data;
    }
    bool isEmpty(){
        return head==NULL;
    }
void print_list(){
    Node<T>* temp = head;
    while (temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL\n";
    
}
};

int main()
{
Stack<int> s;
s.push(10);
s.push(14);
s.push(42);
s.push(21);
s.push(43);
s.print_list();
s.pop();
s.pop();
s.pop();
s.pop();
s.print_list();
    return 0;
}