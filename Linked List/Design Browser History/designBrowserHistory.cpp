class Node{
    public:
        string data;
        Node* next;
        Node* back;

    Node(){
        this->data = "";
        this->next = NULL;
        this->back = NULL;
    }

    Node(string data){
        this->data = data;
        this->next = NULL;
        this->back = NULL;
    }

    Node(string data, Node* next, Node* back){
        this->data = data;
        this->next = next;
        this->back = back;
    }
};


class BrowserHistory {
    Node* current;
    public:
        BrowserHistory(string homepage) {
            current = new Node(homepage);
        }
        
        void visit(string url) {
            Node* newNode = new Node(url);
            current->next = newNode;
            newNode->back = current;
            current = newNode;
        }
        
        string back(int steps) {
            while(steps){
                if(current->back != NULL){
                    current = current->back;
                }
                else{
                    break;
                }

                steps--;
            }

            return current->data;
        }
        
        string forward(int steps) {
            while(steps){
                if(current->next != NULL){
                    current = current->next;
                }
                else{
                    break;
                }
                steps--;
            }

            return current->data;
        }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */