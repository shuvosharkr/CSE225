#include<iostream>
using namespace std;
struct bstNode
{
    int data;
    bstNode* leftNode;
    bstNode* rightNode;
};
bstNode* NewNode(int item)
{
    bstNode* newNode = new bstNode();
    newNode->data = item;
    newNode->leftNode = NULL;
    newNode->rightNode = NULL;
    return newNode;
}
bstNode* Insert(bstNode* root, int item)
{
    if(root == NULL)
    {
        root = NewNode(item);
    }
    else if(item<=root->data)
    {
        root->leftNode = Insert(root->leftNode,item);
    }
    else
    {
        root->rightNode = Insert(root->rightNode, item);
    }
    return root;
}
bool Search(bstNode* root, int item)
{
    if(root == NULL)
    {
        return false;
    }
    else if(root->data == item)
    {
        return true;
    }
    else if(item<= root->data)
    {
        return Search(root->leftNode, item);
    }
    else
    {
        return Search(root->rightNode, item);
    }
}
bstNode* FindMin(bstNode* root)
{
    if(root->leftNode == NULL)
    {
        return root;
    }
    else
    {
        return FindMin(root->leftNode);
    }
}
bstNode* FindMax(bstNode* root)
{
    if(root == NULL)
    {
        cout<<"BST is empty"<<endl;
        return NULL;
    }
    while (root->rightNode !=NULL)
    {
        root = root->rightNode;
    }
    return root;
}
int Height(bstNode* root)
{
    if(root == NULL)
    {
        return 0;
    }
    else
    {
        return max(Height(root->leftNode),Height(root->rightNode))+1;
    }
}
void PreOrder(bstNode* root)
{
    if(root == NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    PreOrder(root->leftNode);
    PreOrder(root->rightNode);
}
void InOrder(bstNode* root)
{
    if(root == NULL)
    {
        return;
    }
    InOrder(root->leftNode);
    cout<<root->data<<" ";
    InOrder(root->rightNode);
}
void PostOrder(bstNode* root)
{
    if(root == NULL)
    {
        return;
    }
    PostOrder(root->leftNode);
    PostOrder(root->rightNode);
    cout<<root->data<<" ";
}
bstNode* Delete (bstNode* root, int item)
{
    if(root == NULL)
    {
        return root;
    }
    else if(item<root->data)
    {
        Delete(root->leftNode, item);
    }
    else if(item>root->data)
    {
        Delete(root->rightNode, item);
    }
    else
    {
        if(root->leftNode == NULL && root->rightNode == NULL)
        {
            delete root;
            root = NULL;
            return root;
        }
        else if(root->rightNode == NULL)
        {
            bstNode* temp = root;
            root = root->leftNode;
            delete temp;
            return root;
        }
        else if(root->leftNode == NULL)
        {
            bstNode* temp = root;
            root = root->rightNode;
            delete temp;
            return root;
        }
        else
        {
            bstNode* temp = FindMin(root->rightNode);
            root->data = temp->data;
            root->rightNode = Delete(root->rightNode, temp->data);
            return root;
        }
    }
    return root;
}

int main()
{
    bstNode* root = NULL;
    cout<<"BST"<<endl;
    root = Insert(root, 10);
    root = Insert(root, 5);
    root = Insert(root, 15);
    root = Insert(root, 7);
    root = Insert(root, 3);
    root = Insert(root, 20);
    PreOrder(root);
    cout<<endl;
    InOrder(root);
    cout<<endl;
    PostOrder(root);
    cout<<endl;
    cout<<"Height: "<<Height(root)<<endl;
    Delete(root,10);
    PreOrder(root);
    cout<<endl;
    InOrder(root);
    cout<<endl;
    PostOrder(root);
    cout<<endl;

    return 0;

}

