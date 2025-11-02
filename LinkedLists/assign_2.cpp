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

    void printlist()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    // delete M nodes after N nodes
    void deleteMnodeafterN(int m, int n)
    {
        Node *curr = head;
        Node *temp;
        while (curr)
        {
            for (int i = 0; i < n&&curr!=NULL; i++)
            {
                curr = curr->next;
            }
                if (curr == NULL)
                    return;
                temp = curr->next;
                for (int j = 0; j < m; j++)
                {
                    Node *del = temp;
                    temp = temp->next;
                    delete del;
                }
                curr->next = temp;
            curr = temp;
            }
        
    }
};

int main()
{
    List ll;
    ll.push_front(100);
    ll.push_front(32);
    ll.push_front(10);
    ll.push_front(2);
    ll.push_front(45);
    ll.push_front(23);

    cout << "Original List: ";
    ll.printlist();

    ll.deleteMnodeafterN(2, 2);

    cout << "After deleting 2 nodes after every 2 nodes: ";
    ll.printlist();

    return 0;
}
