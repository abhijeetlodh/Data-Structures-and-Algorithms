/******************************************************************************


                     Abhijeet Lodh Solving Binary Tree from Lover Babbar 450 DSA
        
                    Question: Build Tree from Preorder and Inorder 
*******************************************************************************/
#include <iostream>
using namespace std;

struct Node{
int data;
struct Node* left;
struct Node* right;
Node(int val){
    data = val;
    left = NULL;
    right = NULL;
}
};

int search(int inorder[], int start, int end, int current){
    for(int i = start; i <= end; i++){
        if(inorder[i] == current){
            return i;
        }
    }
}
Node* builTree(int preorder[], int inorder[], int start, int end){
    static int idx = 0;
    if(start > end){
        return NULL;
    }
    int current = preorder[idx];
    idx++;
    Node* node = new Node(current);
    if(start == end){
        return node;
    }
    int pos = search(inorder, start, end, current);
    node->left = builTree(preorder, inorder, start, pos-1);
    node->right = builTree(preorder, inorder, pos+1, end);
    return node;
}

void inorderPrint(Node* root){
if(root == NULL){
    return;
}
    inorderPrint(root->left);
    cout << root->data <<" ";
    inorderPrint(root->right);
}

int main()
{
    
    int preorder[] = {1,2,4,3,5};
    int inorder[] = {4,2,1,5,3};
 Node* root = builTree(preorder, inorder, 0, 4);
 inorderPrint(root);
    return 0;
}