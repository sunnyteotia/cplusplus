// binary search tree has time complexity of logn
// rules for binary search tree
//1.the left subtree of a nodes with keys lesser than the node's key
//2.the right subtree of a node contains only nodes with keys greater than the node's key
//3.the left and right subtree each must also be a binary search tree.there must be no duplicate nodes
/*#include<bits/stdc++.h>
using namespace std;
struct node{
int data;
node* left,*right;
node(int val){
    data=val;
    left=NULL;
    right=NULL;
}
};
node* insertbst(node*root,int val){
    if(root==NULL){
        return new node(val);
    }
    if(val<root->data){
        root->left=insertbst(root->left,val);
    }
    else{
        //val>root->data
        root->right=insertbst(root->right,val);
    }
    return root;
}
void inorder(node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int32_t main(){
  node* root=NULL;
  root=insertbst(root,5);
  insertbst(root,1);
  insertbst(root,3);
  insertbst(root,4);
  insertbst(root,2);
  insertbst(root,7);
  //print inorder
  inorder(root);
  cout<<endl;
    return 0;
}*/
// search and delete in binary tree 
//if nodes=n,height=h
//1+2+2^2+2^3+------+2^h-1=n
//2^h-1=n
// so,h=log(n+1)
//time complexity=o(logn)
//in deletion
//case-1=if node is leaf node->directly delete it
//case-2=if node has one child->replace node with child and delete the node 
//case-2=if node has two children->has following  steps:
//1.find the inorder successor
//2.replace node with inorder successor
//3.delete the node
/*#include<bits/stdc++.h>
using namespace std;
struct node{
int data;
node* left,*right;
node(int val){
    data=val;
    left=NULL;
    right=NULL;
}
};
node* inordersucc(node*root){
    node* curr=root;
    while(curr && curr->left!=NULL){
        curr=curr->left;
    }
    return curr;
}
node* searchinbst(node*root,int key){
    if(root==NULL){
        return NULL;
    }
    if(root->data==key){
        return root;
    }
    //data>key
    if(root->data>key){
        return searchinbst(root->left,key);
    }
    //data<key
    
        return searchinbst(root->right,key);
    
}
node* deleteinbst(node*root,int key){
    if(key<root->data){
        root->left=deleteinbst(root->left,key);
    }
    else if(key>root->data){
        root->right=deleteinbst(root->right,key);
    }
    else{
        if(root->left==NULL){
            node*temp=root->right;
            free(root);
            return temp;
        }
        else if(root->right==NULL){
            node* temp=root->left;;
            free(root);
            return temp;
        }
        //case 3
        node* temp=inordersucc(root->right);
        root->data=temp->data;
        root->right=deleteinbst(root->right,temp->data);
    }
    return root;
}
void inorder(node*root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}


int main(){
node* root=new node(4);
root->left=new node(2);
root->right=new node(5);
root->left->left=new node(1);
root->left->right=new node(3);
root->right->right=new node(6);
/*
        1
       / \ 
      2   5
     / \    \
    1   3    6

*/
//for search
/*if(searchinbst(root,5)==NULL){
    cout<<"key doesn't exist";
}
else{
    cout<<"key exists";
}*/

/*inorder(root);
cout<<endl;
root=deleteinbst(root,5);
cout<<endl;
inorder(root);
    return 0;
}*/
//build bst from preorder->bst can be formed only through preorder
/*#include<bits/stdc++.h>
using namespace std;
struct node{
int data;
node* left,*right;
node(int val){
    data=val;
    left=NULL;
    right=NULL;
}
};
node* constructbst(int preorder[],int*preorderidx,int key,int min,int max,int n){
    if(*preorderidx>=n){
        return NULL;
    }
    node* root=NULL;
    if(key>min && key<max){
        root=new node(key);
        *preorderidx=*preorderidx+1;
        if(*preorderidx<n){
            root->left=constructbst(preorder,preorderidx,preorder[*preorderidx],min,key,n);
        }
        if(*preorderidx<n){
            root->right=constructbst(preorder,preorderidx,preorder[*preorderidx],key,max,n);
        }
    }
    return root;
}
void printpreorder(node*root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    printpreorder(root->left);
    printpreorder(root->right);
}
int main(){
/*
         10
        /  \
       2    13
      /     /
     1     11


*/
/*int preorder[]={10,2,1,13,11};
int n=5;
int preorderidx=0;
node* root=constructbst(preorder,&preorderidx,preorder[0],INT_MIN,INT_MAX,n);
printpreorder(root);
    return 0;
}*/


//check for binary search tree->thet is it valid or not
//that a tree should satisfy all rules for bst
//approach 1->every node>left child and node<right child=but this approach is wrong
//approach 2->every node>max of left subtree(maxL) and node<min of right subtree(minR)
//aproach 3->takectwo variables min allowed and max allowed and check through them
//and min allowed<node and max allowed>node
/*#include<bits/stdc++.h>
using namespace std;
struct node{
int data;
node* left,*right;
node(int val){
    data=val;
    left=NULL;
    right=NULL;
}
};
//check for bst
bool isbst(node*root,node*min=NULL,node*max=NULL){
if(root==NULL){
    return true;
}
if(min!=NULL && root->data<=min->data){
    return false;
}
if(max!=NULL && root->data >= max->data){
    return false;
}

bool leftvalid= isbst(root->left,min,root);
bool rightvalid=isbst(root->right,root,max);
return leftvalid and rightvalid;
}
int main(){
    node*root1=new node(1);
    root1->left=new node(2);
    root1->right=new node(3);
    /*  tree1
              1
             / \
            2   3    
    */
   /*if(isbst(root1,NULL,NULL)){
    cout<<"valid bst"<<endl;
   }
   else{
    cout<<"invalid bst"<<endl;
   }
    return 0;
}*/
//build balanced  bst from sorted array
/*#include<bits/stdc++.h>
using namespace std;
struct node{
int data;
node* left,*right;
node(int val){
    data=val;
    left=NULL;
    right=NULL;
}
};
node*sortedarraytobst(int arr[],int start,int end){
if(start>end){
    return NULL;
}
int mid=(start+end)/2;
node*root=new node(arr[mid]);
root->left=sortedarraytobst(arr,start,mid-1);
root->right=sortedarraytobst(arr,mid+1,end);
return root;
}
void preorderprint(node*root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorderprint(root->left);
    preorderprint(root->right);
}
int main(){
int arr[]={10,20,30,40,50};
node*root=sortedarraytobst(arr,0,4);
preorderprint(root);
cout<<endl;
    return 0;
}*/

// catalan numbers
// catalan numbers are a sequence of natural numbers that occur in various counting problems,
//often involving recursively defined objects.
/*#include<iostream>
using namespace std;
int catalan(int n){
    if(n<=1){
        return 1;
    }
    int res=0;
    for(int i=0;i<=n-1;i++){
        res+=catalan(i)*catalan(n-i-1);
    }
    return res;
}
int main(){
for(int i=0;i<10;i++){
    cout<<catalan(i)<<" ";
}
cout<<endl;
    return 0;
}*/
//applications of catalan numbers
//1.possible BSTs
//2.paranthesis/bracket combinations
//3.possible forests
//4.ways of triangulations 
//5.possible in path in matrix
//6.dividing a circle using N chords
//7.dyck words of given length and much more


//question->find possible BSTs,if n=3,where n=nodes in tree
/*#include<bits/stdc++.h>
using namespace std;
struct Node{
int data;
Node* left,*right;
Node(int val){
    data=val;
    left=NULL;
    right=NULL;
}
};
vector<Node*>constructtrees(int start,int end){
    
    vector<Node*>trees;
    if(start>end){
        trees.push_back(NULL);
        return trees;
    }
    for(int i=start;i<=end;i++){
        vector<Node*>leftsubtrees=constructtrees(start,i-1);
        vector<Node*>rightsubtrees=constructtrees(i+1,end);
        for(int j=0;j<leftsubtrees.size();j++){
            Node*left=leftsubtrees[j];
            for(int k=0;k<rightsubtrees.size();k++){
                Node*right=rightsubtrees[k];
                Node*node=new Node(i);
                node->left=left;
                node->right=right;
                trees.push_back(node);
            }
        }
    }
    return trees;
}
void preorder(Node*root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
int main(){
vector<Node*>totaltrees=constructtrees(1,3);
for(int i=0;i<totaltrees.size();i++){
    cout<<(i+1)<<" : ";
    preorder(totaltrees[i]);
    cout<<endl;
}
    return 0;
}*/
//zig-zag traversal in bst
//strategy->1.use 2 stacks-currentlevel and nextlevel
//2.variable lefttoright
//3.if lefttoright,push left child then right
//else,push right child then left
/*#include<bits/stdc++.h>
using namespace std;
struct node{
int data;
node* left,*right;
node(int val){
    data=val;
    left=NULL;
    right=NULL;
}
};
 void zigzagtraversal(node*root){
    if(root==NULL){
        return;
    }
    stack<node*>currlevel;
    stack<node*>nextlevel;
    bool lefttoright=true;
    currlevel.push(root);
    while(!currlevel.empty()){
     node*temp=currlevel.top(); 
        currlevel.pop();
        if(temp){
            cout<<temp->data<<" ";
        
        if(lefttoright){
            if(temp->left){
                nextlevel.push(temp->left);
            }
            if(temp->right){
                nextlevel.push(temp->right);
            }
        }
        //right to left
        else{
            if(temp->right){
                nextlevel.push(temp->right);
            }
            if(temp->left){
                nextlevel.push(temp->left);
            }
        }
        }
        if(currlevel.empty()){
            lefttoright=!lefttoright;
            swap(currlevel,nextlevel);
        }
    }
}
int main(){
    /*
             12
            /  \
           9    15
          / \
         5   10    
    */
   /*node*root=new node(12);
   root->left=new node(9);
   root->right=new node(15);
   root->left->left=new node(5);
   root->left->right=new node(10);
   //test
   zigzagtraversal(root);
   cout<<endl;
    return 0;
}*/



//are bst identical ?
//problem->for given root nodes of 2 binary search trees,print if the BSTs are identical or not.
//Identical BSTs are structurally identical and have equal values for the nodes in the structure.
//strategy
//1.if both empty,return true
//2.if both non-empty,
//a.check that the data at nodes is equal
//b.check if left subtrees are same
//c.check if right subtrees are same 
//3.if(a,b,c) are true,return true 
//else,return false
/*#include<iostream>
using namespace std;
struct node{
    int data;
    node*left,*right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
}
};
//isidentical
bool isidentical(node*root1,node*root2){
    if(root1==NULL && root2==NULL){
        return true;
    }
    else if(root1==NULL || root2==NULL){
        return false;
    }
    else{
        bool cond1=root1->data==root2->data;
        bool cond2=isidentical(root1->left,root2->left);
        bool cond3=isidentical(root1->right,root2->right);

        if(cond1 && cond2 && cond3){
            return true;
        }
        return false;
    }

}
int main(){
    /*    2
         / \ 
        1   3
    */
   /*node*root=new node(2);
   root->left=new node(1);
    root->right=new node(3);
    if(isidentical(root,root)){
        cout<<"BSTs are identical"<<endl;
    }
    else{
       cout<< "BSTs are not identical"<<endl;
    }
    return 0;
}*/
//largest binary search tree in binary tree
//problem->return the size of the largest BST in a binary tree.
//strategy
//for each node store the following info:
//1.min in subtree
//2.max in subtree
//3.subtree size
//4.size of largest BST
//5.isBST
//recursively,traverse in a bottom-up manner and find out the size of largest BST
/*#include<bits/stdc++.h>
using namespace std;
struct node{
int data;
node*left,*right;
node(int val){
data=val;
left=NULL;
right=NULL;
}
};
struct info {
    int size;
    int max;
    int min;
    int ans;
    bool isbst;
};
info largestbstinbt(node* root){
    if(root==NULL){
        return{0,INT_MIN,INT_MAX,0,true};
    }
    if(root->left==NULL && root->right==NULL){
        return{1,root->data,root->data,1,true};
    }
    info leftinfo = largestbstinbt(root->left);
    info rightinfo = largestbstinbt(root->right);
    info curr;
    curr.size={1+leftinfo.size+rightinfo.size};
    if(leftinfo.isbst && rightinfo.isbst && leftinfo.max<root->data && rightinfo.min> root->data){
        curr.min=min(leftinfo.min,min(rightinfo.min,root->data));
        curr.max=max(rightinfo.max,max(leftinfo.max,root->data));
        curr.ans = curr.size;
        curr.isbst=true;
        return curr;
    }
    curr.ans=max(leftinfo.ans,rightinfo.ans);
    curr.isbst=false;
    return curr;
}
int main(){
    /*
            15
           / \
          20  30
         /
        5       
    */
   /*node* root=new node(15);
   root->left=new node(20);
   root->right=new node(30);
   root->left->left=new node(5);
   cout<<"Largest BST in BT : "<<largestbstinbt(root).ans<<endl;

    return 0;
}*/

//recover in binary search tree
//problem->2 nodes of a bst are swapped.our task is to  restore(correct) the BST.
//strategy:
//since,inorder of a bst is sorted.
//hence,2 elements in a sorted array are swapped.
//and problem changed to restore bst to restore inorder of a bst
//case1:swapped elements are not adjacent to each other 
//case2:swapped elements are adjacent to each other
//maintain 3 pointers -> first,last and mid
//{1,8,3,4,5,6,7,2}-.this is case1
//in case1->first:previous node where 1st number<previous [that is 8]
//mid:number where 1st number<previous [that is 3]
//last:2nd node where number<previous [that is 2]
//then,swap first with last and problem solved
//case2:{1,2,4,3,5,6,7,8}
//first:previous node where 1st number < previous [that is 4]
//mid:number where 1st number < previous [that is 3]
//last:NULL
//then,swap first with mid and problem solved
#include<iostream>
using namespace std;
struct node{
    int data;
    node*left,*right;
    node(int val){
        data=val;
        right=NULL;
        left=NULL;
    }
};
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void calcpointers(node*root,node**first,node**mid,node**last,node**prev){
    if(root==NULL){
        return;
    }
    calcpointers(root->left,first,mid,last,prev);
        if(*prev && root->data<(*prev)->data){
            if(!*first){
                *first=*prev;
                *mid=root;
            }
            else{
                *last=root;
            }
        
    }
    *prev=root;
        calcpointers(root->right,first,mid,last,prev);
}
void restorebst(node*root){
    node*first,*mid,*last,*prev;
    first=NULL;
    mid=NULL;
    last=NULL;
    prev=NULL;
    calcpointers(root,&first,&mid,&last,&prev);
    //case1
    if(first && last){
        swap(&(first->data),&(last->data));
    }
    else if(first && mid){
        swap(&(first->data),&(mid->data));
    }
}
void inorder(node*root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main(){
    /*   
           6
          / \
         9   3
        / \   \ 
       1   4   13    
    
    */
   node*root=new node(6);
   root->left=new node(9);
   root->right=new node(3);
   root->left->left=new node(1);
   root->left->right=new node(4);
   root->right->right=new node(13);
   inorder(root);
   cout<<endl;
   restorebst(root);
   cout<<endl;
   inorder(root);
   cout<<endl;

    return 0;
}










