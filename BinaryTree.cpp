#include<bits/stdc++.h>
#include<vector>
#include<queue>

using namespace std;

class Node{
    public:
        int data;
        Node *left;
        Node *right;

        Node(int val){
            data = val;
            left = right = NULL;
        }
};
static int idx = -1;
Node* buildTree(vector<int>preorder){
    idx++;
    
    if(preorder[idx]==-1){
        return NULL;
    }

    Node *root = new Node(preorder[idx]);
    root->left = buildTree(preorder);
    root->right = buildTree(preorder);

    return root;
}
void preOrder(Node* root){
    if(root==NULL){
        return;
    }
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}
void postOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    preOrder(root->left);
    preOrder(root->right);
    cout << root->data << " ";
}
void inOrder(Node *root){
    if(root == NULL){
        return;
    }
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}
// Level order travasal:
void levelOr(Node* root){
    queue<Node *> q;
    q.push(root);
    q.push(NULL);//for order by order

    while(q.size()>0){
        Node *curr = q.front();
        q.pop();
        if(curr==NULL){ //for order by order
            if(!q.empty()){
                cout << endl;
                q.push(NULL);
                continue;
            }
            else
                break;
        }
        cout << curr->data << " ";
        if(curr->left !=NULL){
            q.push(curr->left);
        }
        if(curr->right !=NULL){
            q.push(curr->right);
        }
    }
    cout << endl;
}

int main(){
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    Node *root = buildTree(preorder);
    cout << root->data << endl;

    preOrder(root);
    cout << endl;

    inOrder(root);
    cout << endl;

    postOrder(root);
    cout << endl;

    levelOr(root);

    return 0;
}