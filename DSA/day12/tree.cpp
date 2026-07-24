#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *left;
    Node *right;

    Node(int num){
        data = num;
        left = right = nullptr;
    }
};
                            // count

int count(Node*root){
    if(root == nullptr)
        return 0;
    return count(root->left)+count(root->right)+1;
}
                            // max height
int height(Node*root){
    if(root == nullptr)
        return 0;
    if(root->left == nullptr && root->right == nullptr)
        return 0;
    return max(height(root->left),height(root->right))+1;
}
                            // preorder

void preorder(Node*root){
    if(root==nullptr)
        return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
                            // postorder

void postorder(Node*root){
    if(root == nullptr)
        return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
                            // Inorder

void inorder(Node*root){
    if(root == nullptr)
        return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main(){
   Node * root =  new Node(10);
   root->left = new Node(20);
   root->right = new Node(30);
   root->left->left=new Node(25);
   root->left->right=new Node(27);
   root->right->left=new Node(30);
   root->right->right=new Node(40);

   cout<<"Total Node of Tree : "<<count(root)<<endl;
   cout<<"Max height of Tree : "<<height(root)<<endl;

   cout<<"preorder : ";
   preorder(root);

   cout<<endl;
   
   cout<<"postorder :";
   postorder(root);

   cout<<endl;

   cout<<"inorder :";
   inorder(root);
}