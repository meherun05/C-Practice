 #include <bits/stdc++.h>

using namespace std;

class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* input_tree(){
    int val;
    cin >> val;
    Node* root;
    if(val == -1) root = NULL;
    else root = new Node(val);
    queue<Node*> q;
    if(root) q.push(root);
    while(!q.empty()){
        Node* p = q.front();
        q.pop();

        int l,r;
        cin >> l >> r;
        Node* myLeft,*myRight;
        if(l == -1) myLeft = NULL;
        else myLeft = new Node(l);
        if(r == -1) myRight = NULL;
        else myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;

        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
    return root;
}

void levelOrder(Node* root){
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        // 1. ber kore ana
        Node* f = q.front();
        q.pop();
        // 2. oi node niye kah kora
        cout << f->val << " ";
        // 3. children a push kora
        if(f->left)
            q.push(f->left);
        if(f->right)
            q.push(f->right);
    }
    
}

int sum_without_leaf(Node* root){
    if(root == NULL || (root->left == NULL && root->right == NULL)){
        return 0;
    }
    int sum = root->val;

    sum += sum_without_leaf(root->left);
    sum += sum_without_leaf(root->right);

    return sum;
}
int main(){
    Node* root = input_tree();
    cout << sum_without_leaf(root);

    return 0;
}