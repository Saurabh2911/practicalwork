#include <stdio.h>
 typedef struct node
            {
                int data;
                struct node *left;
                struct node *right;
            }Node;
// Lets try to creat a root node first
int * create()
{
 int x;
Node *newnode=(Node*)malloc(sizeof(Node));
 printf("Enter the data for the nodes(-1 for no data)");
 scanf("%d", &x);
 if(x==-1)
 {
     //printf("You have not entered any data");
     return NULL;
      }
      newnode->data=x;
      printf("Enter the left child data rooted at %d \n",newnode->data);
      newnode->left=create();
      printf("Enter the right child data rooted at %d\n",newnode->data);
      newnode->right=create();
      return newnode;
}
void preorder(Node *t)
{
    if(t)
    {
    printf(" %d",t->data);
    preorder(t->left);
    preorder(t->right);
    }
}
int main()
{
Node *root=create();
Node *t=root;
 printf("pre order traversal is \n" );
preorder(t);
return 0;
}
