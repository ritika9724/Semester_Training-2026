#include<iostream>
#include <algorithm>
#include <queue>
using namespace std;

class Node{
    public:
    int data;
    Node *left, *right;

    Node(int num){
        data = num;
        left = nullptr;
        right = nullptr;
    }
};

class BST{
    public:
    Node *root=nullptr;
                                // insert
                            
    void insert(int key){
        root = insert(root,key); 
    }
    Node* insert(Node *root,int key){
        if(root == nullptr){
            return new Node(key);
        }
        if(key < root->data){
            root->left = insert(root->left,key);
        }
        else if(key > root->data){
            root->right = insert(root->right,key);
        }
        return root;  
    }

                             // search

    void search(int key){
        if(search(root,key))
            cout<<"Element found\n";
        else
            cout<<"Element not found\n";
}
    bool search(Node *root,int key){
        if(root==nullptr)
            return false;
        if(root->data == key)
            return true;
        else if (key < root->data)
            return search(root->left,key);
        else
            return search(root->right,key); 
} 

                        // deletion

 void deleteValue(int key)
    {
        deleteValue(root, key);
    }
    Node *deleteValue(Node *root, int key)
    {
        if (root == NULL)
            return NULL;
        if (key < root->data)
            root->left = deleteValue(root->left, key);
        else if (key > root->data)
            root->right = deleteValue(root->right, key);
        else
        {
            // no child
            if (root->left == NULL && root->right == NULL)
            {
                delete root;
                return NULL;
            }
            // one child
            else if (root->left == NULL)
            {
                Node *temp = root->right;
                delete root;
                return temp;
            }
            else if (root->right == NULL)
            {
                Node *temp = root->left;
                delete root;
                return temp;
            }
            // two child
            else
            {
                Node *temp = minimum(root->right);
                root->data = temp->data;
                root->right = deleteValue(root->right, temp->data);
            }
            return root;
        }
    }
                       // Inorder
    void inorder(){
        inorder(root);
    }
    void inorder(Node*root){
        if(root == nullptr)
            return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

                            // preorder
    void preorder(){
        preorder(root);
    }
    void preorder(Node*root){
        if(root==nullptr)
            return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
                            // postorder

    void postorder(){
        postorder(root);
    }
    void postorder(Node*root){
        if(root == nullptr)
            return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
                            // leafOrder

    void levelOrder(){
        if(root==nullptr)
            return;

    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node *temp=q.front();
        q.pop();
        cout<<temp->data<<" ";

        if(temp->left)
            q.push(temp->left);

        if(temp->right)
            q.push(temp->right);
    }
    cout<<endl;
}

                     // Minimum node
void minimum(){
   if(root)
        cout<<"Minimum is : "<<minimum(root)->data<<endl;
}
 Node* minimum(Node *root){
    while(root->left!=nullptr)
        root = root->left;
    return root;
}
                    // Maximum node
void maximum(){
   if(root)
        cout<<"Maximum is : "<<maximum(root)->data<<endl;
}
 Node* maximum(Node *root){
    while(root->right!=nullptr)
        root = root->right;
    return root;
}
                            // find height

void height(){
    cout<<"Height is: "<<height(root)<<endl;
}
int height(Node*root){
    if(root == nullptr)
        return 0;
    if(root->left == nullptr && root->right == nullptr)
        return 0;
    return max(height(root->left),height(root->right))+1;
}

                            // count nodes

void countNodes(){
    cout<<"Number of nodes: "<<countNodes(root)<<endl;
}
int countNodes(Node *root){
    if(root == nullptr)
        return 0;
    return countNodes(root->left) + countNodes(root->right) + 1;
}
                              

                            // leaf Nodes

void leafNodes() {
    cout << "Leaf Nodes : ";
    leafNodes(root);
    cout << endl;
}

void leafNodes(Node *root) {
    if (root == nullptr)
        return;

    if (root->left == nullptr && root->right == nullptr) {
        cout << root->data << " ";
        return;
    }

    leafNodes(root->left);
    leafNodes(root->right);
}

                            //Internal Nodes
                            
    void internalNodes()
    {
        internalNodes(root);
    }
    int internalNodes(Node *root)
    {
        if (root == NULL)
            return 0;

        if (root->left != NULL || root->right != NULL)
        {
            cout << root->data << " ";
            internalNodes(root->left);
            internalNodes(root->right);
        }
    }
};

int main()
{
    BST tree;

    int choice,value;

    do
    {
        cout<<"\n========== BST MENU ==========\n";
        cout<<"1.Insert\n";
        cout<<"2.Search\n";
        cout<<"3.Delete\n";
        cout<<"4.Inorder\n";
        cout<<"5.Preorder\n";
        cout<<"6.Postorder\n";
        cout<<"7.Level Order\n";
        cout<<"8.Minimum\n";
        cout<<"9.Maximum\n";
        cout<<"10.Height\n";
        cout<<"11.Count Nodes\n";
        cout<<"12.Leaf Nodes\n";
        cout<<"13.Internal Nodes\n";
        cout<<"15.Exit\n";

        cout<<"Enter Choice : ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                cout<<"Enter Value : ";
                cin>>value;
                tree.insert(value);
                break;

            case 2:
                cout<<"Enter Value : ";
                cin>>value;
                tree.search(value);
                break;

            case 3:
                cout<<"Enter Value : ";
                cin>>value;
                // tree.deleteValue(value);
                break;

            case 4:
                tree.inorder();
                break;

            case 5:
                tree.preorder();
                break;

            case 6:
                tree.postorder();
                break;

            case 7:
                tree.levelOrder();
                break;

            case 8:
                tree.minimum();
                break;

            case 9:
                tree.maximum();
                break;

            case 10:
                tree.height();
                break;

            case 11:
                tree.countNodes();
                break;

            case 12:
                tree.leafNodes();
                break;

            case 13:
                // tree.internalNodes();
                break;

            

            case 15:
                cout<<"Thank You!\n";
                break;

            default:
                cout<<"Invalid Choice\n";
        }

    }while(choice!=15);

    return 0;
}