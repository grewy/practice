#include <stdio.h>
#include <stdlib.h>
 
/* A binary tree node has data, pointer to left child
   and a pointer to right child */
struct node
{
     int data;
     struct node* left;
     struct node* right;
};
 
/* Helper function that allocates a new node with the
   given data and NULL left and right pointers. */
struct node* newNode(int data)
{
     struct node* node = (struct node*)
                                  malloc(sizeof(struct node));
     node->data = data;
     node->left = NULL;
     node->right = NULL;
 
     return(node);
}
 
/* Given a binary tree, print its nodes according to the
  "bottom-up" postorder traversal. */
void printPostorder(struct node* root)
{
    if(root==NULL)
    	return;
    if(root->left != NULL)
    	printPostorder(root->left);
 
    if(root->right != NULL)
    	printPostorder(root->right);
 
    printf(" %d ", root->data);
 
 
}
 
/* Given a binary tree, print its nodes in inorder*/
void printInorder(struct node* root)
{
    if(root==NULL)
    	return;
    if(root->left != NULL)
    	printInorder(root->left);
 
    printf(" %d ", root->data);
 
    if(root->right != NULL)
    	printInorder(root->right);
}
 
/* Given a binary tree, print its nodes in preorder*/
void printPreorder(struct node* root)
{
    if(root==NULL)
    	return;
 
    printf(" %d ", root->data);
 
    if(root->left != NULL)
    	printPreorder(root->left);
 
    if(root->right != NULL)
    	printPreorder(root->right);
}    
 
/* Driver program to test above functions*/
int main()
{
     struct node *root  = newNode(1);
     root->left             = newNode(2);
     root->right           = newNode(3);
     root->left->left     = newNode(4);
     root->left->right   = newNode(5); 
 
     printf("\n Preorder traversal of binary tree is \n");
     printPreorder(root);
 
     printf("\n Inorder traversal of binary tree is \n");
     printInorder(root);  
 
     printf("\n Postorder traversal of binary tree is \n");
     printPostorder(root);
 
     getchar();
     return 0;
}
