#include<bits/stdc++.h>
using namespace std;
struct TreeNode {
   int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };
int main()
{
	TreeNode *a=new TreeNode(3);
	cout<<a->val<<endl;
	  a->left=new TreeNode(5);
	 cout<<a->left->val<<endl;
	 if(a->right==NULL)
	 {
	 	cout<<0<<endl;
	 }
	 
}
