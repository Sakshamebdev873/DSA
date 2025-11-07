#include <iostream>
#include <vector>
using namespace std;

class Stack {
    vector<int> vec;

public:
    void push(int val) {
        vec.push_back(val);
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
            return;
        }
        vec.pop_back();
    }

    int print() {
        int lastIdx = vec.size() - 1;
        return vec[lastIdx];
    }

    bool isEmpty() {
        return vec.empty();
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(12);
    s.push(34);
    s.push(45);
    s.push(67);

    while (!s.isEmpty()) {
        cout << s.print() << endl;
        s.pop();
    }

    return 0;
}
