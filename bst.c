#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef struct binaryTree{
        int data;
        struct binaryTree *left;
        struct binaryTree *right;
    } node;

void inorder(node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf("%d\t",root->data);
        inorder(root->right);
    }
}

node *searchElement(int key, node *root){

    if(root == NULL){
        return NULL;
    } else {
        if(key < root->data){
            searchElement(key, root->left);
        } else if(key > root->data ){
            searchElement(key, root->right);
        } else {
            return root;
        }
}
}

void insert(node *root, node *newNode)
{

    if(newNode->data > root->data)
    {
        if(root->right==NULL)
        {
            root->right = newNode;
        }
        else
        {
            insert(root->right, newNode);
        }
    }

    else
    {
        if(root->left==NULL)
        {
            root->left = newNode;
        }
        else
        {
            insert(root->left, newNode);
        }
    }
}

node *get_node()
{
    node *temp;
    temp = (node *)malloc(sizeof(node));
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

int main()
{
    int key;
    char ans = 'n';
    node *newNode, *root;
    root = NULL;
    printf("--------------------------------------------------\n");
    root = NULL;
    do
    {
        newNode = get_node();
        printf("\n\nEnter an element: ");
        scanf("%d", &newNode->data);
        if(root == NULL)
        {
            root = newNode;
        }
        else
        {
            insert(root, newNode);
        }
        printf("\n\nDo you want to continue [y/n]: ");
        ans = getch();

    } while(ans=='Y'||ans=='y');

    inorder(root);

    printf("Search: ");
    scanf("%d", &key);

    searchElement(key, root) ? printf("Found it!!!"): printf("Not Found...");
    //if(root == searchElement(key, root)==);
    return 0;
}

