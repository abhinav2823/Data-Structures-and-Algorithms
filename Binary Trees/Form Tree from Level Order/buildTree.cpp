// User function Template for C++

/*struct node {
  int data;
  struct node *left;
  struct node *right;
};

struct node *newNode(int data) {
  struct node *node = (struct node *)malloc(sizeof(struct node));

  node->data = data;

  node->left = NULL;
  node->right = NULL;
  return (node);
}*/

class Solution {
  public:

    node* buildTree(vector<int>& vec, int i){
        if(i >= vec.size()) return NULL;
        
        node* root = newNode(vec[i]);
        root -> left = buildTree(vec, 2*i+1);
        root -> right = buildTree(vec, 2*i+2);
        
        return root;
    }

    void create_tree(node* root0, vector<int>& vec) {
        root0 = buildTree(vec, 0);
    }
};