void preOrder(Node *root) {
    if(root==NULL)
        return;
    printf("%d ",root->data);
    //cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
    }

void inOrder(Node *root) {
        if(root==NULL)
            return ;
        inOrder(root->left);
        cout<<root->data<<" ";
        inOrder(root->right);

    }

void postOrder(Node *root) {
        if(root==NULL)
            return;
        postOrder(root->left);
        postOrder(root->right);
        cout<<root->data<<" ";
       
    }

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};
