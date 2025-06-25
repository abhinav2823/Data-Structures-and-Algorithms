#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(){
            this->next = NULL;
        }

        Node(int data){
            this->data = data;
            this->next = NULL;
        }
};

Node* convertArrtoSCLL(vector<int>& elements){
    int n = elements.size();
    Node* head = new Node(elements[0]);
    head->next = head;
    Node* temp = head;
    for(int i = 1; i < n; i++){
        Node* newNode = new Node(elements[i]);
        temp->next = newNode;
        newNode->next = head;
        temp = temp->next;
    }

    return head;
}

void printLL(Node* head){
    if(head == NULL){
        cout << "Linked List is Empty" << endl;
        return;
    }

    Node* temp = head;
    do{
        cout << temp->data << "->";
        temp = temp->next;
    }while(temp != head);
    cout << "(head)" <<endl;
}

int getLength(Node* head){
    if(head == NULL){
        return 0;
    }

    Node* temp = head;
    int length = 0;
    do{
        length++;
        temp = temp->next;
    }while(temp != head);

    return length;
}

void insertAthead(Node* &head, int data){
    Node* newNode = new Node(data);
    if(head == NULL){
        head = newNode;
        newNode->next = head;
        return;
    }

    Node* temp = head;
    while(temp->next != head){
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->next = head;
    head = newNode;
}

void insertAtTail(Node* &head, int data){
    Node* newNode = new Node(data);
    if(head == NULL){
        head = newNode;
        newNode->next = head;
        return;
    }

    Node* temp = head;
    while(temp->next != head){
        temp =  temp->next;
    }
    temp->next = newNode;
    newNode->next = head;
}

void insertAtanyPosition(Node* &head, int data, int pos){
    Node* newNode = new Node(data);
    int length = getLength(head);
    if(head == NULL){
        head = newNode;
        newNode->next = head;
        return;
    }

    if(pos <= 1){
        insertAthead(head, data);
    }
    else if(pos >= length+1){
        insertAtTail(head, data);
    }
    else{
        Node* newNode = new Node(data);
        Node* prev = NULL;
        Node* curr = head;
        while(pos != 1){
            pos--;
            prev = curr;
            curr = curr -> next;
        }

        prev -> next = newNode;
        newNode -> next = curr;
    }
}

void deleteNode(Node* &head, int pos){

    int length = getLength(head);

    //Case1: Empty Linked List
    if(head == NULL){
        cout << "Linked List is Empty" << endl;
    }
    //Case2: Single Element
    else if(head->next == head){
        Node* currentNode = head;
        head = NULL;
        delete currentNode;
        return;
    }
    //Case3: Delete the head node
    else if(pos == 1){
        Node* temp = head;
        Node* currentNode = head;
        while(temp->next != head){
            temp = temp->next;
        }
        head = head->next;
        temp->next = head;
        currentNode->next = NULL;
        delete currentNode;
    }
    //Case4: Delete the tail node
    else if(pos == length){
        Node* prev = head;
        Node* curr = head->next;
        while(curr->next != head){
            curr = curr->next;
            prev = prev->next;
        }
        prev->next = head;
        curr->next = NULL;
        delete curr;
    }
    //Case5: Delete a middle node
    else{
        Node* prev = NULL;
        Node* curr = head;

        while(pos != 1){
            pos--;
            prev = curr;
            curr = curr -> next;
        }

        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }
}


int main(){
    vector<int> elements = {1,2,3,4,5};
    Node* head = convertArrtoSCLL(elements);
    printLL(head);
    int length = getLength(head);
    cout<<"Length of the linked list is: "<<length<<endl;
    cout<<endl;

    // Insertion at head
    insertAthead(head, 6);
    printLL(head);

    cout<<endl;
    // Insertion at tail
    insertAtTail(head, 7);
    printLL(head);
    cout<<endl;

    //Insert at any position
    // Case 1: position <= 1 -> Insert at head
    insertAtanyPosition(head, 8, 0);
    printLL(head);
    cout << endl;

    // Case 2: position >= length+1 -> Insert at tail
    insertAtanyPosition(head, 9, 10);
    printLL(head);
    cout << endl;

    // Case 3: position > 1 && position < length+1 -> Insert in middle
    insertAtanyPosition(head, 10, 4);
    printLL(head);
    cout << endl;


    // Delete at any position
    // Delete at head
    deleteNode(head, 1);
    printLL(head);
    cout << endl;

    // Delete at tail
    deleteNode(head, getLength(head));
    printLL(head);
    cout << endl;

    // Delete from middle
    deleteNode(head, 4);
    printLL(head);
    cout << endl;

    return 0;

}