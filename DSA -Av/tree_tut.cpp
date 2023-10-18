#include <iostream>
#include "tree_tut.h"
using namespace std;

TreeNode<int> * inputData(){
    int dataroot;
    cout<<"enter data"<<endl;
    cin>>dataroot;
    TreeNode<int> *root = new TreeNode<int>(dataroot);
    int n;
    cout<<"enter number of children of "<<dataroot<<endl;
    cin>>n;
    for(int i=0;i<n;++i){
        TreeNode<int> * child =inputData();
        root->children.push_back(child);
    }

    return root;

}

void printTree(TreeNode<int> * root ){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" :";
    
    for (int i=0;i<root->children.size();++i){
        cout<<root->children[i]->data<<",";
    }
    cout<<endl;

    for(int i=0;i<root->children.size();++i){
        printTree(root->children[i]);
    }
}

int main()
{
    // TreeNode<int> *root = new TreeNode<int>(1);
    // TreeNode<int> *node1 = new TreeNode<int>(2);
    // TreeNode<int> *node2 = new TreeNode<int>(3);
    // root->children.push_back(node1);
    // root->children.push_back(node2);
    TreeNode<int> * root=inputData();
    printTree(root);

    delete root;
   
}
