#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	struct node* left;
	struct node* right;
	node(int val)
	{
		val=data;
		left=NULL;
		right=NULL;
	}
};
int main()
{
	struct node* root =new node(1);
	root->left=new node(2);
	root->right=new node(3);
	root->left->left=new node(4);
	cout<<root->*right<<endl;
	return 0;
}
