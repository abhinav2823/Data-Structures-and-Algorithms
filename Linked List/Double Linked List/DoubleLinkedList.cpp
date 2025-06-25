#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node* prev;

        Node(int data){
            this -> data = data;
            this -> next = NULL;
            this -> prev = NULL;
        }
};

Node* createLL(vector<int> elements){
    Node* head = new Node(elements[0]);
    Node* temp = head;
    for(int i = 1; i < elements.size(); i++){
        Node* newNode = new Node(elements[i]);
        newNode -> prev = temp;
        temp -> next = newNode;
        temp = temp -> next;
    }

    return head;
}

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

void insertAtHead(Node* &head, int data){
    Node* newNode = new Node(data);
    if(head == NULL){
        head = newNode;
    }
    else{
        newNode -> next = head;
        head -> prev = newNode;
        head = newNode;
    }
}

void insertAtTail(Node* &head, int data){
    Node* newNode = new Node(data);
    if(head == NULL){
        head = newNode;
    }
    else{
        Node* temp = head;
        while(temp -> next != NULL){
            temp = temp -> next;
        }
        temp -> next = newNode;
        newNode -> prev = temp;
    }

}


void insertAtAnyPosition(Node* &head, int data, int position){
    Node* newNode = new Node(data);
    int length = getLength(head);
    //Empty Linked List
    if(head == NULL || position <= 1){
        insertAtHead(head, data);
    }
    else if(position >= length+1){
        insertAtTail(head, data);
    }
    else{
        Node* prevNode = NULL;
        Node* currNode = head;
        while(position != 1){
            position--;
            prevNode = currNode;
            currNode = currNode -> next;
        }
        prevNode -> next = newNode;
        newNode -> prev = prevNode;
        newNode -> next = currNode;
        currNode -> prev = newNode;
    }
}

void deleteNode(Node* &head, int position){
    int length = getLength(head);

    //Empty Linked List
    if(head == NULL){
        cout<<"Linked List is empty";
        return;
    }
    else if(length == 1 && position == 1){ // Single Linked List
        Node* temp = head;
        delete temp;
        head = NULL;
    }
    else if(position == 1){  // Delete head node
        Node* temp = head;
        head = temp -> next;
        temp -> next = NULL;
        head -> prev = NULL;
        delete temp;
    }
    else{
        Node* prevNode = NULL;
        Node* currNode = head;
        while(position != 1){
            position--;
            prevNode = currNode;
            currNode = currNode -> next;
        }
        if(currNode -> next == NULL){ // Deleting last node
            currNode -> prev = NULL;
            prevNode -> next = NULL;
            delete currNode;
        }
        else{  // Delete in middle
            prevNode -> next = currNode -> next;
            currNode -> next -> prev = prevNode;
            delete currNode;
        }
    }
}

int main(){
    // Creation of Doubly Linked List
    vector<int> elements = {10,20,30,40,50};
    Node* head = createLL(elements);
    printLL(head);
    cout << endl;

    //Insertion at head
    insertAtHead(head, 60);
    printLL(head);

    cout << endl;
    //Insertion at Tail
    insertAtTail(head, 70);
    printLL(head);
    cout << endl;

    //Insert at any position
    //Case 1: Insert at begining
    insertAtAnyPosition(head, 80, 1);
    printLL(head);
    cout << endl;

    //Case 2: Insert at last
    insertAtAnyPosition(head, 90, getLength(head)+1);
    printLL(head);
    cout << endl;

    //Case 3: Insert in middle
    insertAtAnyPosition(head, 100, 3);
    printLL(head);
    cout << endl;

    // Delete in linked list
    //Case 1: Delete at head
    deleteNode(head, 1);
    printLL(head);
    cout<<endl; 

    //Case 2: Delete at tail
    deleteNode(head, getLength(head));
    printLL(head);
    cout<<endl; 

    //Case 3: Delete in middle
    deleteNode(head, 4);
    printLL(head);
    cout<<endl; 
}