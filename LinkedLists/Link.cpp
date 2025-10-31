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
    // ~Node(){
    //     cout<<"~Node"<<data<<endl;
    //     if(next!=NULL){
    //         delete next;
    //         next = NULL;
    //     }
    // }

};
class List
{
    Node *head;
    Node *tail;

public:
    List()
    {
        head = NULL;
        tail = NULL;
    };
    // ~List(){
    //     cout<<"destructor of list \n";
    //     if(head!=NULL){
    //         delete head;
    //         head = NULL;
    //     }
    // }

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
    };
    void push_back(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void printList()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    void insertMiddle(int val, int pos)
    {
        Node *newNode = new Node(val);
        Node *temp = head;
        for (int i = 0; i < pos - 1; i++)
        {
            if (temp == NULL)
            {
                cout << "Position is invalid. \n";
                return;
            }
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }

    void reverse(){
        Node* prev =NULL;
        Node* curr = head;
        while (curr!=NULL)
        {
            Node* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
    }
};

int main()
{
    // List* ll = new List();
    List ll;
    ll.push_front(20);
    ll.push_front(50);
    ll.push_back(90);
    ll.insertMiddle(30,1);
    ll.push_front(40);
    ll.printList();
    ll.reverse();
    ll.printList();
    return 0;
}