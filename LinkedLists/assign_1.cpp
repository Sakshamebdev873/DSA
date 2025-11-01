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


    Node *Intersect(Node *head1, Node *head2)
    {
        Node *a = head1;
        Node *b = head2;
        while (a != b)
        {
            if (a != NULL)
            {
                a = a->next;
            }
            else
            {
                a = head2;
            }
            if (b != NULL)
            {
                b = b->next;
            }
            else
            {
                b = head1;
            }
        }
        return a;
    };
int main()
{
    Node* newNode;

    Node* head1 = new Node(10);
    head1->next = new Node(20);
    head1->next->next = new Node(30);

    Node* head2 = new Node(15);
    head2->next = new Node(25);

    // Create intersection
    newNode = new Node(40);
    head1->next->next->next = newNode;
    head2->next->next = newNode;

    newNode->next = new Node(50);
    Node*intersection = Intersect(head1,head2);
    cout<<intersection->data;
    return 0;
}