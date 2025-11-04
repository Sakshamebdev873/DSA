#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = NULL;
    }
};

class List {
public:
    Node* head;
    List() {
        head = NULL;
    }

    void push_back(int val) {
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    void print_list() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    void rearrangeEvenOdd() {
        Node* evenStart = NULL;
        Node* evenEnd = NULL;
        Node* oddStart = NULL;
        Node* oddEnd = NULL;
        Node* curr = head;

        while (curr != NULL) {
            int val = curr->data;
            if (val % 2 == 0) { // even
                if (evenStart == NULL) {
                    evenStart = curr;
                    evenEnd = evenStart;
                } else {
                    evenEnd->next = curr;
                    evenEnd = evenEnd->next;
                }
            } else { // odd
                if (oddStart == NULL) {
                    oddStart = curr;
                    oddEnd = oddStart;
                } else {
                    oddEnd->next = curr;
                    oddEnd = oddEnd->next;
                }
            }
            curr = curr->next;
        }

        // if there are no evens or no odds
        if (evenStart == NULL || oddStart == NULL)
            return;

        evenEnd->next = oddStart;
        oddEnd->next = NULL;
        head = evenStart;
    }
};

int main() {
    List ll;
    ll.push_back(8);
    ll.push_back(12);
    ll.push_back(10);
    ll.push_back(5);
    ll.push_back(4);
    ll.push_back(1);
    ll.push_back(6);

    cout << "Original List: ";
    ll.print_list();

    ll.rearrangeEvenOdd();

    cout << "Modified List: ";
    ll.print_list();

    return 0;
}
