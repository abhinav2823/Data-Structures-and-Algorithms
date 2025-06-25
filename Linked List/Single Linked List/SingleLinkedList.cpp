#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

    Node(){
        this -> next = NULL;
    }

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};


// 1. In the argument it is important to pass the pointer Node* head as it is the address of the fisrt node of the Linked List. If instead we pass (Node head) then it creates just a copy of the head node and passes its data and not the entire linked list.

// 2. Inside the while loop temp = temp -> next refers to the next element in the linked list. If we use   temp++ it will refer to the next memory address which temp is pointing not necessarily the one in the linked list.

void printLL(Node* head){
    if(head == NULL){
        cout<<"Linked List is empty"<<endl;
    }
    Node* temp = head;
    while(temp != NULL){
        cout << temp -> data << "->";
        temp = temp -> next;
    }
    cout<<endl;
}

int getLength(Node* head){
    int length = 0;
    Node* temp = head;
    while(temp != NULL){
        length++;
        temp = temp -> next;
    }
    return length;
}

void insertAthead(Node* &head, int data){
    // Create a new node
    Node* newNode = new Node(data);
    // Insert at begininig
    newNode -> next = head;
    // Reassign head
    head = newNode;
}

void insertAtTail(Node* &head, int data){
    //Create a new node
    Node* newNode = new Node(data);

    // Empty Linked List
    if(head == NULL){
        head = newNode;
        return;
    }

    //Non-Empty Linked List
    // Traverse upto the last node
    Node* temp = head;
    while(temp -> next != NULL){
        temp = temp -> next;
    }
    temp -> next = newNode;
}


void insertAtanyPosition(Node* &head, int data, int position){
    int length = getLength(head);

    // Case 1: position <= 1 -> Insert at head
    if(position <= 1){
        insertAthead(head, data);
    }
    else if(position >= length){   // Case 2: position >= length -> Insert at Tail
        insertAtTail(head, data);
    }
    else{ // Insert in middle
        Node* newNode = new Node(data);
        Node* prev = NULL;
        Node* curr = head;
        while(position != 1){
            position--;
            prev = curr;
            curr = curr -> next;
        }

        prev -> next = newNode;
        newNode -> next = curr;
    }
}

void deleteNode(Node* &head, int position){

    int length = getLength(head);

    //Case 1: Linked List is empty
    if(head == NULL){
        cout<<"Linked List is empty"<<endl;
        return;
    } 

    //Case 2: Delete a single element
    else if(length == 1 && position == 1){
        Node* temp = head;
        delete temp;
        head = NULL;
    }

    //Case 3: Delete the head node
    else if(position == 1){
        Node* temp = head;
        head = temp -> next;
        temp -> next = NULL;
        delete temp;
    }

    //Case 4: Delete the last node
    else if(position == length){
        Node* temp = head;
        
        while(temp -> next -> next != NULL){
            temp = temp -> next;
        }
        Node* tail = temp -> next;
        temp -> next = NULL;
        delete tail;
    }

    // Case 5: Delete from middle
    else if(position > 1 && position < length){
        Node* prev = NULL;
        Node* curr = head;

        while(position != 1){
            position--;
            prev = curr;
            curr = curr -> next;
        }

        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }   
}


int main(){
    //Empty Linked List
    //Node* head  = NULL;

    // Creating Nodes
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);

    // Assigning the head
    Node* head = first;

    // Creating the linked list
    first -> next = second;
    second -> next = third;
    third -> next = fourth;
    fourth -> next = fifth;

    //print the linked list
    printLL(head);
    int length = getLength(head);
    cout << "The length of the linked list is: "<< length << endl;

    cout<<endl;

    // Insertion at head
    insertAthead(head, 60);
    printLL(head);
    length = getLength(head);
    cout << "The length of the linked list is: "<< length << endl;

    cout<<endl;

    // Insertion at tail
    insertAtTail(head, 70);
    printLL(head);
    length = getLength(head);
    cout << "The length of the linked list is: "<< length << endl;

    cout<<endl;

    // Insert at any position
    // Case 1: position <= 1 -> Insert at head
    insertAtanyPosition(head, 80, 0);
    printLL(head);
    length = getLength(head);
    cout << "The length of the linked list is: "<< length << endl;

    cout << endl;

    // Case 2: position >= length -> Insert at tail
    insertAtanyPosition(head, 90, 10);
    printLL(head);
    length = getLength(head);
    cout << "The length of the linked list is: "<< length << endl;

    cout << endl;

    // Case 3: position > 1 && position < length -> Insert in middle
    insertAtanyPosition(head, 100, 4);
    printLL(head);
    length = getLength(head);
    cout << "The length of the linked list is: "<< length << endl;

    cout << endl;

    // Delete at any position
    // Delete at head
    deleteNode(head, 1);
    printLL(head);
    length = getLength(head);
    cout << "The length of the linked list is: "<< length << endl;
    cout << endl;

    // Delete at tail
    deleteNode(head, getLength(head));
    printLL(head);
    length = getLength(head);
    cout << "The length of the linked list is: "<< length << endl;
    cout << endl;

    // Delete from middle
    deleteNode(head, 4);
    printLL(head);
    length = getLength(head);
    cout << "The length of the linked list is: "<< length << endl;
    cout << endl;

    return 0;
}