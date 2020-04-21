#include <stdio.h>
#include <stdlib.h>
int arr[50];

struct tree
{
    int data;
    struct tree *left;
    struct tree *right;
};
typedef struct tree TREE;

TREE *insert_into_bst(TREE*root)
{
    TREE *newnode;
    newnode=(TREE*)malloc(sizeof(TREE));
    if(newnode==NULL)
    {
        printf("memory allocation failed\n");
        return root;
    }
    printf("enter node data\n");
    scanf("%d",&newnode->data);
    newnode->left=NULL;
     newnode->right=NULL;

     if(root==NULL)
     {
         root =newnode;
         printf("root created\n");
         return root;

      }

      TREE *curr,*prev;
      curr=root;
      prev=NULL;
      while(curr!=NULL)
      {
       prev=curr;
       if(newnode->data<curr->data)
         curr=curr->left;
       else
         curr=curr->right;
      }
      if(newnode->data<prev->data)
          prev->left=newnode;
       else
           prev->right=newnode;


       printf("node inserted\n");
       return root;


}
void duplicate(TREE *root)
{  int i=0;
   int arr[50];
   if(root!=NULL)
   {
      duplicate(root->left);
        arr[i]=root->data;
        i++;
        duplicate(root->right);
   }
}


void postorder(TREE *root)
{
   if(root!=NULL)
   {
       postorder(root->left);
        postorder(root->right);
        printf("%d\t",root->data);
    }
}

void preorder(TREE *root)
{
   if(root!=NULL)
   {
        printf("%d\t",root->data);
        postorder(root->left);
        postorder(root->right);
    }
}

void inorder(TREE *root)
{
   if(root!=NULL)
   {

        inorder(root->left);
        printf("%d\t",root->data);
        inorder(root->right);
    }
}

TREE * delete_from_BST(TREE * root, int item)
{
    TREE * currnode, *parent, *successor, *p;

    if(root == NULL)
    {
        printf("Tree is empty\n");
        return root;
    }

    parent = NULL;
    currnode = root;
    while (currnode != NULL && item != currnode->data)
    {
        parent = currnode;
        if(item < currnode->data)
            currnode  = currnode->left;
        else
            currnode = currnode->right;
    }

    if(currnode == NULL)  {
        printf("Item not found\n");
        return root;
    }

    if(currnode->left == NULL)
        p = currnode->right;
    else if (currnode->right == NULL)
        p = currnode->left;
    else
    {
        successor = currnode->right;
        while(successor->left != NULL)
            successor = successor->left;

        successor->left = currnode->left;
        p = currnode->right;
    }

    if (parent == NULL) {
        free(currnode);
        return p;
    }

    if(currnode == parent ->left)
        parent->left = p;
    else
        parent->right = p;

    free(currnode);
    return root;
}

 void address_of_root_node_of_the_tree(TREE *root)
 {
     printf("%p\n",root);
 }
int count_nodes(TREE *root)
{
    static int count=0;
    if(root!=NULL)
    {
         count_nodes(root->left);
         count_nodes(root->right);
         count++;

    }
     return count;
}
int count_leaves(TREE *root)
{
    static int count=0;
    if(root!=NULL)
    {
        TREE *curr;
        curr=root;
        while(curr!=NULL)
        {
            if(curr->left==NULL&&curr->right==NULL)
            count++;
            else
           count_leaves(curr=curr->left);
            count_leaves(curr=curr->right);
        }

    }
    return count;

}
void minimum_item(TREE *root)
{
 TREE *curr;
 TREE *prev=NULL;

 curr=root;
 while(curr!=NULL)
 {   prev=curr;
     curr=curr->left;
 }
 printf("%d\n",prev->data);
}
void maxmum_item(TREE *root)
{
 TREE *curr;
 TREE *prev=NULL;
 curr=root;
 while(curr!=NULL)
 {  prev=curr;
     curr=curr->right;
 }
 printf("%d\n",prev->data);
}

int main()
{
    TREE *root=NULL;
    int item,count;
    int choice;
    while(1)
    {
     printf("1-insert bst\n");
     printf("2-inorder\n3-preorder\n4-postorder\n");
     printf("5-delete\n");
     printf("6-terminate\n");
     printf("7-address of root  node\n");
     printf("8-number of nodes\n");
      printf("9-number of leafnodes\n");
      printf("10-number of edges\n");
      printf("11-delete duplicates\n");
      printf("12-minimum item in tree\n");
      printf("13-maxmum item in tree\n");
     printf("enter your choice\n");
     scanf("%d",&choice);

     switch(choice)
     {
         case 1:root=insert_into_bst(root);
         break;
         case 2:inorder(root);
         break;
         case 3:preorder(root);
          break;
         case 4:postorder(root);
          break;
         case 5:{ int item;
                  printf("enter data to be deleted\n");
                  scanf("%d",&item);
                  root=delete_from_BST(root,item);
                 }
          break;
          case 6:exit(0);
          case 7:address_of_root_node_of_the_tree(root);
          break;
          case 8:count=count_nodes(root);
           printf("%d\n",count);
          break;
          case 9:count=count_leaves(root);
           printf("%d\n",count);
          break;
          case 10:count=count_nodes(root);
          printf("%d\n",count-1);
          break;
          case 11:
          {
          int j,k,r;
          duplicate(root);
          j=count_nodes(root);

           for(r=0;r<j;r++)
           {
            for(k=r+1;k<j;k++)
            {
                if (arr[r]==arr[k])
                root=delete_from_BST(root,arr[k]);
            }
           }
           int i=0;
           duplicate(root);
            j=count_nodes(root);


           for(i=0;i<j;i++)
             printf("%d\t",arr[i]);
             printf("\n");


          break;
          case 12:minimum_item(root);
          break;
          case 13:maxmum_item(root);
          break;




          }
     }

    }
    return 0;



}
