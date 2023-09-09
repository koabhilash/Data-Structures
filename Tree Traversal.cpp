#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* l;
    struct node* r;
};

void inorder(struct node* root){
    if(root==NULL){
        return;
    }
    inorder(root->l);
    printf("%d ",root->data);
    inorder(root->r);
}
void postorder(struct node* root){
    if(root==NULL){
        return;
    }
    postorder(root->l);
    printf("%d ",root->data);
    postorder(root->r);
}
void preorder(struct node* root){
    if(root==NULL){
        return;
    }
    printf("%d ",root->data);
    preorder(root->l);
    preorder(root->r);
}
struct node *create()
{
	int x;
	struct node *nn;
	nn=(struct node*)malloc(sizeof(struct node));
	printf("enter data (-1 for no node)");
	scanf("%d",&x);
	if(x==-1)
	return 0;
	nn->data=x;
	printf("enter left child of %d   ",x);
	nn->l=create();
	printf("enter right child of %d   ",x);
	nn->r=create();
	return nn;
}

int main(){
    int a;
    struct node* root;
    	root=create();
    printf("enter the traversal type inorder->1 preorder->2 postorder->3:");
    scanf("%d",&a);
    switch(a){
        case 1:inorder(root);
        break;
        case 2:preorder(root);
        break;
        case 3:postorder(root);
        break;
    }
    return 0;
}
