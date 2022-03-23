#include <bits/stdc++.h>
using namespace std;

class StackArray {

    int* arr;
    int nextIndex;
    int capacity;

public:
    StackArray(int stackSize) {
        this->arr = new int[stackSize];
        this->nextIndex = 0;
        this->capacity = stackSize;

    }

    void push(int data) {
        if (nextIndex < capacity) {
            arr[nextIndex] = data;
            nextIndex++;
        }
        else {
            cout << "Stack Overflow" << endl;
            return;

        }
    }

    int top() {
        if (nextIndex == 0) {
            cout << "Stack Underflow" << endl;
            return -1;
        }
        else {
            return arr[nextIndex - 1];
        }
    }

    int pop() {
        if (nextIndex == 0) {
            cout << "Stack Underflow" << "\n";
            return -1;
        }
        return arr[--nextIndex];
    }

    bool isEmpty() {
        return nextIndex == 0;
    }

    int size() {
        return nextIndex;
    }


};

struct Node {
    int data;
    Node* next;
    // Node(){
    //     this->next = NULL;
    // }
};

class StackLinkedList {
    Node* head;
    Node* tail;
public:
    StackLinkedList() {
        head = NULL;
        tail = NULL;
    }

    void push(int data) {
        Node* newNode = new Node;
        newNode->data = data;
        newNode->next = NULL;
        if (head == NULL)
            head = newNode,
            tail = newNode;
        else
            tail->next = newNode,
            tail = newNode;

    }

    int top() {
        return tail ? tail->data : 0;
    }

    int pop() {
        if (tail) {

            if (tail == head) {
                int val = head->data;
                head = NULL;
                delete(tail);
                tail = NULL;
                return val;
            }
            else {
                Node* temp = head;
                while (temp->next != tail) {
                    temp = temp->next;
                }
                int val = tail->data;
                delete(tail);
                tail = temp;
                tail->next = NULL;
                return val;
            }



        }
        else {
            cout << "Can not remove element" << "\n";
            return 0;
        }
    }

    bool isEmpty() {
        return head == NULL;
    }

    int size() {
        int size = 0;
        Node* tmp = head;
        while (tmp != NULL) {
            size++;
            tmp = tmp->next;
        }

        return size;

    }

    void print() {
        Node* tmp = head;
        while (tmp) {
            cout << tmp->data << "-> ";
            tmp = tmp->next;
        }
        cout << "NULL" << endl;
        cout << "Head- " << head->data << ", Tail- " << tail->data << endl;
    }




};



int main() {






    StackArray s(10);
    s.push(1);
    s.push(2);
    s.push(3);
    cout << s.top() << "\n";
    cout << s.pop() << "\n";
    cout << s.top() << "\n";
    cout << s.pop() << "\n";
    cout << s.isEmpty() << "\n";
    cout << s.size() << "\n";

    cout << "\n"  << "Phase 2"  << "\n\n"    ;

    StackLinkedList s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    cout << s1.top() << "\n";
    cout << s1.pop() << "\n";
    cout << s1.top() << "\n";
    cout << s1.pop() << "\n";
    cout << s1.isEmpty() << "\n";
    cout << s1.size() << "\n";




    return 0;
}