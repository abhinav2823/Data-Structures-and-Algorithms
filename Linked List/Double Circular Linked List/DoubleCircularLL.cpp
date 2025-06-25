#include <iostream>
#include <vector>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int data) {
        this->data = data;
        this->next = this->prev = NULL;
    }
};

Node* convertArrtoDCLL(vector<int>& elements) {
    if (elements.empty()) return NULL;

    Node* head = new Node(elements[0]);
    head->next = head;
    head->prev = head;

    Node* temp = head;

    for (int i = 1; i < elements.size(); i++) {
        Node* newNode = new Node(elements[i]);

        newNode->prev = temp;
        newNode->next = head;

        temp->next = newNode;
        head->prev = newNode;

        temp = newNode;
    }

    return head;
}

void printLL(Node* head) {
    if (!head) {
        cout << "Linked List is Empty" << endl;
        return;
    }

    Node* temp = head;
    do {
        cout << temp->data << "->";
        temp = temp->next;
    } while (temp != head);
    cout << "(head)" << endl;
}

int getLength(Node* head) {
    if (!head) return 0;

    int count = 0;
    Node* temp = head;
    do {
        count++;
        temp = temp->next;
    } while (temp != head);
    return count;
}

void insertAtHead(Node*& head, int data) {
    Node* newNode = new Node(data);

    if (!head) {
        newNode->next = newNode->prev = newNode;
        head = newNode;
        return;
    }

    Node* tail = head->prev;

    newNode->next = head;
    newNode->prev = tail;

    tail->next = newNode;
    head->prev = newNode;

    head = newNode;
}

void insertAtTail(Node*& head, int data) {
    if (!head) {
        insertAtHead(head, data);
        return;
    }

    Node* newNode = new Node(data);
    Node* tail = head->prev;

    tail->next = newNode;
    newNode->prev = tail;

    newNode->next = head;
    head->prev = newNode;
}

void insertAtAnyPosition(Node*& head, int data, int pos) {
    int length = getLength(head);

    if (pos <= 1) {
        insertAtHead(head, data);
    } else if (pos >= length + 1) {
        insertAtTail(head, data);
    } else {
        Node* newNode = new Node(data);
        Node* temp = head;

        for (int i = 1; i < pos - 1; i++) {
            temp = temp->next;
        }

        Node* nextNode = temp->next;

        temp->next = newNode;
        newNode->prev = temp;

        newNode->next = nextNode;
        nextNode->prev = newNode;
    }
}

void deleteNode(Node*& head, int pos) {
    int length = getLength(head);
    if (!head) {
        cout << "Linked List is Empty" << endl;
        return;
    }

    if (pos < 1 || pos > length) {
        cout << "Invalid position" << endl;
        return;
    }

    // Single node
    if (length == 1 && pos == 1) {
        delete head;
        head = NULL;
        return;
    }

    // Deletion at head
    if (pos == 1) {
        Node* tail = head->prev;
        Node* temp = head;

        head = head->next;

        tail->next = head;
        head->prev = tail;

        delete temp;
        return;
    }

    // Deletion at any position
    Node* curr = head;
    for (int i = 1; i < pos; i++) {
        curr = curr->next;
    }

    Node* prevNode = curr->prev;
    Node* nextNode = curr->next;

    prevNode->next = nextNode;
    nextNode->prev = prevNode;

    delete curr;
}

int main() {
    vector<int> elements = {1, 2, 3, 4, 5};
    Node* head = convertArrtoDCLL(elements);
    printLL(head);
    cout << "Length: " << getLength(head) << endl << endl;

    insertAtHead(head, 6);
    printLL(head);

    insertAtTail(head, 7);
    printLL(head);

    insertAtAnyPosition(head, 8, 0);
    printLL(head);

    insertAtAnyPosition(head, 9, 10);
    printLL(head);

    insertAtAnyPosition(head, 10, 4);
    printLL(head);

    deleteNode(head, 1); // delete head
    printLL(head);

    deleteNode(head, getLength(head)); // delete tail
    printLL(head);

    deleteNode(head, 4); // delete middle
    printLL(head);

    return 0;
}
