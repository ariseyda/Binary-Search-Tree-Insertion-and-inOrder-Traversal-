#include<stdio.h>
#include<stdlib.h>

//Binary Search Tree (Insertion and inOrder Traversal)

struct node{
	int data;
	struct node *left;
	struct node *right;
};

struct node* root=NULL;

struct node* newNode(int key){//The function that creates the node to be added
	
	struct node *newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=key;
	newnode->left=NULL;
	newnode->right=NULL;
	
	if(root==NULL){//If there is no root , the node to be added is the root.
		root=newnode;
	}
	
	return newnode;
	
	
}

void inorder(struct node *root){//The function I will print out (I need to send the root because the traverse always starts from the root)
	
	if(root!=NULL){//Let the function work if the root is not empty.
		
		inorder(root->left);
		printf("%d ",root->data);
		inorder(root->right);
		
	}
	
	//Sorting from small to large takes place.
	
	
}

struct node* add(struct node* node,int key){
	
	if(node==NULL){
		return newNode(key);
	}
	if(key < node->data){
		node->left=add(node->left,key);
	}
	
	else if(key > node->data){
		node->right=add(node->right,key);
	}
	return node;
}

int main(){
	
	int n;
	
	while(1){
		
		printf("\n1-Add\n2-Inorder traversal");
		printf("\nEnter your choice:");
		scanf("%d",&n);
		switch(n){
			
			case 1:
				
				printf("\nType the number you want to enter:");
				scanf("%d",&n);
				add(root,n);
				break;
				
			case 2:
				
				inorder(root);
				break;
			    	
			
		}
		
	}
	
	
	return 0;
}













