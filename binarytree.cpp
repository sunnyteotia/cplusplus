// Binary tree //
// properties of binary tree //
//1.maximum nodes at level l=2 raised to the power l
//2.maximum nodes in a tree of height h is = 2 raised to the power h and subtract 1 from it
//3.for N nodes,minimum possible height or minimum number of levels are log base-2 n+1
//4.a binary tree with l leaves has at least log base-2 n+1 and add 1 to it 
/*#include<bits/stdc++.h>
using namespace std;
struct node{
int data;
struct node* left;// pointer for left child
struct node* right;// pointer for right child 

node(int val){
    data=val;
    left=NULL;
    right=NULL;
}
};
int main(){
    struct node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    /*
        1
       / \
      2   3
    */
   /*root->left->left=new node(4);
   root->left->right=new node(5);*/
    /*
        1
       / \
      2   3
     / \   
    4   5 
    */
  /*return 0;
}*/
// traversals in binary tree
// 1.preorder traversal-> first root then left subtree and then right subtree 
// 2.inorder traversal-> first left subtree then root and then right subtree 
//3.postorder traversal->first lefty subtree then right subtree and then root
/*#include<bits/stdc++.h>
using namespace std;
struct node{
int data;
struct node* left;// pointer for left child
struct node* right;// pointer for right child 

node(int val){
    data=val;
    left=NULL;
    right=NULL;
}
};
void preorder(struct node* root){
  if(root==NULL){
    return;
  }
  cout<<root->data<<" ";
  preorder(root->left);
  preorder(root->right);
}
void inorder(struct node* root){
  if(root==NULL){
    return;
  }
  inorder(root->left);
  cout<<root->data<<" ";
  inorder(root->right);
}
void postorder(struct node* root){
  if(root==NULL){
    return;
  }
  postorder(root->left);
  postorder(root->right);
  cout<<root->data<<" ";
}
int main(){
    struct node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    /*
        1
       / \
      2   3
    */
   /*root->left->left=new node(4);
   root->left->right=new node(5);
   root->right->left=new node(6);
    root->right->right=new node(7);*/
    /*
        1
       / \
      2   3
     / \  / \
    4   5 6  7 
    */
  /* preorder(root);
   cout<<endl;
   inorder(root);
   cout<<endl;
   postorder(root);
  return 0;*/
// build tree from preorder and inorder //
 /*#include<iostream>
 using namespace std;
struct Node{
int data;
struct Node* left;
struct Node* right;

Node(int val){
  data=val;
  right=NULL;
  left=NULL;
}
};
int search(int inorder[],int start,int end,int curr){
  for(int i=start;i<=end;i++){
    if(inorder[i]==curr){
      return i;
    }
  }
  return -1;
}
Node* buildtree(int preorder[],int inorder[],int start,int end){
  static int idx=0;
  if(start>end){
    return NULL;
  }
  int curr=preorder[idx];
  idx++;
    Node* node = new Node(curr);
  if(start==end){
    return node;
  }
  int pos=search(inorder,start,end,curr);
  node->left=buildtree(preorder,inorder,start,pos-1);
  node->right=buildtree(preorder,inorder,pos+1,end);
  return node;
}
void inorderprint(Node* root){ 
  if(root==NULL){
    return;
  }
  inorderprint(root->left);
  cout<<root->data<<" ";
  inorderprint(root->right);
}


 int main(){
  int preorder[]={1,2,4,3,5};
  int inorder[]={4,2,1,5,3};
  // build tree
  Node* root=buildtree(preorder,inorder,0,4);
  inorderprint(root);
  return 0;
 }*/
// build tree from postorder and inorder //
/*#include<bits/stdc++.h>
using namespace std;
struct node{
int data;
struct node* left;// pointer for left child
struct node* right;// pointer for right child 

node(int val){
    data=val;
    left=NULL;
    right=NULL;
}
};
int search(int inorder[],int start,int end,int val){
  for(int i=start;i<=end;i++){
    if(inorder[i]==val){
      return i;
    }
  }
  return -1;
}
node* buildtree(int postorder[],int inorder[],int start,int end ){
  static int idx = 4;
  if(start>end){
    return NULL;
  }
  int val=postorder[idx];
  idx--;
  node* curr = new node(val);
  if(start==end){
return curr;
 }
  int pos=search(inorder,start,end,val);
  curr->right=buildtree(postorder,inorder,pos+1,end);
  curr->left=buildtree(postorder,inorder,start,pos-1);
  return curr;
}
void inorderprint(node* root){
  if(root==NULL){
    return;
  }
  inorderprint(root->left);
  cout<<root->data<<" ";
  inorderprint(root->right);
}
int main(){
  int postorder[] = {4,2,5,3,1};
  int inorder[]={4,2,1,5,3};
  //build tree
  node* root=buildtree(postorder,inorder,0,4);
  inorderprint(root);
  cout<<endl;
  return 0; //we can't build tree using preorder and postorder->as they diferent structure trees
}*/
// level order traversal,sum at the kth level //
/*#include<bits/stdc++.h>
using namespace std;
struct node{
  int data;
 struct node* left;
 struct node* right;
node(int val){
  data=val;
  left=NULL;
  right=NULL;
}
};
void printlevelorder(node* root){
  if(root==NULL){
    return;
  }
  queue<node*>q;
  q.push(root);
  q.push(NULL);
  while(!q.empty()){
    node* node=q.front();
    q.pop();
    if(node!=NULL){
      cout<<node->data<<" ";
      if(node->left)
      q.push(node->left);
      if(node->right)
      q.push(node->right);
    }
    else if(!q.empty())
    q.push(NULL);
  }
}
int sumatk(node* root,int k){
  if(root==NULL){
    return -1;
  }
  queue<node*>q;
  q.push(root);
  q.push(NULL);
  int level=0;
  int sum=0;
  while(!q.empty()){
    node* node=q.front();
    q.pop();
    if(node !=NULL){
      if(level==k){
        sum+=node->data;
      }
      if(node->left)
      q.push(node->left);
      if(node->right)
      q.push(node->right);
    }
    else if(!q.empty()){
      q.push(NULL);
      level++;
    }
  }
  return sum;
}
int32_t main(){
struct node* root=new node(1);
root->left=new node(2);
root->right=new node(3);
root->left->left=new node(4);
root->left->right=new node(5);
root->right->left=new node(6);
root->right->right=new node(7);
// level order traversal
printlevelorder(root);
cout<<endl;
// sum at kth level
cout<<sumatk(root,2);
return 0;
}*/
// count all the nodes in a tree //
/*#include<bits/stdc++.h>
using namespace std;
struct node{
  int data;
 struct node* left;
 struct node* right;
  node(int val){
    data=val;
    right=NULL;
    left=NULL;
  }
};
int countnodes(node* root){
  if(root==NULL){
    return 0;
  }
  return countnodes(root->left) + countnodes(root->right)+1;
}

int32_t main(){
node* root=new node(1);
root->left=new node(2);
root->right=new node(3);
root->left->left=new node(4);
root->left->right=new node(5);
root->right->left=new node(6);
root->right->right=new node(7);
//count of nodes
cout<<countnodes(root)<<endl;
  return 0;
}*/
// sum of all nodes in a binarytree
/*#include<bits/stdc++.h>
using namespace std;
struct node{
  int data;
 struct node* left;
 struct node* right;
  node(int val){
    data=val;
    right=NULL;
    left=NULL;
  }
};
int sumnodes(node*root){
    if(root==NULL){
      return 0;
    }
    return sumnodes(root->left)+sumnodes(root->right)+root->data;
  }
int32_t main(){
node* root=new node(1);
root->left=new node(2);
root->right=new node(3);
root->left->left=new node(4);
root->left->right=new node(5);
root->right->left=new node(6);
root->right->right=new node(7);
// sum of nodes
cout<<sumnodes(root)<<endl;
return 0;
}*/
// height of a binary tree //
// height of a binary tree is the depth of the tree's deeepest node //
/*#include<bits/stdc++.h>
using namespace std;
struct node{
  int data;
 struct node* left;
 struct node* right;
  node(int val){
    data=val;
    right=NULL;
    left=NULL;
  }
};
int calcheight(node* root){
  if(root==NULL){
    return 0;
  }
  int leftheight=calcheight(root->left);
  int rightheight=calcheight(root->right);
  return max(leftheight,rightheight)+1;
}
int calcdiameter(node* root){
  if(root==NULL){
    return 0;
  }
  int lheight=calcheight(root->left);
  int rheight=calcheight(root->right);
  int currdiameter=lheight+rheight+1;
  int ldiameter=calcdiameter(root->left);
  int rdiameter=calcdiameter(root->right);
  return max(currdiameter,max(ldiameter,rdiameter));
}
int calcdiameter2(node* root,int* height){
  if(root==NULL){
    *height=0;
    return 0;
  }
int lh=0,rh=0;
int ldiameter=calcdiameter2(root->left, &lh);
int rdiameter=calcdiameter2(root->right, &rh);
int currdiameter=lh+rh+1;
*height = max(lh,rh)+1;
return max(currdiameter,max(ldiameter,rdiameter));
}
int32_t main(){
node* root=new node(1);
root->left=new node(2);
root->right=new node(3);
root->left->left=new node(4);
root->left->right=new node(5);
root->right->left=new node(6);
root->right->right=new node(7);
// height of binary tree 
cout<<calcheight(root)<<endl;
//diameter->number of nodes in the longest path between any 2 leaves,it may or not through root node
//diameter of binary tree
cout<<calcdiameter(root)<<endl;
//diameter of binary tree-optimised
int height=0;
cout<<calcdiameter2(root,&height)<<endl;
return 0;
}*/
// sum replacement in binary tree //
// sum replacement->replace the value of each node with the sum of all subtree nodes and itself
// value of leaf nodes remain unchanged //
/*#include<bits/stdc++.h>
using namespace std;
struct node{
int data;
struct node* left;// pointer for left child
struct node* right;// pointer for right child 

node(int val){
    data=val;
    left=NULL;
    right=NULL;
}
};/*
        1
       / \
      2   3
     / \  / \
    4   5 6  7 
    */
   /*void sumreplace(node* root){
    if(root==NULL){
      return;
    }
    sumreplace(root->left);
    sumreplace(root->right);
    if(root->left!=NULL){
      root->data+=root->left->data;
    }
    if(root->right!=NULL){
      root->data+=root->right->data;
    }
   }
   void preorder(node* root){
    if(root==NULL){
      return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
   }
    int main(){
    struct node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
   root->left->right=new node(5);
   root->right->left=new node(6);
    root->right->right=new node(7);
    // sum replacement
    preorder(root);
    cout<<endl;
    sumreplace(root);
    cout<<endl;
    preorder(root);

    return 0;
    }*/ 
    // balanced height in binary tree 
    //balanced height tree->for each node,the difference between the heights of the left subtree & right subtree <=1
    // mod(left ht-right ht)<=1
    //leaf nodes are always in balanced tree
   /* #include<bits/stdc++.h>
using namespace std;
struct node{
int data;
struct node* left;// pointer for left child
struct node* right;// pointer for right child 

node(int val){
    data=val;
    left=NULL;
    right=NULL;
}
};
int height(node* root){
  if(root==NULL){
    return 0;
  }
  int lh=height(root->left);
  int rh=height(root->right);
  return max(lh,rh)+1;
}
bool isbalanced(node* root){
  if(root==NULL){
    return true;
  }
  if(isbalanced(root->left)==false){
    return false;
  }
  if(isbalanced(root->right)==false){
    return false;
  }
  int lh=height(root->left);
  int rh=height(root->right);
  if(abs(lh-rh)<=1){
    return true;
  }
  else{
    return false;
  }
}
bool isbalanced2(node* root,int* height){
  if(root==NULL){
    return true;
  }
  int lh=0,rh=0;
  if(isbalanced2(root->left,&lh)==false){
    return false;
  }
  if(isbalanced2(root->right,&rh)==false){
    return false;
  }
  *height=max(lh,rh)+1;
  if(abs(lh-rh)<=1){
    return true;
  }else{
    return false;
  }
}
int main(){
    struct node* root1=new node(1);
    root1->left=new node(2);
    root1->right=new node(3);
    root1->left->left=new node(4);
   root1->left->right=new node(5);
   root1->right->left=new node(6);
    root1->right->right=new node(7);
    //  second tree
    node* root2=new node(1);
    root2->left=new node(2);
    root2->left->left=new node(3);
    // height balanced tree
    if(isbalanced(root1)){
      cout<<"balanced tree"<<endl;
    }
    else{
      cout<<"unbalanced tree"<<endl;
    }
     if(isbalanced(root2)){
      cout<<"balanced tree"<<endl;
    }
    else{
      cout<<"unbalanced tree"<<endl;
    }
    //height balanced tree->optimised
    int height=0;
    if(isbalanced2(root2,&height)==true){
      cout<<"balanced tree"<<endl;
    }
    else{
      cout<<"unbalanced tree"<<endl;
    }
    return 0;
}*/
// right view of binary tree->with help of queues
/*#include<bits/stdc++.h>
using namespace std;
struct node{
int data;
struct node* left;// pointer for left child
struct node* right;// pointer for right child 

node(int val){
    data=val;
    left=NULL;
    right=NULL;
}
};/*
        1
       / \
      2   3
     / \  / \
    4   5 6  7 
    */
   /*void rightview(node* root){
    if(root==NULL){
      return;
    }
    queue<node*>q;
    q.push(root);
    while(!q.empty()){
      int n=q.size();//n denotes no. of nodes in each level
      for(int i=0;i<n;i++){
        node* curr=q.front();
        q.pop();
        if(i==n-1){
          cout<<curr->data<<" ";
        }
        if(curr->left!=NULL){
          q.push(curr->left);
        }
        if(curr->right!=NULL){
          q.push(curr->right);
        }
      }
    }
   }
   int main(){
    struct node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
   root->left->right=new node(5);
   root->right->left=new node(6);
    root->right->right=new node(7);
    //right view
    rightview(root);
    return 0;
   }*/
   // left view of a binary tree 
   /*#include<bits/stdc++.h>
using namespace std;
struct node{
int data;
struct node* left;
struct node* right;
node(int val){
    data=val;
    left=NULL;
    right=NULL;
}
};
void leftview(node* root){
  if(root==NULL){
    return;
  }
  queue<node*>q;
  q.push(root);
  while(!q.empty()){
    int n=q.size();
    for(int i=1;i<=n;i++){
      node* temp=q.front();
      q.pop();

      if(i==1){
        cout<<temp->data<<" ";
      }
      if(temp->left!=NULL){
        q.push(temp->left);
      }
      if(temp->right!=NULL){
        q.push(temp->right);
      }
    }
  }
}
int main(){
    struct node* root=new node(5);
    root->left=new node(3);
    root->right=new node(6);
    root->left->left=new node(2);
   root->left->right=new node(4);
   leftview(root);
    return 0;
}*/
//find shortest distance between 2 nodes of a binary tree 
// problem->find the distance between two nodes in a binary tree.the distance between two nodes 
//is the minimum number of edges to be traversed to reach one node from another
//strategy
//1.fin dthe lca(least common ancestor)
//2.find distance of n1(d1) & n2(d2) from lca
//3.return (d1+d2)
/*#include<bits/stdc++.h>
using namespace std;
struct node{
int data;
struct node* left;// pointer for left child
struct node* right;// pointer for right child 

node(int val){
    data=val;
    left=NULL;
    right=NULL;
}
};/*
        1
       / \
      2   3
     / \  / \
    4   5 6  7 
    */ 
   /*node* lca (node*root,int n1,int n2){
      if(root==NULL){
        return NULL;
      }
      if(root->data==n1||root->data==n2){
          return root;
      }
      node* left=lca(root->left,n1,n2);
      node*right=lca(root->right,n1,n2);
      if(left!=NULL && right!=NULL){
        return root;
      }
      if(left==NULL & right==NULL){
        return NULL;
      }
      if(left!=NULL){
        return lca(root->left,n1,n2);
      }
      return  lca(root->right,n1,n2);
   }
   int finddist(node*root,int k,int dist){// distance is equal level between 2 nodes
    if(root==NULL){
      return-1;
    }
    if(root->data==k){
      return dist;
    }
    int left=finddist(root->left,k,dist+1);
    if(left!=-1){
      return left;
    }
    return finddist(root->right,k,dist+1);
   }
   int distancebtwnodes(node*root,int n1,int n2){
    node*Lca=lca(root,n1,n2);
    int d1=finddist(Lca,n1,0);
    int d2=finddist(Lca,n2,0);
    return d1+d2;
   }
   int main(){
    struct node* root1=new node(1);
    root1->left=new node(2);
    root1->right=new node(3);
    root1->left->left=new node(4);
   root1->right->right=new node(5);
   // test
   cout<<distancebtwnodes(root1,4,5)<<endl;
    return 0;
   }*/
// flatten a binary tree
// problem->given a binary tree,flatten it into linked list in-place.after flattening ,left of 
// each node should point to NULL and right should contain next node in preorder sequence.
//(it's not allowed to use other data structures)
// strategy 
// 1. recursively,flatten the left and right  subtrees
//2.store the left tail and right tail
//3. store right subtree in 'temp' & make left subtree as right subtree
//4.join right subtree with left tail
//5.return right tail 
/*#include<bits/stdc++.h>
using namespace std;
struct node{
int data;
struct node* left;// pointer for left child
struct node* right;// pointer for right child 

node(int val){
    data=val;
    left=NULL;
    right=NULL;
}
};
void flatten(node* root){
  if(root==NULL||(root->left==NULL && root->right==NULL)){
    return;
  }
  if(root->left !=NULL){
    flatten(root->left);
    node* temp=root->right;
    root->right=root->left;
    root->left=NULL;
    
    node*t=root->right;
    while(t->right!=NULL){
      t=t->right;
    }
    t->right=temp;
  }
  flatten(root->right);
}
void inorderprint(node* root){
  if(root==NULL){
    return;
  }
  inorderprint(root->left);
  cout<<root->data<<" ";
  inorderprint(root->right);
}
int main(){
    struct node* root1=new node(4);
    root1->left=new node(9);
    root1->right=new node(5);
    root1->left->left=new node(1);
   root1->left->right=new node(3);
   root1->right->right=new node(6);
   /*
       4
      / \
     9   5
    / \   \
   1   3   6
   */
  /*flatten(root1);
  inorderprint(root1);
  cout<<endl;
   return 0;
}*/
//print all nodes at distance k
//given->*root,*node,k
// case-1=nodes of subtree
// case-2=nodes ancestors
//in cas2->1.find the distance of all ancestors from target node(d)
//2.for all ancestors search other subtree nodes at k-d
/*#include<bits/stdc++.h>
using namespace std;
struct node{
int data;
struct node* left;// pointer for left child
struct node* right;// pointer for right child 

node(int val){
    data=val;
    left=NULL;
    right=NULL;
}
};
// case 1
void printsubtreenodes(node*root,int k){
  if(root==NULL || k<0){
    return;
  }
  if(k==0){
    cout<<root->data<<" ";
    return;
  }
  printsubtreenodes(root->left,k-1);
  printsubtreenodes(root->right,k-1);
}
//case 2
int printnodesatk(node*root,node*target,int k){
  if(root==NULL){
    return -1;
  }
  if(root==target){
    printsubtreenodes(root,k);
    return 0;
  }
  int dl=printnodesatk(root->left,target,k);
  if(dl!=-1){
    if(dl+1==k){
      cout<<root->data<<" ";
    }else{
      printsubtreenodes(root->right,k-dl-2);
    }
    return 1+dl;
  }
  int dr=printnodesatk(root->right,target,k);
  if(dr!=-1){
    if(dr+1==k){
      cout<<root->data<<" ";
    }else{
      printsubtreenodes(root->left,k-dr-2);
    }
    return 1+dr;
  }
  return -1;
}
 int main(){
    struct node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    //test
    printnodesatk(root,root->left,1);
    return 0;
 }*/
 // lowest commomn ancestors for two nodes in binary tree
// lowest common ancestors is point of path change 
/*#include<iostream>
#include<vector>
using namespace std;
struct node{
  int data;
  node* left,*right;
  node(int val){
    data=val;
    right=NULL;
    left=NULL;
  }
};
bool getpath(node* root,int key,vector<int> &path){
  if(root==NULL){
    return false;
  }
  path.push_back(root->data);
  if(root->data==key){
    return true;
  }
  if(getpath(root->left,key,path) || getpath(root->right,key,path)){
    return true;
  }
  path.pop_back();
  return false;
}

int LCA(node* root,int n1,int n2){
  vector<int>path1,path2;
  if(!getpath(root,n1,path1) || !getpath(root,n2,path2)){
    return -1;
  }
  int pc;
  for(pc=0;pc<path1.size() && path2.size();pc++){
    if(path1[pc]!=path2[pc]){
      break;
    }
  }
  return path1[pc-1];
}
node* LCA2(node* root,int n2,int n1){
  if(root==NULL){
    return NULL;
  }
  if(root->data==n1|| root->data==n2){
    return root;
  }
  node*leftLCA=LCA2(root->left,n2,n1);
  node* rightLCA=LCA2(root->right,n2,n1);
  if(leftLCA && rightLCA){
    return root;
  }
  if(leftLCA!=NULL){
    return leftLCA;
  }
  return rightLCA;
}
int main(){
  /*
         1
        / \
       2   3
      /   / \
     4   5   6
        /
       7 
  */
/*node* root=new node(1);
root->left=new node(2);
root->right=new node(3);
root->left->left=new node(4);
root->right->left=new node(5);
root->right->right=new node(6);
root->right->left->left=new node(7);
/*
int n1=7;
int n2=6;
int lca=LCA(root,n1,n2);
if(lca==-1){
  cout<<"LCA doesn't exist"<<endl;
}
else{
  cout<<"LCA:"<<lca<<endl;
}*/
// optimised approach
/*int n1=7;
int n2=6;
node* lca=LCA2(root,n1,n2);
if(lca==NULL){
  cout<<"LCA doesn't exist"<<endl;
}
else{
  cout<<"LCA:"<<lca->data<<endl;
}
  return 0;
}*/
// maximum path sum in a binary tree //
// it is maximum possible sum of a path in the binary tree,starting & ending at any node
//strategy
//for each node ,compute
//1.node val
//2.max path through left child+node val
//3.max path through right child+node val
//4.max path through left child+max path through right child+node val
#include<bits/stdc++.h>
using namespace std;
struct node{
int data;
struct node* left;// pointer for left child
struct node* right;// pointer for right child 

node(int val){
    data=val;
    left=NULL;
    right=NULL;
}
};
int maxpathsumutil(node* root,int &ans){
  if(root==NULL){
    return 0;
  }
  int left=maxpathsumutil(root->left,ans);
  int right=maxpathsumutil(root->right,ans);
  int nodemax=max(max(root->data,root->data+left+right),max(root->data+left,root->data+right));
  ans=max(nodemax,ans);
  int singlepathsum=max(root->data,max(root->data+left,root->data+right));
  return singlepathsum;
}
int maxpathsum(node* root){
  int ans=INT_MIN;
  maxpathsumutil(root,ans);
  return ans;
}
int main(){
  /*
        1
       / \
      2   3
     /     \
    4       5
  
  */
  node*root=new node(1);
  root->left=new node(2);
  root->right=new node(3);
  root->left->left=new node(4);
  root->right->right=new node(5);
  cout<<maxpathsum(root);
  return 0;
}